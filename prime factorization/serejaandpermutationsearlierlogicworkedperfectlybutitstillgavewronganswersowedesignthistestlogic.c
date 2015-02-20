#include<stdio.h>

int findorder(int n, int a[n])
{
    int i;
    for(i=0;i<n;i++){
    if(a[i]==1)return 1;
    if(a[i]==2)return 2;
}
    
}

void printorder(int order, int n, int a[n])
{
     int i;
     int noteindex=0;
     for(i=0;i<n;i++){
                      if(a[i]==1||a[i]==2){
                                           noteindex = i;
                                           break;
                                           }
                      else if(i==n-1)printf("%d",a[i]);
                      else printf("%d ",a[i]);
                      }
     
     if(order==1)printf("1 2 ");
     else printf("2 1 ");
     
     for(i=noteindex+1;i<n;i++) {
                                if(i==n-1)printf("%d",a[i]);
                                else
                                printf("%d ",a[i]);
                                }
     
     
     }

void print(int n, int a[n], int place, int value)//place se just pehle insertion karta hai
{
     int i;
     for(i=0;i<n;i++){
                      if(i==place)break;
                      else if(i==n-1)printf("%d",a[i]);
                      else
                      printf("%d ",a[i]);
                      }
     printf("%d ",value);
     
     for(i=place;i<n;i++){
                           if(i==n-1)printf("%d",a[i]);
                          else
                          printf("%d ",a[i]);
                          }
     
     }

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
              
              int n;
              scanf("%d",&n);
              
              int q[n+1][n-1];
              int i,j;
              for(i=1;i<=n;i++)
              for(j=0;j<n-1;j++)scanf("%d",&q[i][j]);
              
              
              //preprocess first and second sequences
              //in second sequence search for 1
              //if 1 is the last element, set pehle flag = 1
              //not the pehle element
              //search the first series for this element
              //find the next element to this
              // if the next element to this is 2, then series is thisele, 2,1              //zw
              // else(if this element doesn't exist) series is thisele,1                                                   //yx
              
              //else pehle flag=0
              //note the baad element
              //search the first series for this element
              //find the previous element to this
              //if this previous element is 2, then seris is 1,2,thisele
              //else (if this element doesn't exist) the series is 1,thisele
              
              //preprocess first and second and third sequences
              for(i=1;i<=3;i++)
              for(j=0;j<n-1;j++)if(q[i][j]>=i)q[i][j]++;
              
              //printf("\n\n\n");for(i=1;i<=2;i++){for(j=0;j<n-1;j++)printf("%d ",q[i][j]);printf("\n");}printf("\n");
              
              //in second sequence search for 1
              int xind=0;
              for(j=0;j<n-1;j++)if(q[2][j]==1){xind=j;break;}
              
              //if 1 is the last element, set pehle flag = 1
              //note the pehle element
              //search the first series for this element
              //find the next element to this
              // if the next element to this is 2, then call find order function//series is thisele, 2,1              //zw
              // else (or also if this element doesn't exist) series is thisele,1                                                   //yx
              if(xind==n-2){
                            int y = q[2][xind-1];
                            //search the first seris for y
                            int zind = 0;
                            for(j=0;j<n-1;j++)if(q[1][j]==y){zind=j;break;}
                            
                            //find the next element to this
                            int wind=zind+1;
                            //element doesn't exist means that wind=n-1
                            if(wind==n-1)print(n-1,q[1],wind,1);
                            else{
                                 int w = q[1][zind+1];
                                 if(w==2){
                                          //$print(n-1,q[1],wind+1,1);
                                          int order = findorder(n-1,q[3]);
                                          printorder(order,n-1,q[1]);
                                          
                                          }
                                 else print(n-1,q[1],wind,1);
                                 }
                            }
              
              
              //else pehle flag=0
              //note the baad element
              //search the first series for this element
              //find the previous element to this
              //if this previous element is 2, then call functoin find order //seris is 1,2,thisele                                                                //wz
              //else (if this element doesn't exist) the series is 1,thisele                                                            //xy
              if(xind!=n-2){
                            int y = q[2][xind+1];
                            //search the first seris for y
                            int zind = 0;
                            for(j=0;j<n-1;j++)if(q[1][j]==y){zind=j;break;}
                            
                            //find the previous element to this
                            int wind=zind-1;
                            //element doesn't exist means that wind=-1
                            if(wind==-1)print(n-1,q[1],wind+1,1);
                            else{
                                 int w = q[1][wind];
                                 if(w==2){
                                          //print(n-1,q[1],wind,1);
                                          int order = findorder(n-1,q[3]);
                                          printorder(order,n-1,q[1]);
                                          }
                                 else print(n-1,q[1],wind+1,1);
                                 }
                            }
              
              
              printf("\n");
              
              }
    
    
    //getch();
    return 0;
}

#include<stdio.h>
#include<math.h>
void fun(int *abhi, int* manyu, int *sood ,int x , int y)
{
     
 int a = x;
 int b = y;
 
 int asteps=0;
 int bsteps=0;
 //19 9 4 2 1
 //37 18 9
 
 int control=0;
 
 control = a>b?1:2;//printf("%d\n",control);
 
 while(1==1)
 {
     if(control==1){
                    while(a>b){
                               if(a%2==0)a/=2;
                               else a=(a-1)/2;
                               asteps++;
                               }
                    if(a==b) break;
                    else control=2;
                    }
                    

     if(control==2){
                    while(b>a){
                               if(b%2==0)b/=2;
                               else b=(b-1)/2;
                               bsteps++;
                               }
                    if(a==b) break; 
                    else control=1;
                    }
     
     
     }
    
*abhi=a;
*manyu=asteps;
*sood=bsteps;
//printf("%d %d %d\n",a,asteps,bsteps);
    
     
     }
int main()
{
    
    int color=0;// means that root is black;
    
    int t;
    scanf("%d",&t);
    while(t--)
    {
              char ch;
              int x ,y;
              scanf("%c",&ch);
              scanf("%c%c",&ch,&ch);
              if(ch=='i');
              else scanf("%d%d",&x,&y);
              
      //        printf("%c %d %d\n",ch,x,y);
              
              //now ch stores the query mode and x and y
              
              if(ch=='i')color = 1-color;
              else{
                   
                   int lca,xcount,ycount;
                   fun(&lca,&xcount,&ycount,x,y);
        //           printf("%d %d %d\n",lca, xcount,ycount);
                   
                   double lg = log(lca)/log(2);
                   int lgf = floor(lg);
          //         printf("lgf=%d\n",lgf);
                   //if lgf=0 means root if lgf = 1 means first level
                   int lcacolor;
                   if(lgf%2==0)lcacolor = color;
                   else lcacolor=1-color;
                   
            //       printf("color  = %d lcacolor = %d\n",color,lcacolor);
                   
                   int leftcolor = 1-lcacolor;
                   int rightcolor = 1-lcacolor;
                   
              //     printf("leftcolor=%d rightcolor=%d\n",leftcolor,rightcolor);
                   int prahlad[2]={0};
                   //operating in left branch
                   
                   if(xcount%2==0){prahlad[leftcolor]+=xcount/2;prahlad[1-leftcolor]+=xcount/2;}
                   if(xcount%2==1){prahlad[leftcolor]+=xcount/2+1;prahlad[1-leftcolor]+=xcount/2;}
                   
                   //operating in right branch
                   
                   if(ycount%2==0){prahlad[rightcolor]+=ycount/2;prahlad[1-rightcolor]+=ycount/2;}
                   if(ycount%2==1){prahlad[rightcolor]+=ycount/2+1;prahlad[1-rightcolor]+=ycount/2;}
                   
                   //operate lca
                   prahlad[lcacolor]++;
                   
                   if(ch=='r')printf("%d\n",prahlad[1]);
                   
                   if(ch=='b')printf("%d\n",prahlad[0]);
                   
                   
                   }
              
              
              }
    
    
    
 
 getch();
 return 0;   
}

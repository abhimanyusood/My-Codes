#include<stdio.h>
#include<conio.h>

void pa(int a[8][8]);
int ch1(int a[8][8],int c,int d);
int ch2(int a[8][8],int c);
int dc(int a[8][8],int c,int ar);

int main()
{

srand((unsigned)time(NULL));
     
int a[8][8],i,j,c,d,x,H,ha=-1;

for(H=0;H>-1;H++){    
                    for(i=0;i<=7;i++)
                    for(j=0;j<=7;j++)
                    a[i][j]=0;
                    
                 /* pa(a); */
                 
                    
                    
                    
                    for(c=0;c<=3;){
                                       d=(rand()%8);
                                       x= ch1(a,c,d);
                                       if(x==1){a[d][c]=1;c++;}
                                       
                                     }
                                       
              /*    pa(a);printf("\n\n\n\n");*/
                    
                    
                    for(c=4;c<=7;c++){
                                        ha=-1;
                                        x= ch2(a,c);
                                        if(x==13){/*printf("\n\nuu%d bbbb\n",x); pa(a);*/ha=dc(a,c,10);}  
                                        else{a[x][c]=1;} 
                                     /* printf("\n\nuu%d bbbb%d moo %d koo\n",x,c,ha); pa(a);*/
                                        if(ha==0)break;   
                                      }     
                                           
                    
                    
                    
                    if(ha!=0)break;   
                    
                  

              }    
              
              
pa(a);
     
                    
    
getch();
return 0;
    
}



void pa(int a[8][8])
{
   int i,j; 
    for(i=0;i<=7;i++)
    for(j=0;j<=7;j++)
    { if(a[i][j]==0)printf(".  ");
      else printf("Q  ");
      if(j==7)printf("\n\n");
      }printf("\n\n\n\n");
    
    }



int ch1(int a[8][8],int c,int d)
{
    
    int i,j,s=0;
    for(j=0;j<=7;j++)s=s+a[d][j];
    
    i=d;j=c;
    for(;i<=7&&j<=7;){s=s+a[i][j];i++;j++;}
     
    i=d;j=c;
    for(;i>=0&&j>=0;){s=s+a[i][j];i--;j--;}
    
    i=d;j=c;
    for(;i>=0&&j<=7;){s=s+a[i][j];i--;j++;}
    
    i=d;j=c;
    for(;i<=7&&j>=0;){s=s+a[i][j];i++;j--;}
    
    if(s==0){return 1;}
    else {return 0;}
    
    
    }
    
    
    
    
int ch2(int a[8][8],int c)
{
    
    int r,i,j;
    
    for(r=0;r<=7;r++){
                      
                        int s=0;                  
                                          
                        for(j=0;j<=7;j++)s=s+a[r][j];
                        
                        i=r;j=c;
                        for(;i<=7&&j<=7;){s=s+a[i][j];i++;j++;}
                         
                        i=r;j=c;
                        for(;i>=0&&j>=0;){s=s+a[i][j];i--;j--;}
                        
                        i=r;j=c;
                        for(;i>=0&&j<=7;){s=s+a[i][j];i--;j++;}
                        
                        i=r;j=c;
                        for(;i<=7&&j>=0;){s=s+a[i][j];i++;j--;}
                        
                        if(s==0){return r;break;}
    
    
                            
                            }
                        
    if(r==8)return 13;
    
     }
    
    
    
    





    
int dc(int a[8][8],int c,int ar)
{
    
    int r,i,j,ha=-1;
    
    for(r=0;r<=7;r++){
    
                                          
                                     int s=0;                  
                                                      
                                     if(r==ar)r=r+1;
                                    
                                    i=r;j=c;
                                    for(;i<=7&&j<=7;){s=s+a[i][j];i++;j++;}
                                     
                                    i=r;j=c;
                                     for(;i>=0&&j>=0;){s=s+a[i][j];i--;j--;}
                                    
                                    i=r;j=c;
                                    for(;i>=0&&j<=7;){s=s+a[i][j];i--;j++;}
                                    
                                    i=r;j=c;
                                    for(;i<=7&&j>=0;){s=s+a[i][j];i++;j--;}
                                    
                                    if(s==0){a[r][c]=1;break;}
                                    
                                  
                   

                    }
                    
        if(r==8){return 0;}
                    /*printf("\n\ntatti%d tatti\n",r); pa(a);*/
                            

           for(j=0;j<=7;j++)if(a[r][j]==1&&j!=c)break;
           if(j!=8){
                     a[r][j]=0;/*pa(a);*/
                     ha=dc(a,j,r);/*printf("moo %d ha",ha);*/
                     if(ha==0)return 0;
                      }
           
          

    
    }    
    
    
    
    
    
    
    
    

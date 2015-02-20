#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>

void access(int ch[8][8],int H,int K);
void assign(int ch[8][8],int H,int K,int A[8]); 
int  small(int A[8]);
int  comb(int A[8],int X);
void dev();
void welcome();

int main()
{
    welcome();
    

    int L;
    printf("Enter the no. of tours you want -\n\n");
    scanf("%d",&L);
    
    system("cls");
    welcome();  

    int w;
    printf("Choose type of tours you want -\n\n1-Open Tours\n2-Closed tours\n\n");
    for(;;)
    {scanf("%d",&w);
    if(w==1||w==2)break;
    else printf("\nEnter either 1 or 2.\n");
    }
    
    system("cls");
    welcome();  
    
    printf("Your tours are-\n\n\n\n");
  
int a[63],t,p=64,l;
    
for(l=0;l<L;l++)
{     
      p=64;          
      int chess[8][8] ={{2,3,4,4,4,4,3,2},
                        {3,4,6,6,6,6,4,3},
                        {4,6,8,8,8,8,6,4}, 
                        {4,6,8,8,8,8,6,4},
                        {4,6,8,8,8,8,6,4},
                        {4,6,8,8,8,8,6,4},
                        {3,4,6,6,6,6,4,3},
                        {2,3,4,4,4,4,3,2}  };
                
    int knight[8][8]={0};
    int b[8],t,n=0;
    for(t=0;t<63;t++)a[t]=-1;                  
    int h=7 , k=1;
    chess[7][1]=-1;
    knight[7][1]=0;

while(n<63)
{    
  
  
    
    
  /*int i,j;
    for(i=0;i<8;i++)
    {for(j=0;j<8;j++)
     printf("%d ",chess[i][j]);
     printf("\n");
     } 
    */
    int t;      
    for(t=0;t<8;t++)b[t]=0;
    assign(chess,h,k,b);
    
    
    int x= small(b);
   
 /*  printf("\nyips\n");
  */
     
    int y;
    if(x!=9)y= comb(b,x);else break;
    
 
    /*  printf("\n%d %d %d\n",x,y,n); 
      */
      
      a[n]=y;
      if(y==0){
       chess[h-1][k+2]=-1  ;
       knight[h-1][k+2]=n+1  ;
       h--;k=k+2; n=n+1;  }    
      
      if(y==1){
       chess[h-2][k+1]=-1  ;
       knight[h-2][k+1]=n+1  ;
       h=h-2;k=k+1; n++;                                        } 
                    
      if(y==2){
       chess[h-2][k-1]=-1  ;
       knight[h-2][k-1]=n+1  ;
       h=h-2;k=k-1; n++;                                        }
       
      if(y==3){
       chess[h-1][k-2]=-1  ;
       knight[h-1][k-2]=n+1  ;
       h--;k=k-2; n++;                                          }
       
      if(y==4){
       chess[h+1][k-2]=-1  ;
       knight[h+1][k-2]=n+1  ;
       h=h+1;k=k-2; n++;                                        }
       
      if(y==5){
       chess[h+2][k-1]=-1  ;
       knight[h+2][k-1]=n+1  ;
       h=h+2;k--; n++;                                          }
       
      if(y==6){
       chess[h+2][k+1]=-1  ;
       knight[h+2][k+1]=n+1  ;
       h=h+2;k++; n++;                                          }
       
       
      if(y==7){
       chess[h+1][k+2]=-1  ;
       knight[h+1][k+2]=n+1  ;
       h++;k=k+2;  n++;                                          }  
   
  /*printf("\nmmm%dmmm\n",a[0]);
 */  access(chess,h,k);
}  

    int i,j,shit=0;
    
    for(i=0;i<8;i++)
    {for(j=0;j<8;j++)
     if(knight[i][j]==0)shit++; 
     } 
     
    if(shit==2) for(i=0;i<8;i++)
                {for(j=0;j<8;j++)
                 if(knight[i][j]==0&&i!=7&&j!=1)knight[i][j]=63; 
                 } 
     
    if((w==1&&shit==2)||(w==2&&shit==1)){ 
                printf("Tour %d\n\n\n",l+1);
                for(i=0;i<8;i++)
                {for(j=0;j<8;j++)
                 if(knight[i][j]<10) printf(" %d   ",knight[i][j]); else printf("%d   ",knight[i][j]);
                 printf("\n\n");
                 } 
                printf("\n\n\n\n\n");
                }
                
    else l--;
/*    printf("\n\n\n\n\n\n\n\n\n\n\n");
    for(t=0;t<63;t++)printf("%d\n",a[t]);
    printf("loopy");

int o;
for(t=0;t<63;t++)  
if(a[t]==-1){o=t;break;}
if(o<p)p=o;
printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\twat %d twat",o);
*/
}
dev();
getch(); 
return 0;
 }


void access(int ch[8][8],int H,int K)
{
 
      if(H-1>=0&&H-1<8&&K+2>=0&&K+2<8&&ch[H-1][K+2]>0)ch[H-1][K+2]--  ;
      if(H-2>=0&&H-2<8&&K+1>=0&&K+1<8&&ch[H-2][K+1]>0)ch[H-2][K+1]--  ;
      if(H-2>=0&&H-2<8&&K-1>=0&&K-1<8&&ch[H-2][K-1]>0)ch[H-2][K-1]--  ;
      if(H-1>=0&&H-1<8&&K-2>=0&&K-2<8&&ch[H-1][K-2]>0)ch[H-1][K-2]--  ;
      if(H+1>=0&&H+1<8&&K-2>=0&&K-2<8&&ch[H+1][K-2]>0)ch[H+1][K-2]--  ;
      if(H+2>=0&&H+2<8&&K-1>=0&&K-1<8&&ch[H+2][K-1]>0)ch[H+2][K-1]--  ; 
      if(H+2>=0&&H+2<8&&K+1>=0&&K+1<8&&ch[H+2][K+1]>0)ch[H+2][K+1]--  ; 
      if(H+1>=0&&H+1<8&&K+2>=0&&K+2<8&&ch[H+1][K+2]>0)ch[H+1][K+2]--  ;
         
    }
      
      
      
void assign(int ch[8][8],int H,int K,int A[8])
{
         
    
      
      if(H-1>=0&&H-1<8&&K+2>=0&&K+2<8&&ch[H-1][K+2]>=0)
      A[0] = ch[H-1][K+2]  ;
      
      if(H-2>=0&&H-2<8&&K+1>=0&&K+1<8&&ch[H-2][K+1]>=0)
      A[1] = ch[H-2][K+1]  ;
      
      if(H-2>=0&&H-2<8&&K-1>=0&&K-1<8&&ch[H-2][K-1]>=0)
      A[2] = ch[H-2][K-1]  ;   
      
      if(H-1>=0&&H-1<8&&K-2>=0&&K-2<8&&ch[H-1][K-2]>=0)
      A[3] = ch[H-1][K-2]  ;
      
      if(H+1>=0&&H+1<8&&K-2>=0&&K-2<8&&ch[H+1][K-2]>=0)
      A[4] = ch[H+1][K-2]  ;
      
      if(H+2>=0&&H+2<8&&K-1>=0&&K-1<8&&ch[H+2][K-1]>=0)
      A[5] = ch[H+2][K-1]  ;
      
      if(H+2>=0&&H+2<8&&K+1>=0&&K+1<8&&ch[H+2][K+1]>=0)
      A[6] = ch[H+2][K+1]  ;
      
      if(H+1>=0&&H+1<8&&K+2>=0&&K+2<8&&ch[H+1][K+2]>=0)
      A[7] = ch[H+1][K+2]  ;
  
 }
        
        
int  small(int A[8])
{
     int z=9 ,t;
     for(t=0;t<8;t++)
     {if(A[t]<z&&A[t]>0){z=A[t];}}           
     return z ;
 
     }
     
     
int  comb(int A[8],int X )
{
     int v;
     for(v=0;v>=0;v++)
     {int d=rand()%8; 
      if(A[d]==X){v=-1;return(d);} 
     }
   }  



void dev()
{     
      printf("\n\nTHANK YOU\n\n\n\n\n\n\t\t\t\t\t\t\tdeveloped by -\n\t\t\t\t\t\t\tabhimanyu sood");
}     



void welcome()
{
     printf(" \t\t              KNIGHT'S TOUR\n\n\n");
     printf("WELCOME \n\n\n\n");
     
}

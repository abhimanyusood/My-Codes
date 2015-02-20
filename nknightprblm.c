#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>

int N;//size of the board declared global so that it can be used up in any of the functions

void access(int ch[N][N],int H,int K);
void assign(int ch[N][N],int H,int K,int A[8]); 
int  small(int A[8]);
int  comb(int A[8],int X);
void dev();
void welcome();

int main()
{
    welcome();
    printf("Enter the length of the board\n");
    
    scanf("%d",&N);

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
  
int a[(N*N)-1],t,p=N*N,l;
    
for(l=0;l<L;l++)
{     
      p=64;   
      
      
      int chess[N][N];
      int pp,qq;
      for(pp=0;pp<N;pp++)
      for(qq=0;qq<N;qq++)
      {
                      if(pp==0||pp==N-1){
                               chess[pp][0]=2; chess[pp][1]=3;
                               int rr;
                               for(rr=2;rr<N-2;rr++)chess[pp][rr]=4;
                               chess[pp][N-2]=3; chess[pp][N-1]=2;
                               }
                      else if(pp==1||pp==N-2){
                               chess[pp][0]=3; chess[pp][1]=4;
                               int rr;
                               for(rr=2;rr<N-2;rr++)chess[pp][rr]=6;
                               chess[pp][N-2]=4; chess[pp][N-1]=3;
                               }
                      else{
                           chess[pp][0]=4;chess[pp][1]=6;
                           chess[pp][N-2]=6;chess[pp][N-1]=4;
                           int rr;
                           for(rr=2;rr<N-2;rr++)chess[pp][rr]=8;
                           }
      }
      /*
                for(pp=0;pp<N;pp++)
                {for(qq=0;qq<N;qq++)
                printf(" %d   ",chess[pp][qq]);
                 printf("\n\n");
                 }
        */                       
                           
  /*                    
                      }       
      int chess[8][8] ={{2,3,4,4,4,4,3,2},
                        {3,4,6,6,6,6,4,3},
                        {4,6,8,8,8,8,6,4}, 
                        {4,6,8,8,8,8,6,4},
                        {4,6,8,8,8,8,6,4},
                        {4,6,8,8,8,8,6,4},
                        {3,4,6,6,6,6,4,3},
                        {2,3,4,4,4,4,3,2}  };
          
     */      
     
    int knight[N][N];
    for(pp=0;pp<N;pp++)for(qq=0;qq<N;qq++)knight[pp][qq]=0;
                
                
                 
                 
    int b[8],t,n=0;
    for(t=0;t<(N*N)-1;t++)a[t]=-1;                  
    int h=N-1 , k=1;//starting position of the knight can also be stated manually
    chess[h][k]=-1;
    knight[h][k]=0;

while(n<(N*N)-1)
{    
  
  
    
    

    int t;      
    for(t=0;t<8;t++)b[t]=0;
    assign(chess,h,k,b);
    
    
    int x= small(b);
   

     
    int y;
    if(x!=9)y= comb(b,x);else break;
    
 
    
      
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
   
    access(chess,h,k);
}  

    int i,j,shit=0;
    
    for(i=0;i<N;i++)
    {for(j=0;j<N;j++)
     if(knight[i][j]==0)shit++; 
     } 
     
    if(shit==2) for(i=0;i<N;i++)
                {for(j=0;j<N;j++)
                 if(knight[i][j]==0&&i!=N-1&&j!=1)knight[i][j]=(N*N)-1; //I!=INITIAL X OF HORSE (7) J!=INITIAL Y OF HORSE (1)
                 } 
     
    if((w==1&&shit==2)||(w==2&&shit==1)){ 
                printf("Tour %d\n\n\n",l+1);
                for(i=0;i<N;i++)
                {for(j=0;j<N;j++)
                 if(knight[i][j]<10) printf(" %d   ",knight[i][j]); else printf("%d   ",knight[i][j]);
                 printf("\n\n");
                 } 
                printf("\n\n\n\n\n");
                }
                
    else l--;

}
dev();
getch(); 
return 0;
 }


void access(int ch[N][N],int H,int K)
{
 
      if(H-1>=0&&H-1<N&&K+2>=0&&K+2<N&&ch[H-1][K+2]>0)ch[H-1][K+2]--  ;
      if(H-2>=0&&H-2<N&&K+1>=0&&K+1<N&&ch[H-2][K+1]>0)ch[H-2][K+1]--  ;
      if(H-2>=0&&H-2<N&&K-1>=0&&K-1<N&&ch[H-2][K-1]>0)ch[H-2][K-1]--  ;
      if(H-1>=0&&H-1<N&&K-2>=0&&K-2<N&&ch[H-1][K-2]>0)ch[H-1][K-2]--  ;
      if(H+1>=0&&H+1<N&&K-2>=0&&K-2<N&&ch[H+1][K-2]>0)ch[H+1][K-2]--  ;
      if(H+2>=0&&H+2<N&&K-1>=0&&K-1<N&&ch[H+2][K-1]>0)ch[H+2][K-1]--  ; 
      if(H+2>=0&&H+2<N&&K+1>=0&&K+1<N&&ch[H+2][K+1]>0)ch[H+2][K+1]--  ; 
      if(H+1>=0&&H+1<N&&K+2>=0&&K+2<N&&ch[H+1][K+2]>0)ch[H+1][K+2]--  ;
         
    }
      
      
      
void assign(int ch[N][N],int H,int K,int A[8])
{
         
    
      
      if(H-1>=0&&H-1<N&&K+2>=0&&K+2<N&&ch[H-1][K+2]>=0)
      A[0] = ch[H-1][K+2]  ;
      
      if(H-2>=0&&H-2<N&&K+1>=0&&K+1<N&&ch[H-2][K+1]>=0)
      A[1] = ch[H-2][K+1]  ;
      
      if(H-2>=0&&H-2<N&&K-1>=0&&K-1<N&&ch[H-2][K-1]>=0)
      A[2] = ch[H-2][K-1]  ;   
      
      if(H-1>=0&&H-1<N&&K-2>=0&&K-2<N&&ch[H-1][K-2]>=0)
      A[3] = ch[H-1][K-2]  ;
      
      if(H+1>=0&&H+1<N&&K-2>=0&&K-2<N&&ch[H+1][K-2]>=0)
      A[4] = ch[H+1][K-2]  ;
      
      if(H+2>=0&&H+2<N&&K-1>=0&&K-1<N&&ch[H+2][K-1]>=0)
      A[5] = ch[H+2][K-1]  ;
      
      if(H+2>=0&&H+2<N&&K+1>=0&&K+1<N&&ch[H+2][K+1]>=0)
      A[6] = ch[H+2][K+1]  ;
      
      if(H+1>=0&&H+1<N&&K+2>=0&&K+2<N&&ch[H+1][K+2]>=0)
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

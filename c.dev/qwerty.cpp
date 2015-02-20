#include<stdio.h>
#include<conio.h>
#include <time.h>
#include <stdlib.h>

 
int main()
{
    int a[64];
    int chess[8][8];
    
    for(int i=0;i<8;i++)
    for(int j=0;j<8;j++)
    chess[i][j]=0;
  
 
int n=0;

  
  for(int t=0;t<64;t++)a[t]=0;
while(a[63]==0) 
{/* printf("\n\n\n\n\n\n");
  */                 int n=0; 
 int h=7 , k=1;
chess[7][1]=1;


while(n<64)
{    int t=n ;
     
      int d=1+rand()%8;     
    /*  printf("%d\n\n",d);
 */
     if(d==1&&h-1>=0&&h-1<8&&k+2>=0&&k+2<8&&chess[h-1][k+2]!=1){
       chess[h-1][k+2]=1  ;
       a[n]=d;
       h--;k=k+2; int t=n ; n++;                                      }    
      
      if(d==2&&h-2>=0&&h-2<8&&k+1>=0&&k+1<8&&chess[h-2][k+1]!=1){
       chess[h-2][k+1]=1  ;
       a[n]=d;
       h=h-2;k=k+1; int t=n ; n++;                                        } 
                    
       if(d==3&&h-2>=0&&h-2<8&&k-1>=0&&k-1<8&&chess[h-2][k-1]!=1){
       chess[h-2][k-1]=1  ;
       a[n]=d;
       h=h-2;k=k-1; int t=n ; n++;                                         }
       
       if(d==4&&h-1>=0&&h-1<8&&k-2>=0&&k-2<8&&chess[h-1][k-2]!=1){
       chess[h-1][k-2]=1  ;
       a[n]=d;
       h--;k=k-2; int t=n ; n++;                                         }
       
      if(d==5&&h+1>=0&&h+1<8&&k-2>=0&&k-2<8&&chess[h+1][k-2]!=1){
       chess[h+1][k-2]=1  ;
       a[n]=d;
       h=h+1;k=k-2; int t=n ; n++;                                       }
       
      if(d==6&&h+2>=0&&h+2<8&&k-1>=0&&k-1<8&&chess[h+2][k-1]!=1){
       chess[h+2][k-1]=1  ;
       a[n]=d;
       h=h+2;k--; int t=n ; n++;                                          }
       
      if(d==7&&h+2>=0&&h+2<8&&k+1>=0&&k+1<8&&chess[h+2][k+1]!=1){
       chess[h+2][k+1]=1  ;
       a[n]=d;
       h=h+2;k++; int t=n ; n++;                                        }
       
       
      if(d==8&&h+1>=0&&h+1<8&&k+2>=0&&k+2<8&&chess[h+1][k+2]!=1){
       chess[h+1][k+2]=1  ;
       a[n]=d;
       h++;k=k+2; int t=n ; n++;                                          }  
   
                                                  
if(a[t]==0) break; 



}}


for(int t=0;t<64;t++)
 {if(a[t]!=0)printf("%d\n",a[t]);}


getch(); 
return 0;
 }

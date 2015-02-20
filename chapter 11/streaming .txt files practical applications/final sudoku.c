#include<stdio.h>
#include<conio.h>

void scansudoku(int a[9][9][10]);
void initializecube(int a[9][9][10]);
void bakline(int a[9][9][10],int i,int j,int z);
void pan(int a[9][9][10] );
void print(int a[9][9][10]);
void printarray(int a[9][9][10]);
int leash(int a[9][9][10][63][9],int m);
void copystb(int a[9][9][10], int b[9][9][10][63][9], int m, int n);
void copybts(int a[9][9][10], int b[9][9][10][63][9], int m, int n);
void copym(int a[9][9][10][63][9], int m1, int m2, int n);
void copyn(int a[9][9][10][63][9], int m, int n1, int n2);
int check(int v[9][9][10]);

int main()
{
  /*  display();*/
    
    int a[9][9][10];
    initializecube(a);/*print(a);a[0][6][0]=4;bakline(a,0,6,4);
                               a[4][7][0]=4;bakline(a,4,7,4);
                               a[6][0][0]=4;bakline(a,6,0,4);
                               a[7][5][0]=4;bakline(a,7,5,4);                           /*   print(a);*/
                               
                           /*    a[8][6][0]=6;bakline(a,8,6,6);
                               a[4][7][0]=6;bakline(a,4,7,6);
                               a[1][3][0]=6;bakline(a,1,3,6);
                               a[2][0][0]=6;bakline(a,2,0,6);  
                               
                               a[6][0][0]=1;bakline(a,6,0,1);
                               a[6][1][0]=2;bakline(a,6,1,2);
                               a[6][2][0]=3;bakline(a,6,2,3);
                               a[7][0][0]=4;bakline(a,7,0,4);  
                               a[7][1][0]=5;bakline(a,7,1,5);
                               a[7][2][0]=6;bakline(a,7,2,6);
                               a[8][0][0]=7;bakline(a,8,0,7);
                               
                               a[2][1][0]=9;bakline(a,2,2,9);
                               
                               
                               
                               a[6][3][0]=1;bakline(a,6,3,1);
                               a[6][4][0]=2;bakline(a,6,4,2);
                               a[6][5][0]=3;bakline(a,6,5,3);  
                               a[7][3][0]=4;bakline(a,7,3,4);
                               a[7][4][0]=5;bakline(a,7,4,5);
                               a[7][5][0]=6;bakline(a,7,5,6);
                               a[8][3][0]=7;bakline(a,8,3,7);
                               a[8][4][0]=8;bakline(a,8,4,8);
                               
                               
                               a[6][6][0]=1;bakline(a,6,6,1);
                               a[6][7][0]=2;bakline(a,6,7,2);
                               a[6][8][0]=3;bakline(a,6,8,3);
                               a[7][6][0]=4;bakline(a,7,6,4);  
                               a[7][7][0]=5;bakline(a,7,7,5);
                               a[7][8][0]=6;bakline(a,7,8,6);
                               a[8][6][0]=7;bakline(a,8,6,7);
                               a[8][7][0]=8;bakline(a,8,7,8);
                               a[8][8][0]=9;bakline(a,8,8,9);*/
                  /*             
                               a[0][3][0]=9;bakline(a,0,3,9);
                               a[0][5][0]=8;bakline(a,0,5,8);
                               a[0][6][0]=4;bakline(a,0,6,4);
                               a[1][0][0]=3;bakline(a,1,0,3);  
                               a[1][5][0]=2;bakline(a,1,5,2);
                               a[1][7][0]=5;bakline(a,1,7,5);
                               a[2][9][0]=6;bakline(a,2,9,6);
                               a[2][7][0]=9;bakline(a,2,7,9);
                               a[2][8][0]=3;bakline(a,2,8,3);
                               a[3][0][0]=1;bakline(a,3,0,1);
                               a[3][3][0]=8;bakline(a,3,3,8);
                               a[3][5][0]=9;bakline(a,3,5,9);
                               a[3][8][0]=6;bakline(a,3,8,6);  
                               a[4][2][0]=4;bakline(a,4,2,4);
                               a[4][6][0]=7;bakline(a,4,6,7);
                               a[5][0][0]=2;bakline(a,5,0,2);
                               a[5][3][0]=7;bakline(a,5,3,7);
                               a[5][5][0]=3;bakline(a,5,5,3);
                               a[5][8][0]=9;bakline(a,5,8,9);
                               a[6][0][0]=7;bakline(a,6,0,7);
                               a[6][1][0]=1;bakline(a,6,1,1);
                               a[6][8][0]=2;bakline(a,6,8,2);  
                               a[7][1][0]=2;bakline(a,7,1,2);
                               a[7][3][0]=1;bakline(a,7,3,1);
                               a[7][8][0]=4;bakline(a,7,8,4);
                               a[8][2][0]=6;bakline(a,8,2,6);
                               a[8][3][0]=3;bakline(a,8,3,3);
                               a[8][5][0]=7;bakline(a,8,5,7);*/
                               
    srand((unsigned)time(NULL));
     
                                
    FILE *x;
    if((x=fopen("po.txt","r"))==NULL)printf("file couldn't be opened");
    else {int r,c;
     for(r=0;r<9;r++)
     for(c=0;c<9;c++){                                 
     fscanf(x, "%d",&a[r][c][0]);
     bakline(a,r,c,a[r][c][0]);}
                             fclose(x); } 
                    printarray(a);
                               
                               
                               
 /*   scansudoku(a);printarray(a);

    */
  /*  pan(a);
    
    int h=check(a);
    
    if(h==2)printarray(a);
    else{ printf("\n\ntjjjj");}*/
  int b[9][9][10][63][9];
    copystb(a,b,0,0);
    int l=leash(b,1);

    getch();
}

void print(int a[9][9][10])
{
     printf("\n\ntatti\n%d\n%d\n%d\n%d\n%d%d\n%d\n%d\n%d\n\n",a[0][8][0],a[8][2][0],a[4][4][0],a[4][8][0],a[8][0][0],a[8][4][0],a[8][8][0],a[0][3][0],a[0][0][0]);

}



void printarray(int a[9][9][10])
{
     int r,c;

     for(r=0;r<9;r++){
     for(c=0;c<9;c++)                 
     printf("%d ",a[r][c][0]);
     printf("\n");}
     printf("\n\n");
     
                      
}




void scansudoku(int a[9][9][10])
{
     int r,c;

     for(r=0;r<9;r++)
     for(c=0;c<9;c++){
     if(r==0&&c==0)printf("\n");                 
     printf("a[%d][%d]= ",r+1,c+1);                 
     scanf("%d",&a[r][c][0]);
     bakline(a,r,c,a[r][c][0]);}
   /*  if(1<=a[r][c][0]&&a[r][c][0]<=9)bakline(a,r,c,a[r][c][0]);
     else {  printf("\t\t Entered value must lie between 1 to 9");c--;}}
    */              
}
    




void initializecube(int a[9][9][10])
{
     int i,j,k;

     for(i=0;i<9;i++)
     for(j=0;j<9;j++)     
     for(k=1;k<=9;k++)
     a[i][j][k]=1;
         
}




void bakline(int a[9][9][10],int i,int j,int z)
{
     int row,col,k,r,c,d;
     
     if(1<=a[i][j][0]&&a[i][j][0]<=9){for(k=1;k<=9;k++)a[i][j][k]=0;
     
     for(col=0;col<9;col++)a[i][col][z]=0;

     for(row=0;row<9;row++)a[row][j][z]=0;
     
     if(0<=i&&i<=2&&0<=j&&j<=2)d=1;
     if(0<=i&&i<=2&&3<=j&&j<=5)d=2;
     if(0<=i&&i<=2&&6<=j&&j<=8)d=3;
     if(3<=i&&i<=5&&0<=j&&j<=2)d=4;
     if(3<=i&&i<=5&&3<=j&&j<=5)d=5;
     if(3<=i&&i<=5&&6<=j&&j<=8)d=6;
     if(6<=i&&i<=8&&0<=j&&j<=2)d=7;
     if(6<=i&&i<=8&&3<=j&&j<=5)d=8;
     if(6<=i&&i<=8&&6<=j&&j<=8)d=9;
     
     switch(d){
               case 1:
               for(row=0;row<=2;row++)for(col=0;col<=2;col++)a[row][col][z]=0;
               break;
               
               case 2:
               for(row=0;row<=2;row++)for(col=3;col<=5;col++)a[row][col][z]=0;
               break;
               
               case 3:
               for(row=0;row<=2;row++)for(col=6;col<=8;col++)a[row][col][z]=0;
               break;
               
               case 4:
               for(row=3;row<=5;row++)for(col=0;col<=2;col++)a[row][col][z]=0;
               break;
               
               case 5:
               for(row=3;row<=5;row++)for(col=3;col<=5;col++)a[row][col][z]=0;
               break;
               
               case 6:
               for(row=3;row<=5;row++)for(col=6;col<=8;col++)a[row][col][z]=0;
               break;
               
               case 7:
               for(row=6;row<=8;row++)for(col=0;col<=2;col++)a[row][col][z]=0;
               break;
               
               case 8:
               for(row=6;row<=8;row++)for(col=3;col<=5;col++)a[row][col][z]=0;
               break;
               
               case 9:
               for(row=6;row<=8;row++)for(col=6;col<=8;col++)a[row][col][z]=0;
               break;
               
               }}
}






void pan(int a[9][9][10] )
{
     int oops=1;
 while(oops!=0){    
     oops=0;
     
     
     int row,col,i,j,k,sum=0,o;
     
for(k=1;k<=9;k++)for(row=0;row<=2;row++)for(col=0;col<=2;col++){
                                                                     o=0;sum=sum+a[row][col][k];
                                                                     if(row==2&&col==2){
                                                                                        if(sum==1){
                                                                                                   for(i=0;i<=2;i++){
                                                                                                                     for(j=0;j<=2;j++){
                                                                                                                                       if(a[i][j][k]==1){/*printf("%d %d",i,j);*/o=2;break;}
                                                                                                                                       }
                                                                                                                     if(o==2)break;
                                                                                                                     }
                                                                                                    a[i][j][0]=k;bakline(a,i,j,k);oops++;/*printf("%d %d %d %d",i,j,k,sum);     */
                                                                                                    }
                                                                                         sum=0;
                                                                                         }/*printf("sum=%d",sum);*/
                                                                     }                              




for(k=1;k<=9;k++)for(row=0;row<=2;row++)for(col=3;col<=5;col++){
                                                                     o=0;sum=sum+a[row][col][k];
                                                                     if(row==2&&col==5){
                                                                                        if(sum==1){
                                                                                                   for(i=0;i<=2;i++){
                                                                                                                     for(j=3;j<=5;j++){
                                                                                                                                       if(a[i][j][k]==1){/*printf("%d %d",i,j);*/o=2;break;}
                                                                                                                                       }
                                                                                                                     if(o==2)break;
                                                                                                                     }
                                                                                                    a[i][j][0]=k;bakline(a,i,j,k);oops++;/*printf("%d %d %d %d",i,j,k,sum);     */
                                                                                                    }
                                                                                         sum=0;
                                                                                         }/*printf("sum=%d",sum);*/
                                                                     }                              




for(k=1;k<=9;k++)for(row=0;row<=2;row++)for(col=6;col<=8;col++){
                                                                     o=0;sum=sum+a[row][col][k];
                                                                     if(row==2&&col==8){
                                                                                        if(sum==1){
                                                                                                   for(i=0;i<=2;i++){
                                                                                                                     for(j=6;j<=8;j++){
                                                                                                                                       if(a[i][j][k]==1){/*printf("%d %d",i,j);*/o=2;break;}
                                                                                                                                       }
                                                                                                                     if(o==2)break;
                                                                                                                     }
                                                                                                    a[i][j][0]=k;bakline(a,i,j,k);oops++;/*printf("%d %d %d %d",i,j,k,sum);     */
                                                                                                    }
                                                                                         sum=0;
                                                                                         }/*printf("sum=%d",sum);*/
                                                                     }                              




for(k=1;k<=9;k++)for(row=3;row<=5;row++)for(col=0;col<=2;col++){
                                                                     o=0;sum=sum+a[row][col][k];
                                                                     if(row==5&&col==2){
                                                                                        if(sum==1){
                                                                                                   for(i=3;i<=5;i++){
                                                                                                                     for(j=0;j<=2;j++){
                                                                                                                                       if(a[i][j][k]==1){/*printf("%d %d",i,j);*/o=2;break;}
                                                                                                                                       }
                                                                                                                     if(o==2)break;
                                                                                                                     }
                                                                                                    a[i][j][0]=k;bakline(a,i,j,k);oops++;/*printf("%d %d %d %d",i,j,k,sum);     */
                                                                                                    }
                                                                                         sum=0;
                                                                                         }/*printf("sum=%d",sum);*/
                                                                     }                              




for(k=1;k<=9;k++)for(row=3;row<=5;row++)for(col=3;col<=5;col++){
                                                                     o=0;sum=sum+a[row][col][k];
                                                                     if(row==5&&col==5){
                                                                                        if(sum==1){
                                                                                                   for(i=3;i<=5;i++){
                                                                                                                     for(j=3;j<=5;j++){
                                                                                                                                       if(a[i][j][k]==1){/*printf("%d %d",i,j);*/o=2;break;}
                                                                                                                                       }
                                                                                                                     if(o==2)break;
                                                                                                                     }
                                                                                                    a[i][j][0]=k;bakline(a,i,j,k);oops++;/*printf("%d %d %d %d",i,j,k,sum);     */
                                                                                                    }
                                                                                         sum=0;
                                                                                         }/*printf("sum=%d",sum);*/
                                                                     }                              




for(k=1;k<=9;k++)for(row=3;row<=5;row++)for(col=6;col<=8;col++){
                                                                     o=0;sum=sum+a[row][col][k];
                                                                     if(row==5&&col==8){
                                                                                        if(sum==1){
                                                                                                   for(i=3;i<=5;i++){
                                                                                                                     for(j=6;j<=8;j++){
                                                                                                                                       if(a[i][j][k]==1){/*printf("%d %d",i,j);*/o=2;break;}
                                                                                                                                       }
                                                                                                                     if(o==2)break;
                                                                                                                     }
                                                                                                    a[i][j][0]=k;bakline(a,i,j,k);oops++;/*printf("%d %d %d %d",i,j,k,sum);     */
                                                                                                    }
                                                                                         sum=0;
                                                                                         }/*printf("sum=%d",sum);*/
                                                                     }                              




for(k=1;k<=9;k++)for(row=6;row<=8;row++)for(col=0;col<=2;col++){
                                                                     o=0;sum=sum+a[row][col][k];
                                                                     if(row==8&&col==2){
                                                                                        if(sum==1){
                                                                                                   for(i=6;i<=8;i++){
                                                                                                                     for(j=0;j<=2;j++){
                                                                                                                                       if(a[i][j][k]==1){/*printf("%d %d",i,j);*/o=2;break;}
                                                                                                                                       }
                                                                                                                     if(o==2)break;
                                                                                                                     }
                                                                                                    a[i][j][0]=k;bakline(a,i,j,k);oops++;/*printf("%d %d %d %d",i,j,k,sum);     */
                                                                                                    }
                                                                                         sum=0;
                                                                                         }/*printf("sum=%d",sum);*/
                                                                     }                              




for(k=1;k<=9;k++)for(row=6;row<=8;row++)for(col=3;col<=5;col++){
                                                                     o=0;sum=sum+a[row][col][k];
                                                                     if(row==8&&col==5){
                                                                                        if(sum==1){
                                                                                                   for(i=6;i<=8;i++){
                                                                                                                     for(j=3;j<=5;j++){
                                                                                                                                       if(a[i][j][k]==1){/*printf("%d %d",i,j);*/o=2;break;}
                                                                                                                                       }
                                                                                                                     if(o==2)break;
                                                                                                                     }
                                                                                                    a[i][j][0]=k;bakline(a,i,j,k);oops++;/*printf("%d %d %d %d",i,j,k,sum);     */
                                                                                                    }
                                                                                         sum=0;
                                                                                         }/*printf("sum=%d",sum);*/
                                                                     }                              




for(k=1;k<=9;k++)for(row=6;row<=8;row++)for(col=6;col<=8;col++){
                                                                     o=0;sum=sum+a[row][col][k];
                                                                     if(row==8&&col==8){
                                                                                        if(sum==1){
                                                                                                   for(i=6;i<=8;i++){
                                                                                                                     for(j=6;j<=8;j++){
                                                                                                                                       if(a[i][j][k]==1){/*printf("%d %d",i,j);*/o=2;break;}
                                                                                                                                       }
                                                                                                                     if(o==2)break;
                                                                                                                     }
                                                                                                    a[i][j][0]=k;bakline(a,i,j,k);oops++;/*printf("%d %d %d %d",i,j,k,sum);     */
                                                                                                    }
                                                                                         sum=0;
                                                                                         }/*printf("sum=%d",sum);*/
                                                                     }                              







int tot=0,kk,p;
for(row=0;row<=2;row++)for(col=0;col<=2;col++)for(k=1;k<=9;k++){
                                                                tot=tot+a[row][col][k];
                                                                if(k==9){
                                                                         if(tot==1){
                                                                                    for(kk=1;kk<=9;kk++){
                                                                                                         if(a[row][col][kk]==1){ break;}
                                                                                                         }
                                                                                    
                                                                                    
                                                                         a[row][col][0]=kk;bakline(a,row,col,kk);oops++;}
                                                                 tot=0;
                                                                 }}




for(row=0;row<=2;row++)for(col=3;col<=5;col++)for(k=1;k<=9;k++){
                                                                tot=tot+a[row][col][k];
                                                                if(k==9){
                                                                         if(tot==1){
                                                                                    for(kk=1;kk<=9;kk++){
                                                                                                         if(a[row][col][kk]==1){p=2;break;}
                                                                                                         }
                                                                                     
                                                                                    
                                                                         a[row][col][0]=kk;bakline(a,row,col,kk);oops++;}
                                                                         
                                                                 tot=0;
                                                                 }}




for(row=0;row<=2;row++)for(col=6;col<=8;col++)for(k=1;k<=9;k++){
                                                                tot=tot+a[row][col][k];
                                                                if(k==9){
                                                                         if(tot==1){
                                                                                    for(kk=1;kk<=9;kk++){
                                                                                                         if(a[row][col][kk]==1){p=2;break;}
                                                                                                         }
                                                                                     
                                                                                    
                                                                         a[row][col][0]=kk;bakline(a,row,col,kk);oops++;}
                                                                         
                                                                 tot=0;
                                                                 }}




for(row=3;row<=5;row++)for(col=0;col<=2;col++)for(k=1;k<=9;k++){
                                                                tot=tot+a[row][col][k];
                                                                if(k==9){
                                                                         if(tot==1){
                                                                                    for(kk=1;kk<=9;kk++){
                                                                                                         if(a[row][col][kk]==1){p=2;break;}
                                                                                                         }
                                                                                     
                                                                                    
                                                                         a[row][col][0]=kk;bakline(a,row,col,kk);oops++;}
                                                                         
                                                                 tot=0;
                                                                 }}




for(row=3;row<=5;row++)for(col=3;col<=5;col++)for(k=1;k<=9;k++){
                                                                tot=tot+a[row][col][k];
                                                                if(k==9){
                                                                         if(tot==1){
                                                                                    for(kk=1;kk<=9;kk++){
                                                                                                         if(a[row][col][kk]==1){p=2;break;}
                                                                                                         }
                                                                                     
                                                                                    
                                                                         a[row][col][0]=kk;bakline(a,row,col,kk);oops++;}
                                                                         
                                                                 tot=0;
                                                                 }}




for(row=3;row<=5;row++)for(col=6;col<=8;col++)for(k=1;k<=9;k++){
                                                                tot=tot+a[row][col][k];
                                                                if(k==9){
                                                                         if(tot==1){
                                                                                    for(kk=1;kk<=9;kk++){
                                                                                                         if(a[row][col][kk]==1){p=2;break;}
                                                                                                         }
                                                                                     
                                                                                    
                                                                         a[row][col][0]=kk;bakline(a,row,col,kk);oops++;}
                                                                         
                                                                 tot=0;
                                                                 }}




for(row=6;row<=8;row++)for(col=0;col<=2;col++)for(k=1;k<=9;k++){
                                                                tot=tot+a[row][col][k];
                                                                if(k==9){
                                                                         if(tot==1){
                                                                                    for(kk=1;kk<=9;kk++){
                                                                                                         if(a[row][col][kk]==1){p=2;break;}
                                                                                                         }
                                                                                     
                                                                                    
                                                                         a[row][col][0]=kk;bakline(a,row,col,kk);oops++;}
                                                                         
                                                                 tot=0;
                                                                 }}




for(row=6;row<=8;row++)for(col=3;col<=5;col++)for(k=1;k<=9;k++){
                                                                tot=tot+a[row][col][k];
                                                                if(k==9){
                                                                         if(tot==1){
                                                                                    for(kk=1;kk<=9;kk++){
                                                                                                         if(a[row][col][kk]==1){p=2;break;}
                                                                                                         }
                                                                                     
                                                                                    
                                                                         a[row][col][0]=kk;bakline(a,row,col,kk);oops++;}
                                                                         
                                                                 tot=0;
                                                                 }}




for(row=6;row<=8;row++)for(col=6;col<=8;col++)for(k=1;k<=9;k++){
                                                               tot=tot+a[row][col][k];
                                                                if(k==9){
                                                                         if(tot==1){
                                                                                    for(kk=1;kk<=9;kk++){
                                                                                                         if(a[row][col][kk]==1){p=2;break;}
                                                                                                         }
                                                                                     
                                                                                    
                                                                         a[row][col][0]=kk;bakline(a,row,col,kk);oops++;}
                                                                         
                                                                 tot=0;
                                                                 }}



}
                                                                                                                       
          
     
}






void copystb(int a[9][9][10], int b[9][9][10][63][9], int m, int n)
{
     int r,c,k;

     for(r=0;r<9;r++)
     for(c=0;c<9;c++)
     for(k=0;k<10;k++){
                       b[r][c][k][m][n]=a[r][c][k];
                       }
                       
  /*     for(r=0;r<9;r++){
     for(c=0;c<9;c++)                 
     printf("%d ",b[r][c][0][m][n]);
     printf("\n");}
     printf("\n\n");
    */                   
}




void copybts(int a[9][9][10], int b[9][9][10][63][9], int m, int n)
{
     int r,c,k;

     for(r=0;r<9;r++)
     for(c=0;c<9;c++)
     for(k=0;k<10;k++){
                       a[r][c][k]=b[r][c][k][m][n];
                       }

     
}




void copym(int a[9][9][10][63][9], int m1, int m2, int n)
{
     int r,c,k;

     for(r=0;r<9;r++)
     for(c=0;c<9;c++)
     for(k=0;k<10;k++){
                       a[r][c][k][m1][n]=a[r][c][k][m2][n];
                       }
                            
/*     for(r=0;r<9;r++){
     for(c=0;c<9;c++)                 
     printf("%d ",a[r][c][0][m1][0]);
     printf("\n");}
     printf("\n\n");
*/

}





void copyn(int a[9][9][10][63][9], int m, int n1, int n2)
{
     int r,c,k;

     for(r=0;r<9;r++)
     for(c=0;c<9;c++)
     for(k=0;k<10;k++){
                       a[r][c][k][m][n1]=a[r][c][k][m][n2];
                       }

}





int leash(int a[9][9][10][63][9],int m)
{;
    copym(a,m,m-1,0);
    
     int b[9][9],r,c,k,tot=0;
     for(r=0;r<9;r++)
     for(c=0;c<9;c++)
     for(k=1;k<10;k++){tot=tot+a[r][c][k][m][0];
                       if(k==9){b[r][c]=tot;
                                tot=0;
                                }
                       }
                       
  /* for(r=0;r<9;r++){
     for(c=0;c<9;c++)                 
     printf("%d ",b[r][c]);
     printf("\n");}
     printf("\n\n");
    */             
    
    
    int z=9;
    for(r=0;r<9;r++)
    for(c=0;c<9;c++)
    if(0<b[r][c]&&b[r][c]<z)z=b[r][c];
    
    printf("\n\nz%dz\n\n",z); 
    
    
    

    int x,y,g;
    
    for(r=0;r<9;r++){
    for(c=0;c<9;c++){if(b[r][c]==z){x=r;y=c; g=99;break;}}
    
                 if(g==99)break;}

    printf("jio%dhhjjh %dhjkhjk",r,c);



  int ch[z],i=1;
  for(k=1;k<=9;k++)
  if(a[x][y][k][m][0]==1){ch[i]=k;/*printf("%d ",k);*/i++;}
  
  

    int d1, d2,d;
    for(k=1;k<=z;k++){  
                        d1=(rand()%z)+1;
                        d2=(rand()%z)+1;
                        c=ch[d1];
                        ch[d1]=ch[d2];
                        ch[d2]=c;
                        } 
                        
   for(k=1;k<=z;k++)
  {printf("%d ",ch[k]);}
     
     
 int v[9][9][10];
 
 for(i=1;i<=z;i++){
                   copyn(a,m,i,0);
                   a[x][y][0][m][i]=ch[i];
                   copybts(v,a,m,i);
                   bakline(v,x,y,ch[i]);
                   pan(v);              
                   int u= check(v);printf("%d %d %d ",i,x,y);
                   if(u==2){int l=leash(a,m+1);
                                if(l==13)return 13;
                                }
                    if(u==1){printarray(v);return 13;}                
                            
                            }
                      
}




int check(int v[9][9][10])
{
    int row,col,k,tot=0,o;
    for(row=0;row<=8;row++)for(col=0;col<=8;col++)for(k=0;k<=9;k++){
                                                                tot=tot+v[row][col][k];
                                                                if(k==9){
                                                                         if(tot==0){o=9;break;}
                                                                         }
                                                                     }
                                                                     
                                                                     
    if(o==9)return 0;else{
    
     int sum=0;                                                                    
     for(row=0;row<=8;row++)for(col=0;col<=8;col++){ 
                                                      sum=sum+v[row][col][0];
                                                      }
                                                      
                                                      
     if(sum==405)return 1;else{printf("");return 2;}}
     
                                                                                                                                 
}




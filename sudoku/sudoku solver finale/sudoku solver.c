#include<stdio.h>
#include<conio.h>
#include <time.h>

void scansudoku(int a[9][9][10]);
void initializecube(int a[9][9][10]);
void bakline(int a[9][9][10],int i,int j,int z);
void pan(int a[9][9][10] );
void print(int a[9][9][10]);
void printarray(int a[9][9][10]);
int leash(int a[9][9][10][63][9],int m,int n);
void copystb(int a[9][9][10], int b[9][9][10][63][9], int m, int n);
void copybts(int a[9][9][10], int b[9][9][10][63][9], int m, int n);
void copym(int a[9][9][10][63][9], int m1, int m2, int n1,int n2);
void copyn(int a[9][9][10][63][9], int m, int n1, int n2);
int check(int v[9][9][10]);
void dev();
void welcome();

int main()
{
    welcome();
    
    int a[9][9][10];
    clock_t begin, end;
    double time_spent;
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
    
    int w,doo;
    printf("Choose the mode of your input -\n\n1-Enter input manually\n2-Read input from a text file\n\n");
    for(;;)
    {scanf("%d",&w);
    if(w==1||w==2)break;
    else printf("\nEnter either 1 or 2.\n");
    }
    
    
if(w==2)
{
    system("cls");
    printf(" \t\t              SUDOKU SOLVER\n\n\n");
    
    int t,d;                            
    FILE *x;
    if((x=fopen("sudoku.txt","r"))==NULL){
                                                printf("\n\nTo read input from a text file, follow these steps -\n");
                                                printf("\n1 Create a new notepad text file in same location where this software is placed");    
                                                printf("\n2 Now read your unfilled sudoku board from left to right starting from first row  and moving to subsequent rows and enter corresponding numbers in this text      file. For an empty box enter 0.Leave 1 space between any two entries.");
                                                printf("\n3 Save this file and Rename it to sudoku.txt");
                                                printf("\n4 Rerun this program.");
                                                printf("\n5 If it still doesn't work, try entring input manually.");
                                                dev();
                                                doo=9;
                                                }  
    else {int r,c;
    for(r=0;r<9;r++){
    for(c=0;c<9;c++){                                 
    fscanf(x, "%d",&t);
    if((a[r][c][t]==0&&a[r][c][0]!=0)||t<0||t>9){printf("\n\n\nSorry, your input board is incorrect. Please recheck your input file.");d=99;break;}
    else {a[r][c][0]=t;
    bakline(a,r,c,a[r][c][0]);}}if(d==99)break;}
                             fclose(x); } 
                    
                               
    if(doo!=9){                          
    if(d!=99){
			    	 
				
				begin = clock();
                printf("\n\nUnsolved sudoku \n\n");
                printarray(a);          
                int b[9][9][10][63][9];
                copystb(a,b,0,0);
                int l=leash(b,1,0); 
                dev();
                
             }
    else     {dev(); printf("");}
             }
    
}


else
{
    system("cls");
    printf(" \t\t              SUDOKU SOLVER\n\n\nTreat your sudoku board as a 9*9 matrix and enter the corresponding entries \nFor unfilled boxex enter 0\n\n\n");
    
     scansudoku(a);printf("\n\n\n");
       	 
	 
	 begin = clock();
     printf("Unsolved sudoku \n\n");
     printarray(a);          
     int b[9][9][10][63][9];
     copystb(a,b,0,0);
     int l=leash(b,1,0);
     dev();
}

end = clock();
time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
printf("\n\n\n\nTime taken:	%f",time_spent);
    getch();
}

void print(int a[9][9][10])
{
     printf("\n\nflag\n%d\n%d\n%d\n%d\n%d%d\n%d\n%d\n%d\n\n",a[0][8][0],a[8][2][0],a[4][4][0],a[4][8][0],a[8][0][0],a[8][4][0],a[8][8][0],a[0][3][0],a[0][0][0]);

}




void printarray(int a[9][9][10])
{
     int r,c;

     for(r=0;r<9;r++){
     if(r==0)printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n%c           %c           %c           %c\n",218,196,196,196,196,196,196,196,196,196,196,196,194,196,196,196,196,196,196,196,196,196,196,196,194,196,196,196,196,196,196,196,196,196,196,196,191,179,179,179,179);
     for(c=0;c<9;c++){
	 if(c==3||c==6)printf("%c  ",179); 
	 if(c==0)printf("%c  ",179); 
	 if(a[r][c][0]==0)printf("_  ");
	 else                
     printf("%d  ",a[r][c][0]);}
     if(r==2||r==5)printf("%c\n%c           %c           %c           %c\n%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",179,179,179,179,179,195,196,196,196,196,196,196,196,196,196,196,196,197,196,196,196,196,196,196,196,196,196,196,196,197,196,196,196,196,196,196,196,196,196,196,196);  
     printf("%c\n%c           %c           %c           %c\n",179,179,179,179,179);}
     printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n\n",192,196,196,196,196,196,196,196,196,196,196,196,193,196,196,196,196,196,196,196,196,196,196,196,193,196,196,196,196,196,196,196,196,196,196,196,217);
     
                      
}





void scansudoku(int a[9][9][10])
{
     int r,c,t,n=0;

     for(r=0;r<9;r++)
     for(c=0;c<9;c++){

     printf("a[%d][%d]= ",r+1,c+1);
     scanf("%d",&t);                 
     if(a[r][c][t]==0&&a[r][c][0]!=0||t<0||t>9){printf("Invalid entry.\n");n=0;c--;}
     else a[r][c][0]=t;
     bakline(a,r,c,a[r][c][0]);}
     system("cls");
     printf(" \t\t              SUDOKU SOLVER\n\n\n");
     
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
     
     if(1<=a[i][j][0]&&a[i][j][0]<=9){
    for(k=1;k<=9;k++)a[i][j][k]=0;
     
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




void copym(int a[9][9][10][63][9], int m1, int m2, int n1,int n2)
{
     int r,c,k;

     for(r=0;r<9;r++)
     for(c=0;c<9;c++)
     for(k=0;k<10;k++){
                      a[r][c][k][m2][n1]= a[r][c][k][m1][n2];
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





int leash(int a[9][9][10][63][9],int m,int n)
{ int v[9][9][10],i;/*if(m==2){copybts(v,a,m-1,1);printf("tatti\n%d\n",a[8][7][0][m][0]);printarray(v);} */
    copym(a,m-1,m,0,n);/*if(m==2){copybts(v,a,m,0);printf("tatti\n%d\n",a[8][7][0][m][0]);printarray(v);} */
    
     int b[9][9],r,c,k,tot=0;
     for(r=0;r<9;r++)
     for(c=0;c<9;c++)
     for(k=1;k<10;k++){tot=tot+a[r][c][k][m][0];
                       if(k==9){b[r][c]=tot;
                                tot=0;
                                }
                       }
  /*  printf("\n\n\n\nm=%d\n",m);                  
   for(r=0;r<9;r++){
     for(c=0;c<9;c++)                 
     printf("%d ",b[r][c]);
     printf("\n");}
     printf("\n\n");
    */             
    
    int x,y;
    int z=9;
    for(r=0;r<9;r++)
    for(c=0;c<9;c++)
    if(0<b[r][c]&&b[r][c]<z){z=b[r][c];x=r;y=c;}
    
   /* printf("\n\nz%dz\n\n",z); */
    
    
    

 /*   int x,y,g;
    
    for(r=0;r<9;r++){
    for(c=0;c<9;c++){if(b[r][c]==z){x=r;y=c; g=99;break;}}
    
                 if(g==99)break;}
*/
/*    printf("jio%dhhjjh %dhjkhjk\n",r,c);*/



  int ch[z];i=1;
  for(k=1;k<=9;k++)
  if(a[x][y][k][m][0]==1){ch[i]=k;/*printf("/n%d \n",k);*/i++;}
  
  

    int d1, d2,d;
    for(k=1;k<=z;k++){  
                        d1=(rand()%z)+1;
                        d2=(rand()%z)+1;
                        c=ch[d1];
                        ch[d1]=ch[d2];
                        ch[d2]=c;
                        } 
                        
  /* for(k=1;k<=z;k++)
  {printf("%d \n",ch[k]);}
    */ 
     
 /*int v[9][9][10];
 */
 for(i=1;i<=z;i++){
                   copyn(a,m,i,0);
                   a[x][y][0][m][i]=ch[i];/*printf("\nchewingum%d\n",a[x][y][0][m][i]);*/
                   copybts(v,a,m,i);
                   bakline(v,x,y,ch[i]);
                    
                   pan(v);copystb(v,a,m,i);/*if(m==2){printf("tatti\n");printarray(v);}              */
                   int u= check(v);/*printf("\n%d %d %d \n",i,x,y);if(m==1){copybts(v,a,m,i);printf("toooooatti\n");printarray(v);}*/
                   if(u==2){int l=leash(a,m+1,i);
                                if(l==13)return 13;
                                }
                   if(u==1){/*printf("batch\n");*/printf("\n\n\nSolved sudoku \n\n");printarray(v);return 13;}                
                           
                            }
                      
}




int check(int v[9][9][10])
{
    int row,col,k,tot=0,o;
    for(row=0;row<=8;row++){for(col=0;col<=8;col++){for(k=0;k<=9;k++){o=0;
                                                                tot=tot+v[row][col][k];
                                                                if(k==9){
                                                                         if(tot==0){o=9;/*printf("\nalootatti%d %d\n",row,col);*/break;}
                                                                         else tot=0;
                                                                         }
                                                                     }if(o==9)break;}if(o==9)break;}
                                                                     
                                                                     
    if(o==9)return 0;else{
    
     int sum=0;                                                                    
     for(row=0;row<=8;row++)for(col=0;col<=8;col++){ 
                                                      sum=sum+v[row][col][0];
                                                      }
                                                      
                                                      
     if(sum==405)return 1;else{printf("");return 2;}}
     
                                                                                                                                 
}





void dev()
{     
      printf("\n\n\n\nTHANK YOU\n\n\n\n\n\n\t\t\t\t\t\t\tdeveloped by -\n\t\t\t\t\t\t\tabhimanyu sood");
}     



void welcome()
{
     printf(" \t\t              SUDOKU SOLVER\n\n\n");
     printf("WELCOME \n\n\n\n");
     
}

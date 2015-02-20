#include<stdio.h>
#include<conio.h>
int main()
{
    
    int a[5][5];
    FILE *x;
    if((x=fopen("t.txt","r"))==NULL)printf("file couldn't be opened");
    else {int i,j;
         for(i=0;i<5;i++)for(j=0;j<5;j++)
         {fscanf(x, "%d",&a[i][j]);
         
                        }
                             fclose(x); } 
                             
                             
                             
int r,c;

     for(r=0;r<5;r++){
     for(c=0;c<5;c++)                 
     printf("%d ",a[r][c]);
     printf("\n");}
     printf("\n\n");                             
    getch();                    
                        
}

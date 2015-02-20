#include<stdio.h>
#include<conio.h>
int array(int x[4][5]);

int main()
{
   int a[4][5];
   
   for(int i=0;i<4;i++)
    {for(int j=0;j<5;j++)
    a[i][j] =i+j;    
     }   
    //array(a);//
    for(int i=0;i<4;i++)
    {for(int j=0;j<5;j++)
    printf("%d ",a[i][j]);
    printf("\n");      
     }   
getch();
}


int array(int x[4][5])
{
   
   for(int i=0;i<4;i++)
    {for(int j=0;j<5;j++)
    x[i][j] =0;    
     }      
    
}

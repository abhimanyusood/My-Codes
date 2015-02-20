#include<stdio.h>
#include<conio.h>
int main()
{
    int m1 ,n1=1 ,m2=2 ,n2 ;
    for(;n1!=m2;){
    printf("Enter the number of rows in matrix 1\n");
    scanf("%d",&m1);
    printf("Enter the number of columns in matrix 1\n");
    scanf("%d",&n1);
    printf("\n\nEnter the number of rows in matrix 2\n");
    scanf("%d",&m2);
    printf("Enter the number of columns in matrix 2\n");
    scanf("%d",&n2);
    if(n1!=m2)printf("\n\n\nInvalid input !\nNo.of columns in matrix 1 must be equal to no. of rows in matrix 2 .\n\n\n\n");
                              }
                              
    
    int a[m1][n1],b[m2][n2],c[m1][n2];
    
    printf("\n\nEnter the values  in matrix 1");
    int r,k,w;

       for(r=0;r<m1;r++)
       for(w=0;w<n1;w++){
       if(r==0&&w==0)printf("\n");                 
       printf("a[%d][%d]= ",r+1,w+1);                 
       scanf("%d",&a[r][w]);}
       
       
    printf("\n\nEnter the values  in matrix 2");
     
       for(r=0;r<m2;r++)
       for(w=0;w<n2;w++){
       if(r==0&&w==0)printf("\n");                 
       printf("b[%d][%d]= ",r+1,w+1);                 
       scanf("%d",&b[r][w]);}  
       
       
       
       
       for(r=0;r<m1;r++)
       for(w=0;w<n2;w++){
       int s =0,y;
       for(y=0;y<n1;y++) s=s+(a[r][y]*b[y][w]);
       c[r][w] =s;                  }
       
       
     printf("\n\n\n\nYour answer is -\n\n\n");
       
     int i,j;
     for(i=0;i<m1;i++)
     {for(j=0;j<n2;j++)
     printf("%d ",c[i][j]);
     printf("\n");      
     }   
     printf("\n\n");
       
       
      getch();
      return 0;
      
      
}      
       
       
       
       
       
       
       
       
       
       
       

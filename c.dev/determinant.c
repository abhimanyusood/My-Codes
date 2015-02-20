#include<stdio.h>
#include<conio.h>
double det(int n,double x[n][n]);
void matrix(int c,int n ,double v[n][n],double b[n-1][n-1]);



int main()
{    printf("                           DETERMINANT DETERMINATOR \n\n\nWELCOME\n\n");
     int N;
     printf("Enter the order of your determinant \n");
     scanf("%d",&N);
     
     int r,k,c;
     double a[N][N];

     for(r=0;r<N;r++)
     for(c=0;c<N;c++){
     if(r==0&&c==0)printf("\n");                 
     printf("a[%d][%d]= ",r+1,c+1);                 
     scanf("%lf",&a[r][c]);
     
     
                          }
     
     printf("\n\nValue of your determinant is : %f\n\nTHANK YOU\n\n\n\n\n\n\t\t\t\t\t\t\tdeveloped by -\n\t\t\t\t\t\t\tabhimanyu sood",det(N,a));
     getch();
}






double det(int n,double x[n][n])
{    
     if(n==1) {return(x[0][0]);}
 
     else{
     
     
     int c=0;
     double sum=0;
     while(c<n)
    { 
      double xarray[n-1][n-1];
      matrix(c,n,x,xarray);
      sum=sum-((pow(-1,c-1))*(x[0][c])*(det(n-1,xarray)));
     c++;
     }
    return(sum);}
}




void matrix(int c,int n ,double v[n][n],double b[n-1][n-1])
{
       int i=0, j=0;
       for(i=0;i<n-1;i++)
       for(j=0;j<n-1;j++)
       {if(j<c)b[i][j]=v[i+1][j];
        else b[i][j]=v[i+1][j+1];
        }
}


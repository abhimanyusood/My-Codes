#include<stdio.h>
#include<conio.h>
#include<math.h>

double det(int n,double x[n][n]);
void matrix(int c,int n ,double v[n][n],double b[n-1][n-1]);
void chm(int columina, int order ,double h[order][order] ,double j[order] ,double l[order][order]);

int main()
{
     printf(" \t\t                 EQUATOR\n\n\n");
     printf("WELCOME \n\n");
     
      int N;
      printf("Enter number of variables in your equation set - \n");
      scanf("%d",&N);
     
     printf("\n\n\nEnter the coeffecients of your equation set in matrix format as per \nthe following chart -\n\n\n\n\n\n");
     printf("\ta[1][1]x[1] + a[1][2]x[2] + ... + a[1][n]x[n]  = b[1]\n\ta[2][1]x[1] + a[2][2]x[2] + ... + a[2][n]x[n]  = b[2]\n\t     :             :                   :           :\n\t     :             :                   :           :\n\t     :             :                   :           :\n\ta[n][1]x[1] + a[n][2]x[2] + ... + a[n][n]x[n]  = b[n]\n\n\n\n\n\n");
    
    
     
     int r,k,c;
     double a[N][N];
     
     printf("\nEnter your co-effecients now");
     for(r=0;r<N;r++)
     for(c=0;c<N;c++){
     if(r==0&&c==0)printf("\n");                 
     printf("a[%d][%d]= ",r+1,c+1);                 
     scanf("%lf",&a[r][c]);               }
 
 
 
     
     double b[N];

     for(r=0;r<N;r++)
     {
     if(r==0)printf("\n");                 
     printf("b[%d]   = ",r+1);                 
     scanf("%lf",&b[r]);                }
      
     double q=det(N,a);
     if(q==0)printf("\n\nSorry,\nYour equation set has no unique solution !!!");
     else printf("\n\nYour solution set is -\n\n\n");
     
     
     int column=0;
     while(column<N){
                     
     double ch[N][N];
     chm(column,N,a,b,ch);
     if(det(N,ch)==0&&q!=0)printf("x[%d]= 0",column+1);
     else
     if(q!=0) printf("x[%d]= %.2f\n",column+1,det(N,ch)/q);
     
     
     column++; }
     printf("\n\n\n\nTHANKS BUDDY\n\n\n\n\n\n\t\t\t\t\t\t\tdeveloped by -\n\t\t\t\t\t\t\tabhimanyu sood");
     
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

void chm(int columina, int order ,double h[order][order] ,double j[order] ,double l[order][order])
{
     
     int r,c;


     for(r=0;r<order;r++)
     for(c=0;c<order;c++){
     if(c==columina) l[r][c]=j[r];                 
     else l[r][c]=h[r][c];  }          
}
 
                      
                      
                 
                 
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
                        
     


#include<stdio.h>
#include<conio.h>

void step1(int G ,int m ,int n ,float array[m][n],int*P,int*Q);
void step3(int G ,int m ,int n, float array[m][n],int P);
void step4(int G ,int m ,int n, float array[m][n],int Q);
void step5(int G ,int m ,int n, float array[m][n],int Q);
void rrech(int m ,int n ,float array[m][n]);
void scanarray(int m ,int n ,float array[m][n]);
void fir(int m,int n, float array[m][n],int*R,int*C);
void printarray(int m ,int n, float array[m][n]);
void welcome();
void dev();
void prompt();

int main()
{
      welcome();
       
      int M,N;
      printf("Enter number of rows in your matrix \n");
      scanf("%d",&M);
      printf("Enter number of columns in your matrix \n");
      scanf("%d",&N);     
     /*prompt();*/
    
     float a[M][N];
     scanarray(M,N,a);
      
 
     int g=0;
     while(g<M)
     { 
                int p=0,q=0;
                step1(g,M,N,a,&p,&q);
             /* printf("%d %d\n",p,q);*/           
                if(p==M&&q==N){break; }
                
                
                
                if(p!=g) step3(g,M,N,a,p);     
             /* if(g==0)  printarray(M,N,a);*/ 
                step4(g,M,N,a,q); /*if(g==0)printarray(M,N,a);*/
                step5(g,M,N,a,q); /* if(g==0)printarray(M,N,a); */           
                
                      
        /*      printf("\n\nwe\n\n\n");     */
             
             
             g++;
             
     }
     
     
    /*printf("\n\nrt\n\n\n");   */
     
     rrech(M,N,a);            
 
                         
     int r,c;   
     fir(M,N,a,&r,&c) ;       
     printf("\n\nThe rank of your matrix is -\n\n%d",r-1);  
                       
                       
     dev();
     
     getch();
}   
     
     
     
     
     
     
     
         
     
     



     
     
void scanarray(int m ,int n ,float array[m][n])    
{
       int r,k,c;

       for(r=0;r<m;r++)
       for(c=0;c<n;c++){
       if(r==0&&c==0)printf("\n");                 
       printf("a[%d][%d]= ",r+1,c+1);                 
       scanf("%f",&array[r][c]);}
       
       /*printarray(m,n,array);*/
}     

     
     
     
     
     
     
     
     
     
     
void step1(int G ,int m,int n ,float array[m][n], int *P ,int *Q)
{
     int   c=0,r;
     while(c<n)
     { 
           r=G;   
           while(r<m)
           {  
                  if(array[r][c]>.000001||array[r][c]<-.000001)
                  {       
                        *P=r;
                        *Q=c;
                        r++;
                        break;    
                  }
              
             r++;
                  
           }     
         if(array[r-1][c]>.000001||array[r-1][c]<-.000001) break;
    
         c++;
                                 
     } 
     if(r==m&&c==n){*P=m;*Q=n;}
     

}    







void step3(int G ,int m,int n, float array[m][n],int P)
{
          int c, d[1][n];
          for(c=0;c<n;c++) {
                             d[0][c]=array[G][c];
                             array[G][c]=array[P][c];
                             array[P][c]=d[0][c];
                           }
       /*   printarray(n,array); */                               
}                     







void step4(int G ,int m,int n, float array[m][n],int Q)
{     int c=0;
      float x=array[G][Q]; 
      while(c<n)
        {
          array[G][c]=(array[G][c]/x);
          c++;          
        }
}







void step5(int G ,int m,int n, float array[m][n],int Q)
{      
       int r,c;
       for(r=G+1;r<m;r++)
       {float z=array[r][Q];
       for(c=0;c<=n;c++) array[r][c]=array[r][c]-(z*array[G][c]);   }
           
}



void rrech(int m,int n ,float array[m][n])
{      int f=m-1 ;
       for(f=m-1;f>=0;)
             {   
                 int j; 
                 for(j=0;j<=n;j++) if(array[f][j]==1)break;                  
                  
              
                 if(j==n){f--;break;} 
              
                 int e;
                 for(e=f-1;e>=0;e--)
                       {  
                          int d;float t=array[e][j];
                          for(d=0;d<=n;d++)
                          array[e][d]=array[e][d]-t*array[f][d];                     
                        /*printarray(n,array);*/                
                       }               
                       
               f--;
            }                 
}     









void printarray(int m,int n, float array[m][n])
{    
     int i,j;
     for(i=0;i<m;i++)
     {for(j=0;j<n;j++)
     printf("%.3f ",array[i][j]);
     printf("\n");      
     }   
     printf("\n\n");


     
}     



void fir(int m,int n, float array[m][n],int*R,int*C)
{   
    int r,c;   
    for(r=1;r<=m;r++)
            {
               for(c=1;c<=n;c++)
               if(array[r-1][c-1]>.000001||array[r-1][c-1]<-.000001){break;}
                               
               if(c==n+1)break;                                
            }                      
    
    *R=r;*C=c;
    /*printf("%d  %d\n",r-1,c-2);*/     
                  
    
    
}    









void welcome()
{
     printf(" \t\t       GAUSS JORDAN INVERSE RANKER\n\n\n");
     printf("WELCOME \n\n");
     
}




void prompt()     
{
     printf("\n\n\nEnter the coeffecients of your equation set in matrix format as per \nthe following chart -\n\n\n\n\n\n");
     printf("\ta[1][1]x[1] + a[1][2]x[2] + ... + a[1][n]x[n]  = a[1][n+1]\n\ta[2][1]x[1] + a[2][2]x[2] + ... + a[2][n]x[n]  = a[2][n+1]\n\t     :             :                   :           :\n\t     :             :                   :           :\n\t     :             :                   :           :\n\ta[n][1]x[1] + a[n][2]x[2] + ... + a[n][n]x[n]  = a[n][n+1]\n\n\n\n\n\n");
}    
    





void dev()
{     
      printf("\n\n\n\nTHANK YOU\n\n\n\n\n\n\t\t\t\t\t\t\tdeveloped by -\n\t\t\t\t\t\t\tabhimanyu sood");
}     

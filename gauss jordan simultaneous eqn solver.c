
#include<stdio.h>
#include<conio.h>

void step1(int G ,int n ,float array[n][n+1],int*P,int*Q);
void step3(int G ,int n, float array[n][n+1],int P);
void step4(int G ,int n, float array[n][n+1],int Q);
void step5(int G ,int n, float array[n][n+1],int Q);
void rrech(int n ,float array[n][n+1]);
void fir(int n, float array[n][n+1],int*R,int*C);
void uniqsol(int n, float array[n][n+1]);
void parallel(int n, float array[n][n+1]);
void inconsist();
void scanarray(int n ,float array[n][n+1]);
void printarray(int n, float array[n][n+1]);
void welcome();
void dev();
void prompt();

int main()
{
      welcome();
       
      int N;
      printf("Enter the number of variables in your equation set \n");
      scanf("%d",&N);
           
     prompt();
    
     float a[N][N+1];
     scanarray(N,a);
      
     
     int g=0;
     while(g<N)
     { 
                int p=0,q=0;
                step1(g,N,a,&p,&q);
             /* printf("%d %d\n",p,q);*/             
                if(p==N&&q==N+1)break; 
                
                
                
                if(p!=g) step3(g,N,a,p);     
                /*printarray(N,a);*/ 
                step4(g,N,a,q); /*printarray(N,a);*/
                step5(g,N,a,q);  /*printarray(N,a);*/            
                
                      
        /*      printf("\n\nwe\n\n\n");     */
             
             
             g++;
             
     }
     
     
    /*printf("\n\nrt\n\n\n");   */
     
     rrech(N,a);                 
    printarray(N,a);              
                       
                       
      
                       
     int r,c;   
     fir(N,a,&r,&c) ;                 
     if(r==N+1&&c==N)uniqsol(N,a);
     else{if(a[r-1][c-1]>-0.000001&&a[r-1][c-1]<0.000001)parallel(N,a);
     else inconsist();}                   
                       
            
     dev();
     
     getch();
}   
     
     
     
     
     
     
     
         
     
     



     
     
void scanarray(int n ,float array[n][n+1])    
{
       int r,k,c;

       for(r=0;r<n;r++)
       for(c=0;c<n+1;c++){
       if(r==0&&c==0)printf("\n");                 
       printf("a[%d][%d]= ",r+1,c+1);                 
       scanf("%f",&array[r][c]);}
              
}     
     
     
     
     
     
     
     
     
     
     
void step1(int G ,int n ,float array[n][n+1], int *P ,int *Q)
{
     int   c=0,r;
     while(c<=n)
     { 
           r=G;   
           while(r<n)
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
     if(r==n&&c==n+1){*P=n;*Q=n+1;}
     /* if(G==3)printf("%d %d\n",r,c);*/ 

}    







void step3(int G ,int n, float array[n][n+1],int P)
{
          int c, d[1][n+1];
          for(c=0;c<n+1;c++) {
                             d[0][c]=array[G][c];
                             array[G][c]=array[P][c];
                             array[P][c]=d[0][c];
                           }
       /*   printarray(n,array); */                               
}                     







void step4(int G ,int n, float array[n][n+1],int Q)
{     int c=0;
      float x=array[G][Q]; 
      while(c<n+1)
        {
          array[G][c]=(array[G][c]/x);
          c++;          
        }
}







void step5(int G ,int n, float array[n][n+1],int Q)
{      
       int r,c;
       for(r=G+1;r<n;r++)
       {float z=array[r][Q];
       for(c=0;c<n+1;c++) array[r][c]=array[r][c]-(z*array[G][c]);   }
           
}







void rrech(int n ,float array[n][n+1])
{      int f=n-1 ;
       for(f=n-1;f>=0;)
             {   
                 int j; 
                 for(j=0;j<n+1;j++) if(array[f][j]==1)break;                  
                  
              
                 if(j==n){f--;break;} 
              
                 int e;
                 for(e=f-1;e>=0;e--)
                       {  
                          int d;float t=array[e][j];
                          for(d=0;d<n+1;d++)
                          array[e][d]=array[e][d]-t*array[f][d];                     
                        /*printarray(n,array);*/                
                       }               
                       
               f--;
            }                 
}     







void fir(int n, float array[n][n+1],int*R,int*C)
{   
    int r,c;   
    for(r=1;r<=n;r++)
            {
               for(c=1;c<=n;c++)
               if(array[r-1][c-1]>.000001||array[r-1][c-1]<-.000001){break;}
                               
               if(c==n+1)break;                                
            }                      
    
    *R=r;*C=c;
    /*printf("%d  %d\n",r-1,c-2);*/     
                  
    
    
}    







void inconsist()
{    
     printf("\n\nSorry!!! Your equation set is inconsistent");                           
}
 
 



 
void parallel(int n, float array[n][n+1])
{    
     printf("\n\n\nOops!!! Your equation set has infinitely many solutions. You can obtain them by using the following reduced parametric equations -\n\n");
     int c,r;
     for(r=0;r<n;r++)
    { for(c=0;c<n;c++)
      {if(array[r][c]>0.000001){if(c==r)printf("%.3f*x[%d]  ",array[r][c],c+1);else printf("+  %.3f*x[%d]  ",array[r][c],c+1);}
       else if(array[r][c]<-0.000001){if(c==r)printf("%.3f*x[%d]  ",array[r][c],c+1);else printf("-  %.3f*x[%d]  ",-array[r][c],c+1);}
      }
      
      if((array[r][n]>.000001||array[r][n]<-.000001)||(array[r][r]>.000001||array[r][r]<-.000001))
      array[r][n]>=0 ? printf(" =  %.3f\n",array[r][n]): printf(" = %.3f\n",array[r][n]);
    } 
}







void uniqsol(int n, float array[n][n+1])
{   
    printf("\n\n\nYour solution set is - \n\n"); 
    int r;
    for(r=0;r<n;r++)
          { if(array[r][n]>-0.000001&&array[r][n]<0.000001)printf("x[%d]= 0\n",r+1);
            else array[r][n]/array[r][r] >0 ? printf("x[%d]=  %.3f\n",r+1,array[r][n]/array[r][r]) : printf("x[%d]= %.3f\n",r+1,array[r][n]/array[r][r]);   
          }
  
}








void printarray(int n, float array[n][n+1])
{    
     int i,j;
     for(i=0;i<n;i++)
     {for(j=0;j<n+1;j++)
     printf("%.3f ",array[i][j]);
     printf("\n");      
     }   
     printf("\n\n");


     
}     










void welcome()
{
     printf(" \t\t              GAUSS JORDAN EQUATOR\n\n\n");
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

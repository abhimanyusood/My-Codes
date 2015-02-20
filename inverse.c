
#include<stdio.h>
#include<conio.h>

void step1(int G ,int n ,float array[n][n*2],int*P,int*Q);
void step3(int G ,int n, float array[n][n*2],int P);
void step4(int G ,int n, float array[n][n*2],int Q);
void step5(int G ,int n, float array[n][n*2],int Q);
void rrech(int n ,float array[n][n*2]);
void scanarray(int n ,float array[n][2*n]);
void printarray(int n, float array[n][2*n]);
void printinverse(int n, float array[n][2*n]);
void welcome();
void dev();
void prompt();

int main()
{
      welcome();
       
      int N;
      printf("Enter the order of your matrix \n");
      scanf("%d",&N);
           
     /*prompt();*/
    
     float a[N][2*N];
     scanarray(N,a);
      
     int b=0; 
     int g=0;
     while(g<N)
     { 
                int p=0,q=0;
                step1(g,N,a,&p,&q);
     /*         if(g==0)printf("%d %d\n",p,q);    */       
                if(p==N&&q==N){b=1;break; }
                
                
                
                if(p!=g) step3(g,N,a,p);     
            /*  if(g==0)  printarray(N,a); */
                step4(g,N,a,q); /*if(g==0)printarray(N,a);*/
                step5(g,N,a,q);  /*printarray(N,a); */           
                
                      
        /*      printf("\n\nwe\n\n\n");     */
             
             
             g++;
             
     }
     
     
    /*printf("\n\nrt\n\n\n");   */
     
     rrech(N,a);                 
 
     if(b==1)printf("\n\nSorry ,your matrix doesn't have an inverse :("); 
     else printinverse(N,a);       
                       
                       
     dev();
     
     getch();
}   
     
     
     
     
     
     
     
         
     
     



     
     
void scanarray(int n ,float array[n][2*n])    
{
       int r,k,c;

       for(r=0;r<n;r++)
       for(c=0;c<n;c++){
       if(r==0&&c==0)printf("\n");                 
       printf("a[%d][%d]= ",r+1,c+1);                 
       scanf("%f",&array[r][c]);}
       
       for(r=0;r<n;r++)
       for(c=n;c<2*n;c++){
       if(r==c-n)array[r][c]=1;
       else array[r][c]=0;}                          

      /* printarray(n,array);*/
}     

     
     
     
     
     
     
     
     
     
     
void step1(int G ,int n ,float array[n][n*2], int *P ,int *Q)
{
     int   c=0,r;
     while(c<n)
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
     if(r==n&&c==n){*P=n;*Q=n;}
     

}    







void step3(int G ,int n, float array[n][n*2],int P)
{
          int c, d[1][n*2];
          for(c=0;c<n*2;c++) {
                             d[0][c]=array[G][c];
                             array[G][c]=array[P][c];
                             array[P][c]=d[0][c];
                           }
       /*   printarray(n,array); */                               
}                     







void step4(int G ,int n, float array[n][n*2],int Q)
{     int c=0;
      float x=array[G][Q]; 
      while(c<n*2)
        {
          array[G][c]=(array[G][c]/x);
          c++;          
        }
}







void step5(int G ,int n, float array[n][n*2],int Q)
{      
       int r,c;
       for(r=G+1;r<n;r++)
       {float z=array[r][Q];
       for(c=0;c<=2*n;c++) array[r][c]=array[r][c]-(z*array[G][c]);   }
           
}







void rrech(int n ,float array[n][n*2])
{      int f=n-1 ;
       for(f=n-1;f>=0;)
             {   
                 int j; 
                 for(j=0;j<=2*n;j++) if(array[f][j]==1)break;                  
                  
              
                 if(j==2*n){f--;break;} 
              
                 int e;
                 for(e=f-1;e>=0;e--)
                       {  
                          int d;float t=array[e][j];
                          for(d=0;d<=2*n;d++)
                          array[e][d]=array[e][d]-t*array[f][d];                     
                        /*printarray(n,array);*/                
                       }               
                       
               f--;
            }                 
}     




       for(r=0;r<n;r++){
                       for(c=0;c<n;c++){
                                           printf("\n");                 
                                           printf("a[%d][%d]= ",r+1,c+1);                 
                                           scanf("%f",&array[r][c]);c
                                         }
                       }                





void printarray(int n, float array[n][2*n])
{    
     int i,j;
     for(i=0;i<n;i++)
     {for(j=0;j<n*2;j++)
     printf("%.3f ",array[i][j]);
     printf("\n");      
     }   
     printf("\n\n");


     
}     






void printinverse(int n, float array[n][2*n])
{    
     printf("\n\n\n\nInverse of your matrix is -\n\n\n");
     int i,j;
     for(i=0;i<n;i++)
     {for(j=n;j<n*2;j++)
     if(array[i][j]>0)printf(" %.3f ",array[i][j]);
     else {if(array[i][j]<0)printf("%.3f ",array[i][j]);
             else printf(" %d",0);
             }
     
     printf("\n");      
     }   
     printf("\n\n");


     
}     









void welcome()
{
     printf(" \t\t       GAUSS JORDAN INVERSE CALCULATOR\n\n\n");
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

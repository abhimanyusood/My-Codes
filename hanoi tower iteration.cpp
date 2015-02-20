#include<stdio.h>
#include<math.h>
#include<conio.h>
int linearsearch(int array[]);
int linearsearch(int array[])
{
    int i;
    for(i=0;i<10000;i++)
    {
            if (array[i]==0)
            break;
            }
            return i;
     } 
     int main ()
{
     int p;
     scanf("%d",&p) ;  

     int a[10000];
     for(int i=0;i<10000;i++)
     {
             a[i]=0;
     }
     int N=1;
     a[0]=1;
     int i=1;
     int n=2;
     while(n<=p+1)
     {i=1;
          N=linearsearch(a);      
          
          while(i<=N)
          {
                     a[N]=n;
                     a[N+i]=a[N-i];
                     i++;
          }
                     n++;
     }/*int u=0;
     while(u<=13){printf("%d",a[u]);u++;}*/
     
     
     int b[p];
     for(int i=0;i<=p;i++)
     {
             b[i]=1;
     }
     while(a[i]!=0)
     {
                   if(a[i]%2==1)
                   {
                                if( b[a[i]]!=3)
                                {printf("%d   %d     %d\n",a[i], b[a[i]], b[a[i]]+1);
                                 b[a[i]]= b[a[i]]+1;}
                                else
                                {printf("%d   3     1\n",a[i]);
                                 b[a[i]]=1;}
                   }
                   else
                   {
                       if( b[a[i]]!=1)
                       {
                               printf("%d   %d     %d\n",a[i], b[a[i]], b[a[i]]-1);
                                b[a[i]]= b[a[i]]-1;
                       }
                       else
                       {
                           printf("%d   1     3\n",a[i]);
                            b[a[i]]=3;}
                           }
                           i++;
     }
     getch();
return(0);
}

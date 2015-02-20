#include <stdio.h>
#include <malloc.h>
#include <time.h>
void sieve(int n, int a[n]);
 
int main(int argc, char *argv)
{
      clock_t begin, end;
    double time_spent;
    
    begin = clock();
    
    
    int n=100000;
    int array[n];
    //array =(int *)malloc(sizeof(int));
    sieve(n,array);
    
end = clock();
time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
printf("\n\n\n\nTime taken:	%f",time_spent);  
    
    getch();
    return 0;
}
 
void sieve( int n, int a[n])
{
    int i=0, j=0;
 
    for(i=2; i<n; i++) {
        a[i] = 1;
    }
 
    for(i=2; i<n; i++) {
    //    printf("\ni:%d", i);
        if(a[i] == 1) {
            for(j=i; (i*j)<n; j++) {
      //          printf ("\nj:%d", j);
        //        printf("\nBefore a[%d*%d]: %d", i, j, a[i*j]);
                a[(i*j)] = 0;
          //      printf("\nAfter a[%d*%d]: %d", i, j, a[i*j]);
            }
        }
    }
 
   // printf("\nPrimes numbers from 1 to %d are : ", n);
    for(i=2; i<=n; i++) {
      //  if(a[i] == 1)
     //       printf("%d, ", i);
    }
    //printf("\n\n");
}

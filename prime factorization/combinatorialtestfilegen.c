#include<stdio.h>
#include<time.h>

int main()
{
    srand(time(NULL));
    
    int t = 1000;
    printf("%d\n",t);
    while(t--)
    {
              int n = rand()%(100000-1)+2;
              int m = rand()%(1000000000)+1;
              
              int q=1;
              int r = rand()%(n-1)+1;
              
              printf("%d %d %d\n%d\n",n,m,q,r);
              
              }
    
    
}

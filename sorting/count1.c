#include<stdio.h>
int a[1500][1500];
int b[1500][1500]={0};


void copy(int n, int b[n], int bc[n])
{
     int i;
     for(i=0;i<n;i++)bc[i]=b[i];
 }

 void printarray(int n,int a[n])
{
     printf("\nprintarray in action\n");
 int i;
 for (i=0; i<n; i++)
  printf("%d\n", a[i]);
 printf("\n");
}//end printarray

int readint()
    {
       int cc = getc(stdin);
       for (;cc < '0' || cc > '9';)  cc = getc(stdin);
       int ret = 0;
       for (;cc >= '0' && cc <= '9';)
       {
          ret = ret * 10 + cc - '0';
          cc = getc(stdin);
       }
      return ret;
   }
   

void quick_sort (int *a, int n,int *x) {
    if (n < 2)
        return;
    int p = a[n / 2];
    int *l = a;
    int *lx=x;
    int *r = a + n - 1;
    int *rx = x + n - 1;
    while (l < r) {
        if (*l > p) {
            l++;
            lx++;
            continue;
        }
        if (*r < p) {
            r--;
            rx--;
            continue; // we need to check the condition (l <= r) every time we change the value of l or r
        }
        int t = *l;
        *l++ = *r;
        *r-- = t;
        
         t = *lx;
        *lx++ = *rx;
        *rx-- = t;
    }
    quick_sort(a, r - a + 1,x);
    quick_sort(l, a + n - l,lx);
}





int main()
{
    int n;
 scanf("%d",&n);
 int i,j;
 for(i=0;i<n;i++)
 { char ss[n] ;
 scanf("%s",&ss);
 for(j=0;j<n;j++)
 {if(ss[j]=='1')a[i][j]=1;
 else a[i][j]=0;
}
}




for(i=0;i<n;i++)
for(j=0;j<n;j++)b[i][j]=a[j][i];


int k;
printf("\n\n");
for(j=0;j<n;j++)
{
                for(k=0;k<n;k++)
                printf("%d",b[k][j]);
                printf("\n");
                
                }
                
printf("\n\n\n");


int indu[n];
for(i=0;i<n;i++)indu[i]=i;


for(i=0;i<n;i++){

int k;
int bo[n];
int bc[n];

copy(n,b[i],bo);

copy(n,bo,bc);
quick_sort(bc,n,indu);
for(k=0;k<n;k++){copy(n,bo,bc);quick_sort(bc,n,b[k]);}

printf("\n");for(k=0;k<n;k++)printf("%d ",indu[k]);
printf("\n\n");

int j;
for(j=0;j<n;j++)
{
                for(k=0;k<n;k++)
                printf("%d",b[k][j]);
                printf("\n");
                
                }
                
printf("\n\n\n");

}
 
 getch();
 return 0;
}

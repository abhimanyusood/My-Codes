//store x coordinates in array b

//call quick_sort(b,n)
//arrays will be sorted in terms of x coordinates
//can handle coordinates in the range -10^9 to +10^9
#include<stdio.h>
#include<time.h>

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
   

void quick_sort (int *a, int n) {
    if (n < 2)
        return;
    int p = a[n / 2];
    int *l = a;
   
    int *r = a + n - 1;
  
    while (l <= r) {
        if (*l < p) {
            l++;
         
            continue;
        }
        if (*r > p) {
            r--;
           
            continue; // we need to check the condition (l <= r) every time we change the value of l or r
        }
        int t = *l;
        *l++ = *r;
        *r-- = t;
        
       
    }
    quick_sort(a, r - a + 1);
    quick_sort(l, a + n - l);
}


int main()
{
    
        
    clock_t begin, end;
    double time_spent;
    
    begin = clock();
    
    int n;
    //scanf("%d%d%d",&n,&k,&p);
    n=readint();
   
    
    int b[n];
    int i;
    for(i=0;i<n;i++){scanf("%d",&b[i]);}
    
    //Preprocessing
    
 
   // printarray(n,b);
    quick_sort(b,n);

    printarray(n,b);


  
end = clock();
time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
//printf("\n\n\n\nTime taken:	%f",time_spent);
    getch();
   
    return 0;
}

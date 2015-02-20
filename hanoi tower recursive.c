#include<stdio.h>
#include<conio.h>
#include <time.h>

int hanoi(int n,int a,int b,int c);
int main()
{
 	clock_t begin, end;  	 
double time_spent;
begin = clock();
  int n=21;
  hanoi(n,1,2,3);

end = clock();
time_spent = (double)(end - begin) / CLOCKS_PER_SEC;


printf("\n\n%f",time_spent);  

  getch();
}

int hanoi(int n,int a,int b,int c)
{
    if(n>=1){
    hanoi(n-1,a,c,b);
    printf("%d   %d\n",a,b);
    hanoi(n-1,c,b,a);
}

}    

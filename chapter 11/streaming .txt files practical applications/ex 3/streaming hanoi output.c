#include <stdio.h>
#include <stdio.h>
void hanoi(int n,int a,int b,int c,FILE *z);

int main()
{
    int n;
    printf("enter the number of disks-  ");
    scanf("%d",&n);
       FILE *z;
        if((z=fopen("hanoi steps.txt","w"))==NULL)printf("file couldn't be opened");
    else{
    
    hanoi(n,1,2,3,z);
       fclose(z);                   }
    getch();
    }
    
void hanoi(int n,int a,int b,int c,FILE *z)
{
   
     if(n==1){printf("processing\n"); 
             fprintf(z,"%d - %d\n",a,b);}
     else {
           hanoi(n-1,a,c,b,z);
           fprintf(z,"%d - %d\n",a,b);return 10;
           hanoi(n-1,c,b,a,z);
     
                        }
   
     }    

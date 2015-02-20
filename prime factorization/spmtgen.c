#include<time.h>
#include<stdio.h>

void scramble(int n, int a[n])
{
     
     int i;
     for(i=0;i<10000;i++)
     {
                       int p = rand()%n;
                       int q = rand()%n;
                       int temp = a[p];
                       a[p]=a[q];
                       a[q]=temp;
                       
                       }
     
     }
int main()
{
    FILE *ans;
    FILE *test;
    ans = fopen("ans.txt","w");
    test = fopen("test.txt","w");
    
  srand (time(NULL)   );
  
  int testcases=100;
  fprintf(test,"%d\n",testcases);
  while(testcases--)
{
                    
  int n = 300;//10;
  fprintf(test,"%d\n",n);
  int a[n] ;//= {1,2,3,4,5,6,7,8,9,10};
  int iitemp;for(iitemp=0;iitemp<n;iitemp++)a[iitemp]=iitemp+1;
  scramble(n,a);
  
  int itemp;
  for(itemp=0;itemp<n;itemp++)fprintf(ans,"%d ",a[itemp]);fprintf(ans,"\n");
  
  int i;
  //for(i=0;i<n;i++)printf("%d ",a[i]);
  //printf("\n\n");
//  printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
  
  int j;
  for(j=1;j<=n;j++){
  for(i=0;i<n;i++){
                  if(a[i]==j);//printf("  ");
                  else{
                  
                       
                       if(a[i]>j)fprintf(test,"%d ",a[i]-1);
                       else fprintf(test,"%d ",a[i]);
                       }
                       }
                  fprintf(test,"\n");
                  }
}   
    getch();
    return 0;
}

#include<time.h>
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
  srand (time(NULL)   );
  
  int n = 10;
  int a[10] = {1,2,3,4,5,6,7,8,10,9};
 // scramble(n,a);
  
  int i;
  for(i=0;i<n;i++)printf("%d ",a[i]);
  printf("\n\n");
//  printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
  
  int j;
  for(j=1;j<=n;j++){
  for(i=0;i<n;i++){
                  if(a[i]==j);//printf("  ");
                  else{
                  
                       
                       if(a[i]>j)printf("%d ",a[i]-1);
                       else printf("%d ",a[i]);
                       }
                       }
                  printf("\n");
                  }
    
    getch();
    return 0;
}

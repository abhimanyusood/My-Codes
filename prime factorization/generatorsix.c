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
  
  int testcases=720;
  int count=0;
  fprintf(test,"%d\n",testcases);
   int a[6] ;//= {1,2,3,4,5,6,7,8,9,10};
   int aa,bb,cc,dd,ee,ff;
   for(aa=1;aa<=6;aa++)
   for(bb=1;bb<=6;bb++)
   for(cc=1;cc<=6;cc++)
   for(dd=1;dd<=6;dd++)
   for(ee=1;ee<=6;ee++)
   for(ff=1;ff<=6;ff++)

{
                                                               if(  aa!=bb
                                                                  &&aa!=cc
                                                                  &&aa!=dd
                                                                  &&aa!=ee
                                                                  &&aa!=ff
                                                                  &&bb!=cc
                                                                  &&bb!=dd
                                                                  &&bb!=ee
                                                                  &&bb!=ff
                                                                  &&cc!=dd
                                                                  &&cc!=ee
                                                                  &&cc!=ff
                                                                  &&dd!=ee
                                                                  &&dd!=ff
                                                                  &&ee!=ff
                                                                  )
   {
                                                                  
                                                                  
   a[0]=aa;
   a[1]=bb;
   a[2]=cc;
   a[3]=dd;
   a[4]=ee;
   a[5]=ff;
   
   
                                                                  
     fprintf(test,"%d\n",6);     
  
  int itemp;
  int n=6;
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
                                                         
                                                                  
                                                                  
                                                                  }

printf("%d",count);  
/*
      a[]=aa;              
      a[]=bb;
      a[]=cc;
      a[]=dd;
      a[]=;
      a[]=;
      a[]=;
  int n = 300;//10;
  fprintf(test,"%d\n",n);
 
 
  
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
 
 */   getch();
    return 0;
}

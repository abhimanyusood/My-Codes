#include<stdio.h>
#include<conio.h>

void drun(int n,int s,int w,int e,int E);
int main()
{
    int s,w,e,ef;
    scanf("%d %d %d",&s,&w,&e);
    int n;
    if(s>=e)n=s;else n=e;
    int i,j,p=s,k,c=w,T;
    int a[n];for(i=1;i<=n;i++)a[i]=i;
    for(i=1;i<=n-1;i++){if(p+c-1>n-(i-1))T=(((p+c-1)%(n-(i-1))));else T=(p+c-1);if(T==0)T=(n-(i-1));a[T]=0;
                       for(j=T;j<n-(i-1);j++)a[j]=a[j+1];a[n-(i-1)]=0;if(T<n-(i-1))p=T;else p=1;}
    if(e==a[1])printf("\n\n%d",n);
    else drun(n,s,w,a[1],e);
    getch();
}

void drun(int n,int s,int w,int e,int E)
{ 
      n++;
      int a[n],i,sn,en,T,j,po;
      for(i=1;i<=n;i++)a[i]=i;
      /*if(s+w-1>n)T=(s+w-1-n);else T=(s+w-1);*/
      if((s+w-1)%n!=0)T=(s+w-1)%n;else T=n;
      a[T]=0; /*perform first death*/
      for(j=T;j<n;j++)a[j]=a[j+1];a[n]=0;/*shift the dead element to end*//*printf("ttt %dttt",T);*/
      if(T<=n-1)sn=T;else sn=T-n+1;/*find new s*/
      if(sn>s){en=(sn-s+e)%(n-1);if(en==0)en=n-1;}
      else{if(s>e){po=sn-(s-e)+n-1;}
           else po=sn+(e-s);
           en=po%(n-1);if(en==0)en=n-1;}  /*we know old s and old e use shifting formula to find new e this means that had we started with old s in n++ scenario last element would be new e*/
     /* printf("n=%d s=%d sn=%d e=%d en=%d elsn=%d elen =%d\n",n,s,sn,e,en,a[sn],a[en]);*/
      if(a[en]==E)printf("\n\n%d",n);/*if new e=matches print n*/
      else drun(n,s, w, a[en],E);
}

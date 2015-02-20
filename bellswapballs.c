void right(int a[7])
{
     int indofzero=0;
     int i;
     for(i=0;i<7;i++)if(a[i]==0){indofzero=i;break;}
     
     
     
     
     
     
     //r
     if(indofzero>=2)
     if(a[indofzero-2]!=1){
                 int temp = a[indofzero];
                 a[indofzero]=a[indofzero-2];
                 a[indofzero-2]=temp;
                 }
 }
 
 
 void left(int a[7])
{
     int indofzero=0;
     int i;
     for(i=0;i<7;i++)if(a[i]==0){indofzero=i;break;}
     
     if(indofzero+2<7)
         if(a[indofzero+2]!=-1){
                 int temp = a[indofzero];
                 a[indofzero]=a[indofzero+2];
                 a[indofzero+2]=temp;
                 }
     
}


int checkarray(int b[7])
{
       if(b[0]==1&&
     b[1]==1&&
     b[2]==1&&
     b[3]==0&&
     b[4]==-1&&
     b[5]==-1&&
     b[6]==-1)
     {
         
              return 1;
              }
         else return 0;
}

int main()
{
    
    int N=65535;
    int moves = 15;
    int nn;
    for(nn=N;nn>=0;nn--)
    {
                        int n=nn;
    int a[7]={-1,-1,-1,0,1,1,1};
    int soln[moves];
    int pp;
    for(pp=0;pp<moves;pp++)soln[pp]=0;
    int i;
    for(i=0;i<moves;i++)
    {
                     int rem = n%2;
                     n/=2;
                     if(rem==0)left(a);
                     if(rem==1)   right(a);
                     soln[i]=rem;
                     
    }
   // printf("%d\n",nn);
    if(checkarray(a)==1||1==1){
                         int qq;
                         for(qq=0;qq<7;qq++)printf("%d  ",a[qq]);
                         printf("  %d\n",nn);
                        // break;
                         }
}

printf("exit now");

getch();
return 0;

}


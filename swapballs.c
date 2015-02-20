int a[7]={-1,-1,-1,0,1,1,1};
int soln[15]={0};

void rec(int received[7],int I);

int main()
{
    rec(a,0);
    getch();
    
}

void rec(int received[7],int I)
{
     
//printf("%d\n",I);
     int b[7];
     int i;
     
     
     if(I<15){

     
     
     
     
     
     //rj
  //   printf("rj\n");
     for(i=0;i<7;i++)b[i]=received[i];         
     int indofzero=0;
     for(i=0;i<7;i++)if(b[i]==0){indofzero=i;break;}
     
     if(indofzero>=2)
     {
     if(b[indofzero-2]!=1){
                 int temp = b[indofzero];
                 b[indofzero]=b[indofzero-2];
                 b[indofzero-2]=temp;
                  soln[I]=2;
     rec(b,I+1);
                 }
                 
     }
     
    
     
     
     
     //lj
    // printf("lj\n");
      for(i=0;i<7;i++)b[i]=received[i];         
      indofzero=0;
     for(i=0;i<7;i++)if(b[i]==0){indofzero=i;break;}
    
if(indofzero+2<7)
     {
                
                 if(b[indofzero+2]!=-1){
                 int temp = b[indofzero];
                 b[indofzero]=b[indofzero+2];
                 b[indofzero+2]=temp;
                 soln[I]=-2;
       rec(b,I+1);
                 }
      
     }
     
                 
     
     
     
     
     
     
     //r
     //printf("r\n");
      for(i=0;i<7;i++)b[i]=received[i];         
      indofzero=0;
     for(i=0;i<7;i++)if(b[i]==0){indofzero=i;break;}
    
     if(indofzero>=1)
     {
     if(b[indofzero-1]!=1){
                 int temp = b[indofzero];
                 b[indofzero]=b[indofzero-1];
                 b[indofzero-1]=temp;
                 
                 soln[I]=1;
                 rec(b,I+1);
                 }
               
     }
     
     
     
     
     
     
     //l
     //printf("l\n");
      for(i=0;i<7;i++)b[i]=received[i];         
      indofzero=0;
     for(i=0;i<7;i++)if(b[i]==0){indofzero=i;break;}
    
if(indofzero+1<7)
    {
    if(b[indofzero+1]!=-1){
                 int temp = b[indofzero];
                 b[indofzero]=b[indofzero+1];
                 b[indofzero+1]=temp;
                 soln[I]=-1;
       rec(b,I+1);
                 }
                 
     }
    
     
     
     }
     
     
     
     
     else{
          for(i=0;i<7;i++)b[i]=received[i];
           if(b[0]==1&&
     b[1]==1&&
     b[2]==1&&
     b[3]==0&&
     b[4]==-1&&
     b[5]==-1&&
     b[6]==-1)
     {
              int j;
              for(j=0;j<15;j++)
              printf("%d  ",soln[j]);
              
              printf("\n");
              return 0;
              }
     
          }
 }

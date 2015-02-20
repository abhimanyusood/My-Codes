#include<stdio.h>
#include<conio.h>


/*0 in nput d controls both deletion and pen up*/


int main(void)
{ 
    int i=25, j=25;j--;i--;
    int a,b,d;
    int floor[50][50];
    for(int c=0;c<50;c++)
    for(int r=0;r<50;r++)
    floor[c][r]=0;
     int c=1;
    while(c!=9){
   for(int c=0;c<50;c++)
    {for(int r=0;r<50;r++)
    if(floor[c][r]==1)
    {printf("*");}
    else{printf(" ");}
    printf("\n");}
  
  scanf("%d%d%d",&a,&b,&d);
  
  
  
int row ,column ;
  
  if(a==8)
  {for(row=i, column=j;column>j-b;column--)
    floor[column][i]=d>0?1:0;;}                         
  
  
 if(a==2)
  {for(row=i, column=j;column<j+b;column++)
    floor[column][i]=d>0?1:0;}                         
  
  
  
   if(a==6)
  {for( column=j, row=i;row<i+b;row++)
    floor[j][row]=d>0?1:0;}                         
  
    if(a==4)
  {for( column=j, row=i;row>i-b;row--)
    floor[j][row]=d>0?1:0;}                        
 
    if(a==7)
  {for( column=j, row=i;row>i-b;row--)
   floor[j--][row]= d>0?1:0;column=j;}     
  
  
   if(a==9)
  {for( column=j, row=i;row<i+b;row++)
  
    {floor[j--][row]=d>0?1:0;}
    column=j;}
    
        
  
 if(a==1)
  {for(row=i, column=j;column<j+b;column++)
    floor[column][i--]=d>0?1:0;row=i;}                         
  
   
  if(a==3)
  {for(row=i, column=j;column<j+b;column++)
    floor[column][i++]=d>0?1:0;row=i;}                         
    
    
    
  
  i= row;
  j=column;
 
}  
  getch();
  return 0;  
}

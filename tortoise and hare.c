#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>

int main()
{
    
   
    
     int a[70];
     
     int i;
     for(i=0;i<70;i++)a[i]=0;
     
     int h=0 ,t=0 ;
     a[h]=1;a[t]=2;
     
     printf("%dtt\n\n",(unsigned)time(NULL));
	char buf[10];
	// convert 123 to string [buf]
	itoa((unsigned)time(NULL), buf, 10);
	// print our string
	printf("%s\n", buf);

//sprintf(str,  "%d",(unsigned)time(NULL) );

     
     srand((unsigned)time(NULL)); 
    
     int d;
     for(;h<69&&t<69;)
     {
      
     d=(rand()%10)+1;
   

    
     switch(d){
               case 1:
               a[h]=0;a[t]=0;
               a[h]=1;a[t+3]=2;
               t=t+3;
               break;
                       
               case 2:
               a[h]=0;a[t]=0;
               a[h]=1;a[t+3]=2;
               t=t+3;
               break;
                       
      
               case 3:
               a[h]=0;a[t]=0;
               a[h+9]=1;a[t+3]=2;
               h=h+9;t=t+3;
               break;
                       
      
               case 4:
               a[h]=0;a[t]=0;
               a[h+9]=1;a[t+3]=2;
               h=h+9;t=t+3;
               break;
                       

               case 5:
               if(h-12>=0){
                           a[h]=0;a[t]=0;
                           a[h-12]=1;a[t+3]=2;
                           h=h-12;t=t+3;
                           }
                else      { a[t]=0;
                            a[t+3]=2;
                            t=t+3;                   
                           }
               break;
                       
 
               
               
               
               case 6:
                if(t-6>=0){
                           a[h]=0;a[t]=0;
                           a[h+1]=1;a[t-6]=2;
                           h=h+1;t=t-6;
                           }
                else       { a[h]=0;
                            a[h+1]=1;
                            h=h+1;
                           }    
                break;
                       
                 
                
                
                            
               case 7:
               if(t-6>=0){
                           a[h]=0;a[t]=0;
                           a[h+1]=1;a[t-6]=2;
                           h=h+1;t=t-6;
                           }
                else       { a[h]=0;
                            a[h+1]=1;
                            h=h+1;
                           }    
                
                break;
                       
               
               
               
               case 8:
               a[h]=0;a[t]=0;
               a[h+1]=1;a[t+1]=2;
               h=h+1;t=t+1;
               break;
                       
               
               
               
               case 9:
               if(h-2>=1){
                           a[h]=0;a[t]=0;
                           a[h-2]=1;a[t+1]=2;
                           h=h-2;t=t+1;
                          }
               else      {  a[t]=0;
                            a[t+1]=2;
                            t=t+1;          
                          }
               break;
                       
                                     
                          
               case 10:
                if(h-2>=1){
                           a[h]=0;a[t]=0;
                           a[h-2]=1;a[t+1]=2;
                           h=h-2;t=t+1;
                          }
               else      {  a[t]=0;
                            a[t+1]=2;
                            t=t+1;          
                          }
               break;
                       
                          
               
               
           }
   
  /* 
     system("cls");  
     int i;
     for(i=0;i<70;i++){
                       if(i==69||i==0)printf("*");
                       if(a[i]==0)printf(" ");
                       if(a[i]==1)printf("H");
                       if(a[i]==2)printf("T");
                       }
      
 
     sleep(50);
     
    */ 
     
     
     }
     
     
     if(h>=64)printf("\n\nhare wins");else {if(t>=69)printf("\n\ntortoise wins");}
     
getch();    
}

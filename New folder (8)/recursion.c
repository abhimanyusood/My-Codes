#include<stdio.h>
#include<conio.h>
void rec(int i,int c);
int main()
{
    int a=0,c=0;
    rec(a,c);
    getch();
    return 0;
    
}


void rec(int i,int c)
{
        if(i<=1){
                 c++; 
                           i++;
                           rec(i,c);
                           
                           printf("%d ",i) ; 
                           i=i+1; 
                              rec(i,c);
                           
                           printf("%d \n",i)  ;                    
                         printf("\n\n%d\n \n",c)  ;
                            }
        
        
        }
    




/*Law of holdups

Recursion acts  in a strange manner . It creates n holdups and allow only one element to seep through .
Moreover things are exclusive for the seeped element . So , for example if 1seep is executed and now the second holdup 
is seeping then program would behave as if the first seep was never executed , nor there are any more  holdups waiting 
in line.
If a counter was at  0  when all hold ups were waiting in line and the first seep increased this counter by  5  , then
when the second seep is executed , counter again starts from 0 , as if first seep was never executed .

*/

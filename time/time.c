//time of execution of code
#include<time.h>
int main()
{
 clock_t begin, end;
    double time_spent;
    
    begin = clock();
    
    //code
    
    end = clock();
time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
printf("\n\n\n\nTime taken:	%f",time_spent);   
    
}

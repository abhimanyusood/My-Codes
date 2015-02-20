#include<stdio.h>
#include<conio.h>
int main()
{
    int account;
    char name[30];
    double balance;
    FILE *a,*b;
    if((a=fopen("clint.txt","r"))==NULL)printf("file couldn't be opened");
    else {printf("%-10s%-13s%s\n", "account","name","balance");
    fscanf(a, "%d%s%lf",&account,name,&balance);
    
    while( !feof(a)){
                        printf("%-10d%-13s%.2f\n", account,name,balance);
                        fscanf(a, "%d%s%lf",&account,name,&balance);

                        }
                             fclose(a); } 
    
    
                             
                             

    getch();                    
                        
}

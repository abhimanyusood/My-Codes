#include<stdio.h>
#include<conio.h>
int main()
{
    int account;
    char name[30];
    double balance;
    FILE *a;
    if((a=fopen("clint.txt","w"))==NULL)printf("file couldn't be opened");
    else {printf("enter account, name and balance\nEOF(ctrl+z) to end input\n?");
    scanf("%d%s%lf",&account,name,&balance);
    
    while( !feof( stdin) ){
                        fprintf(a,"%d %s %.2f\n",account, name, balance);
                        printf("?");
                        scanf("%d%s%lf",&account,name,&balance);
                        }
     fclose(a); }                   
    getch();                    
                        
}

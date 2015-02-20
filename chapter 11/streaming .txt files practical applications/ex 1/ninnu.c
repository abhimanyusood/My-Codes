#include<stdio.h>
#include<conio.h>
int main()
{
    
    char name[3000];
    
    FILE *a;
    if((a=fopen("ninnu.txt","r"))==NULL)printf("file couldn't be opened");
    else {
    fscanf(a, "%s",name);
    
    while( !feof(a)){
                        printf("%s",name);
                        fscanf(a, "%s",name);

                        }
                             fclose(a); } 
    getch();                    
                        
}

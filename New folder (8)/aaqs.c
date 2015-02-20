#include<stdio.h>
#include<conio.h>
void display(char value);
int main()
{
    char v;
  //  scanf("%c",&x);
  //  display(((v|~v)<<7)>>7);
    display('Ï');
    getch();
}
void display(char value)
{
     unsigned c,mask=1<<7;
     for(c=1;c<=8;c++){
                       putchar(value&mask?'1':'0');
                       value<<=1;
                       if(c%4==0)putchar(' ');
                       }
}
     

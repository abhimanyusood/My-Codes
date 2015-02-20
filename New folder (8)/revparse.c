#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void dibasca(char chip,char bitarray[8]);
int main()
{
      FILE *fp;
     char b='\a' ;
         fp = fopen ( "clint.txt", "a" ) ;
         fprintf(fp,"%c",b);
         fclose(fp);
    
               FILE *z;
           z=fopen("parse.txt","w");
           FILE *g;
           g = fopen ( "clint.txt", "rb+" ) ;
           
           
           char bitarray[8],ch=fgetc(g);
           int i=0,j=0,k=0;
           while(1){
                           if(ch=='\a')break;
                           //if(k==157)break;
                           dibasca(ch,bitarray);
                           for(j=0;j<8;j++){printf("%c",bitarray[j]);fprintf(z,"%c",bitarray[j]);}
                           fprintf(z," ");
                           ch=fgetc(g);
                           k++;
                           }

                    
fclose( g );
fclose( z );           

getch();
}

void dibasca(char chip,char bitarray[8])
{
     
     unsigned c,mask=1<<7;
     for(c=1;c<=8;c++){
                       bitarray[c-1]=(chip&mask?'1':'0');
                       chip<<=1;
                       }
//tarray[8]='\0';
}

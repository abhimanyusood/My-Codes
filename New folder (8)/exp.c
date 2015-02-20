#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void dibasca(char chip,char bitarray[8]);
int main()
{

             FILE *z;
           z=fopen("parse.txt","wb+");
         FILE *g;
           g = fopen ( "clint.txt", "rb" ) ;
           
          
           char bitarray[8];
           char ch;//i=fgetc(g);printf("%c\n",ch);
           fscanf(g,"%c",&ch);

        int j=1,o=0;
        while(o<=2864*8){
                       
                           dibasca(ch,bitarray);
                           for(j=0;j<8;j++){printf("%c",bitarray[j]);fprintf(z,"%c",bitarray[j]);o++;if(o%8==0)fprintf(z,":%d:              ",o/8);}
                           //fprintf(z," ");
                           fscanf(g,"%c",&ch);
                           //ch=fgetc(g);
                           j++;
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

}

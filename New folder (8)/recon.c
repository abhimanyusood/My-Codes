#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void dibasca(char chip,char bitarray[8]);
int main()
{
    char octa=octa&~octa,ch;
    FILE *zi;
    char bitarray[8],chitarray[8];
    int i,j,k,l,m,n,o,p,x,y=0,z;
    for(i=0;i<2;i++){bitarray[0]=(i?'1':'0');
    for(j=0;j<2;j++){bitarray[1]=(j?'1':'0');
    for(k=0;k<2;k++){bitarray[2]=(k?'1':'0');
    for(l=0;l<2;l++){bitarray[3]=(l?'1':'0');
    for(m=0;m<2;m++){bitarray[4]=(m?'1':'0');
    for(n=0;n<2;n++){bitarray[5]=(n?'1':'0');
    for(o=0;o<2;o++){bitarray[6]=(o?'1':'0');
    for(p=0;p<2;p++){
                     y++;
                     bitarray[7]=(p?'1':'0');
                     for(x=0;x<8;x++){
                                      if(bitarray[x]=='1')octa|=1<<(7-x);
                                      printf("%c",bitarray[x]);
                                      }
                     printf("    %d       %c        ",y,octa);
                     zi=fopen("clint.txt","w");
                     fprintf(zi,"%c",octa);
                     fclose( zi );
                     zi=fopen("clint.txt","r");
                     ch=fgetc(zi);
                     dibasca(ch,chitarray);
                    // for(x=0;x<8;x++){printf("%c",chitarray[x]);}
                     printf("\n");
                     fclose(zi);
                     octa=octa&~octa;
                     }
    }}}}}}}
    
    
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

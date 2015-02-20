#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define BITLEN 150

struct tree{
       char data;
       int freq;
       struct tree *leftptr;
       struct tree *rightptr;
       struct tree *parentptr;
       };
       
struct list{
       struct tree *noddyptr;
       struct list *nxtptr;
       };
       
typedef struct tree Tree;
typedef Tree *Treeptr;
typedef struct list List;
typedef struct list *Listptr;

Listptr rptr=NULL,uninewptr=NULL;
int globali=0;
char symbol[256]={'\0'}, code[256][BITLEN];
char Code[256][BITLEN];



void initializelist(char ch,int f);
void printlist();
void insertlist();
void table(Treeptr startptr,int i);
void copy();
void filewrite();
void display(char value);

int main()
{
    int COUNT;
    int i,j;
    char charray[256]={'\0'};
    int farray[256]={0};
    FILE *fp;
 

         
         char ch,b='\a' ;
         fp = fopen ( "re.txt", "a" ) ;
         fprintf(fp,"%c",b);
         fclose(fp);
         fp = fopen ( "re.txt", "rb+" ) ;
       
         while ( 1 ){
                     ch = fgetc ( fp ) ;
                     if ( ch == EOF )break ;
                     //printf("%c",ch);
                     int i=0,o=0;
                     while(charray[i]!='\0'){                                            
                                             if(ch==charray[i]){farray[i]++;o=1;break;}
                                             i++;
                                             }
                     if(o==0){charray[i]=ch;farray[i]++;}
                    }
         fclose ( fp ) ;
         
             
         for(i=0;charray[i]!='\0';i++)printf("%c  %d\n",charray[i],farray[i]);printf("kkkkk%d",i);
         COUNT=i;
         for(i=0;i<COUNT;i++)initializelist(charray[i],farray[i]);
         printf("\n\n\n\n\n\n\n\nopp%d\n",rptr->nxtptr);printlist();
         
 while(rptr->nxtptr!=NULL){        
                            Listptr l1=rptr;
                            rptr=rptr->nxtptr;
                            l1->nxtptr=NULL;//printf("\nninnu 1 %c\n",l1->noddyptr->data);printf("\nninnu 2 %d\n",l1->noddyptr->freq);
                            Listptr l2=rptr;
                            rptr=rptr->nxtptr;
                            l2->nxtptr=NULL;//printf("\nninnu 3 %c\n",l2->noddyptr->data);printf("\nninnu 4 %d\n",l2->noddyptr->freq);    
                            
                            Treeptr newtreenodeptr=malloc(sizeof(Tree));
                            newtreenodeptr->data='|';
                            newtreenodeptr->freq=(l1->noddyptr->freq)+(l2->noddyptr->freq);//printf("\nninnu 5 %d\n",newtreenodeptr->freq);
                            newtreenodeptr->leftptr=l1->noddyptr;
                            l1->noddyptr->parentptr=newtreenodeptr;
                            newtreenodeptr->rightptr=l2->noddyptr;
                            l2->noddyptr->parentptr=newtreenodeptr;
                            newtreenodeptr->parentptr=NULL;
                            
                            uninewptr= malloc(sizeof(List));
                            uninewptr->noddyptr=newtreenodeptr;
                            uninewptr->nxtptr=NULL;
                            
                            insertlist();//printlist();
                       
                            uninewptr=NULL;
                                                    
                            }
 
Treeptr startptr=rptr->noddyptr; // printf("\nninnu 6 %c  %d  %d  %d\n",startptr->data,startptr->freq,startptr->leftptr->rightptr,startptr->leftptr->leftptr);                   
table(startptr,0);
printf("\n\n\n\njjjjjj\n");
//for(i=0;symbol[i]!='\0';i++)printf("symbol[%d]=%c  \n",i,symbol[i],code[i]);
/*for(i=0;i<8;i++)
for(i=0;i<8;i++)printf("%d",code[5][i]);printf("\n");
for(i=0;i<8;i++)printf("%d",code[6][i]);printf("\n");
for(i=0;i<8;i++)printf("%d",code[7][i]);printf("\n");
for(i=0;i<8;i++)printf("%d",code[8][i]);printf("\n");
for(i=0;i<8;i++)printf("%d",code[9][i]);
*/



for(j=0;j<COUNT;j++){printf("%c  %s\n",symbol[j],code[j]);}
                      
         FILE *z;
         z=fopen("clint.txt","w");
         FILE *g;
         g = fopen ( "re.txt", "r" ) ;
         char cha;
      
         int n=0,m=0,k=1,x;
         char octa=octa&~octa,v;
         while(1){
                  cha = fgetc ( g ) ;
                  if(cha==EOF)break;
                  for(x=0;x<COUNT;x++)if(cha==symbol[x])break;
                  for(i=0;;){ 
                                m++;m%=8;
                                if(code[x][i]=='1')octa|=1<<(7-n);
                                //manipulate nth bit of octa with code[x][i]
                                n++;i++;//printf("\n\nboot %d\n",n); 
                                if(n==8){n=0;fprintf(z,"%c",octa);k++;/*printf("pp %c pp\n ",octa);display(octa);printf("pp\n ",octa);*/octa=octa&~octa;/*parse octa;initialize octa*/}
                                if(code[x][i]=='\0')break;
                                }
                  //printf("tatti\n"); 
                  }
                                       
          int RB=8-m%8;             
          for(i=RB;i<8;i++)if(code[x][i]=='1')octa|=1<<(7-n);
          //display(octa)   ;                           
          fprintf(z,"%c",octa);

#if 0
fclose( g );
fclose( z );


   
         z=fopen("binclint.txt","wb");
         
         g = fopen ( "re.txt", "r" ) ;
     
      
         while ( 1 ){
                     cha = fgetc ( g ) ;//fprintf(z,"%c",'u');
                     if ( cha == EOF )break ;
                     for(i=0;i<COUNT;i++)if(symbol[i]==cha)break;
                     fprintf(z,"%s",code[i]);
                    }



fclose( g );
fclose( z );

#endif
        
 z=fopen("binclint1.txt","wb");
         
         g = fopen ( "re.txt", "r" ) ;
     int p,o=0;
      
         while ( 1 ){
                     cha = fgetc ( g ) ;//fprintf(z,"%c",'u');
                     if ( cha == EOF )break ;
                     for(i=0;i<COUNT;i++)if(symbol[i]==cha)break;
                     for(p=0;code[i][p]!='\0';p++){fprintf(z,"%c",code[i][p]);o++;if(o%8==0)fprintf(z,":%d:              ",o/8);}
                    
                    }



fclose( g );
fclose( z );



printf("tstta %d\n",COUNT);

FILE *u;
u=fopen("huff.txt","w");
fprintf(u,"%d %d ",RB,COUNT);
for(i=0;i<COUNT;i++)fprintf(u,"%c",charray[i]);
for(i=0;i<COUNT;i++)fprintf(u," %d",farray[i]);
fclose(u);

                           
getch();
}
        

void initializelist(char ch,int f)
{
    Listptr newptr;
    Listptr previousptr;    
    Listptr currentptr;
    
    Treeptr newtreenodeptr=malloc(sizeof(Tree));
    newtreenodeptr->data=ch;
    newtreenodeptr->freq=f;
    newtreenodeptr->leftptr=NULL;
    newtreenodeptr->rightptr=NULL;
    newtreenodeptr->parentptr=NULL;
    
    newptr= malloc(sizeof(List));
    newptr->noddyptr=newtreenodeptr;
    newptr->nxtptr=NULL;
    
    previousptr=NULL;
    currentptr=rptr;
    while(currentptr!=NULL&&currentptr->noddyptr->freq<f){
                                                          previousptr=currentptr;
                                                          currentptr=currentptr->nxtptr;
                                                          }
    if(previousptr==NULL){
                          rptr=newptr;
                          newptr->nxtptr=currentptr;
                         }       
    else{
         previousptr->nxtptr=newptr;
         newptr->nxtptr=currentptr;
        }
    
}       
 
 
 
void printlist()
{
    Listptr frootptr=rptr;
    while(frootptr!=NULL){
                          printf("%c  %d\n",frootptr->noddyptr->data,frootptr->noddyptr->freq);
                          frootptr=frootptr->nxtptr;
                         }
}      


void insertlist()
{
    Listptr newptr;
    Listptr previousptr;    
    Listptr currentptr;
    
    previousptr=NULL;
    currentptr=rptr;
    while(currentptr!=NULL&&currentptr->noddyptr->freq<uninewptr->noddyptr->freq){
                                                          previousptr=currentptr;
                                                          currentptr=currentptr->nxtptr;
                                                         }
    if(previousptr==NULL){
                            rptr=uninewptr;
                            uninewptr->nxtptr=currentptr;
                        }       
    else{
            previousptr->nxtptr=uninewptr;
            uninewptr->nxtptr=currentptr;
        }     
        
}



void table(Treeptr startptr,int i)
{
    if(startptr!=NULL){
                       if(startptr->leftptr!=NULL){
                                                   code[globali][i]='0';
                                                   //printf("code[%d][%d]=%d\n",globali,i,code[globali][i]);
                                                   table(startptr->leftptr,i+1);
                                                   }
                                                   
                       if(startptr->rightptr!=NULL){
                                                    code[globali][i]='1';
                                                    //printf("code[%d][%d]=%d\n",globali,i,code[globali][i]);
                                                    table(startptr->rightptr,i+1);
                                                    }
                                                    
                       if(startptr->leftptr==NULL&startptr->rightptr==NULL){
                                                                            symbol[globali]=startptr->data;//printf("symbol[%d]=%c\n",globali,symbol[globali]);
                                                                            copy();
                                                                            code[globali][i]='\0';
                                                                            globali++;
                                                                            }
                       }
}




void copy()
{
     int i;
     for(i=0;i<BITLEN;i++)code[globali+1][i]=code[globali][i];
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

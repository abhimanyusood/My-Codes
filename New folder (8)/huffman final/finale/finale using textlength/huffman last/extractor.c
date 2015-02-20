#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

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

void initializelist(char ch,int f);
void printlist();
void insertlist();
void dibasca(char chip,char bitarray[7]);
char sub(char x);
void dev();

int main()
{

int i;    
FILE *vv;
vv=fopen("huff.txt","r");
int TEXTLENGTH,count;
fscanf(vv, "%d %d ",&TEXTLENGTH,&count);
//printf("\n\nmoo %d %d moo\n",TEXTLENGTH,count);
char charray[count];
int farray[count];

for(i=0;i<count;i++)fscanf(vv,"%c",&charray[i]);
for(i=0;i<count;i++)fscanf(vv," %d",&farray[i]);
//for(i=0;i<count;i++)printf("%c %d\n",charray[i],farray[i]);

fclose(vv);

           
           for(i=0;i<count;i++)initializelist(charray[i],farray[i]);
           //printf("\n\n\n\n\n\n\n\nopp%d\n",rptr->nxtptr);printlist();
           
           
           
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
 
           Treeptr startptr=rptr->noddyptr; 
           
           

         int textlength=0;
         
           FILE *z;
           z=fopen("out.txt","w");
           FILE *g;
           g = fopen ( "compressed.txt", "rb+" ) ;
           
           
           char bitarray[8];
           char ch=fgetc(g);ch=sub(ch);//printf("%c",ch);
     int o,j=0;
           while(1){
                           
                   
 
                                  dibasca(ch,bitarray);
                                  //int hoo;for(hoo=0;hoo<7;hoo++)printf("%c",bitarray[hoo]);printf("\t");
                                  for(i=0;;){
                                             if(bitarray[i]=='0'){
                                                                  startptr=startptr->leftptr;
                                                                  if(startptr->leftptr==NULL&&startptr->rightptr==NULL){
                                                                                                                        //if(startptr->data=='\a'){o=1;break;}
                                                                                                                        if(textlength==TEXTLENGTH){o=1;break;}
                                                                                                                        fprintf(z,"%c",startptr->data);
                                                                                                                        textlength++;
                                                                                                                        startptr=rptr->noddyptr;
                                                                                                                        }
                                                                  }
                                          
                                             if(bitarray[i]=='1'){
                                                                  startptr=startptr->rightptr;
                                                                  if(startptr->leftptr==NULL&&startptr->rightptr==NULL){
                                                                                                                        //if(startptr->data=='\a'){o=1;break;}
                                                                                                                        if(textlength==TEXTLENGTH){o=1;break;}
                                                                                                                        fprintf(z,"%c",startptr->data);
                                                                                                                        textlength++;
                                                                                                                        startptr=rptr->noddyptr;
                                                                                                                        }
                                                                  }
                                             
                                             i++;
                                             if(i==7){ch=fgetc(g);ch=sub(ch);/*printf("%c",ch);*/break;}
                                             }
                               
                                 
                    if(o==1)break;j++;
                    }
                    
fclose( g );
fclose( z );           

printf("Your file has been extracted.");

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

void dibasca(char chip,char bitarray[8])
{
     unsigned c,mask=1<<7;
     chip<<=1;
     for(c=1;c<=7;c++){
                       bitarray[c-1]=(chip&mask?'1':'0');
                       chip<<=1;
                       }
}
     

void dev()
{     
      printf("\n\n\n\nTHANK YOU\n\n\n\n\n\n\t\t\t\t\t\t\tdeveloped by -\n\t\t\t\t\t\t\tabhimanyu sood");
} 

char sub(char x)
{
 	  char a=x;
 int i = a;
 x-=48;
 char b = x;
 //printf("\n\n\ntatti khaa %c le\n",b);
     
      return b;
      

}

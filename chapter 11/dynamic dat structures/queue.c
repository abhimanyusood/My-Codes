#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct queue{
    char data;
    struct queue *nxtptr;
    };
    
typedef struct queue Queue;
typedef Queue *Queueptr;

void enqueue(Queueptr *tailptr,Queueptr *headptr, char value);
void dequeue(Queueptr *headptr,Queueptr *tailptr);
void printqueue(Queueptr headptr);

int main()
{
    Queueptr tailptr=NULL;
    Queueptr headptr=NULL;
    int choice;char value;
    printf("enter choice, 1 to insert, 2 to delete\n");
    scanf("%d",&choice);
    while(choice!=3){
                      switch(choice){
                                        case 1:
                                        printf("\nenter the value you wish to insert\n? ");
                                        scanf("\n%c",&value);
                                        enqueue(&tailptr,&headptr,value);
                                        printqueue(headptr);
                                      
                                        break;
                                        
                                        case 2:
                                        dequeue(&headptr,&tailptr);
                                        printqueue(headptr);
                                      
                                        break;
                                        
                                        
                                        
                                      }
                      printf("\n\nenter choice, 1 to insert, 2 to delete ");
                      scanf("%d",&choice);
                    
                    }
getch();
}


void enqueue(Queueptr *tailptr,Queueptr *headptr, char value)
{
     Queueptr newptr=malloc(sizeof(Queue));
     newptr->data=value;
     newptr->nxtptr=NULL;
     
     if(*tailptr==NULL){
                        *tailptr=newptr;
                        *headptr=newptr;
                        }
     else{
          (*tailptr)->nxtptr=newptr;
          *tailptr=newptr;
          }
}



void printqueue(Queueptr headptr)
{
    while(headptr!=NULL){
                         printf("%c-->",headptr->data);
                         headptr=headptr->nxtptr;
                         }
}



void dequeue(Queueptr *headptr,Queueptr *tailptr)
{
     if((*headptr)!=NULL){
                             printf("\n the dequeued value is %c\n\n",(*headptr)->data);
                             Queueptr tmpptr=*headptr;
                             *headptr=(*headptr)->nxtptr;
                             free(tmpptr);
                           }
     if((*headptr)==NULL){ (*tailptr)=NULL;printf("\nqueue is empty\n\a");}
}

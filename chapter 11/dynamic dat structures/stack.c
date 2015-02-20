#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct stack{
    char data;
    struct stack *nxtptr;
    };
    
typedef struct stack Stack;
typedef Stack *Stackptr;

void push(Stackptr *headptr, char value);
void pop(Stackptr *headptr);
void printstack(Stackptr headptr);

int main()
{
    Stackptr headptr=NULL;
    int choice;char value;
    printf("enter choice, 1 to insert, 2 to delete\n");
    scanf("%d",&choice);
    while(choice!=3){
                      switch(choice){
                                        case 1:
                                        printf("\nenter the value you wish to push\n? ");
                                        scanf("\n%c",&value);
                                        push(&headptr,value);
                                        printstack(headptr);
                                      
                                        break;
                                        
                                        case 2:
                                        pop(&headptr);
                                        printstack(headptr);
                                      
                                        break;
                                       
                                        
                                      }
                      printf("\n\nenter choice, 1 to insert, 2 to delete ");
                      scanf("%d",&choice);
                    
                    }
getch();
}
                    
                    

void push(Stackptr *headptr, char value)
{
    Stackptr newptr=malloc(sizeof(Stack));
    newptr->data=value;
    newptr->nxtptr=*headptr;
    *headptr=newptr;
}



void printstack(Stackptr headptr)
{
    while(headptr!=NULL){
                         printf("%c-->",headptr->data);
                         headptr=headptr->nxtptr;
                         }
}
        

                            
void pop(Stackptr *headptr)
{
     if((*headptr)!=NULL){
                             printf("\n the popped value is %c\n\n",(*headptr)->data);
                             Stackptr tmpptr=*headptr;
                             *headptr=(*headptr)->nxtptr;
                             free(tmpptr);
                           }
     else printf("\nstack is empty\n\a");
}

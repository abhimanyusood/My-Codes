#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct list{
    char data;
    struct list *nxtptr;
    };
    
typedef struct list List;
typedef List *Listptr;

void insertnode(Listptr *rptr, char value);
void deletenode(Listptr *rptr, char value);
void printlist(Listptr rptr);

int main()
{
    Listptr rootptr=NULL;
    int choice;char value;
    printf("enter choice, 1 to insert, 2 to delete\n");
    scanf("%d",&choice);
    while(choice!=3){
                      switch(choice){
                                        case 1:
                                        printf("\nenter the value you wish to insert\n? ");
                                        scanf("\n%c",&value);
                                        insertnode(&rootptr,value);
                                        printlist(rootptr);
                                      
                                        break;
                                        
                                        case 2:
                                        printf("\nenter the value you wish to delete\n? ");
                                        scanf("\n%c",&value);
                                        deletenode(&rootptr,value);
                                        printlist(rootptr);
                                      
                                        break;
                                        
                                        
                                      }
                      printf("\n\nenter choice, 1 to insert, 2 to delete ");
                      scanf("%d",&choice);
                    
                    }
getch();
}
                    
                    
                    
void insertnode(Listptr *rptr, char value)
{
    Listptr newptr;
    Listptr previousptr;    
    Listptr currentptr;
    
    newptr= malloc(sizeof(List));
    newptr->data=value;
    newptr->nxtptr=NULL;
    
         previousptr=NULL;
         currentptr=(*rptr);
         while(currentptr!=NULL&&currentptr->data<value){
                                        previousptr=currentptr;
                                        currentptr=currentptr->nxtptr;
                                      }
         if(previousptr==NULL){
                                *rptr=newptr;
                                newptr->nxtptr=currentptr;
                            }       
         else{
                previousptr->nxtptr=newptr;
                newptr->nxtptr=currentptr;
            }
        

}
                             
                              
                              
                   
void printlist(Listptr rptr)
{
    
    while(rptr!=NULL){
                      printf("%c-->",rptr->data);
                      rptr=rptr->nxtptr;
                    }
}        



void deletenode(Listptr *rptr, char value)
{
    Listptr furtherptr;
    Listptr previousptr;    
    Listptr currentptr;
    
    previousptr=NULL;
    currentptr=(*rptr);
  
    
     while(currentptr!=NULL&&currentptr->data!=value){
                                        previousptr=currentptr;
                                        currentptr=currentptr->nxtptr;
                                        
                                        
                                      }
         if(previousptr==NULL&&currentptr!=NULL){
                                                    Listptr tmpptr=currentptr;
                                                    *rptr=currentptr->nxtptr;
                                                    free(tmpptr);
                                                  }
                            
         if(previousptr==NULL&&currentptr==NULL)printf("\nlist is empty\n");
         
         if(previousptr!=NULL){
              if(currentptr==NULL)printf("value not in list\n\n");
               else{ previousptr->nxtptr=currentptr->nxtptr;
                free(currentptr);}
            }
    
}        

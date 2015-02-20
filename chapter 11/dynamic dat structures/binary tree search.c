#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

struct tree{
       struct tree *leftptr;
       struct tree *rightptr;
       int data;
       };
       
typedef struct tree Tree;
typedef Tree *Treeptr;

void insertnode(Treeptr *treeptr, int value);
void inorder(Treeptr treeptr);
Treeptr search(Treeptr treptr, int key);
void delete(Treeptr *treeptr,int value);
int garb(Treeptr *treeptr);

int main()
{
     Tree *rootptr=NULL;
     
     srand((unsigned)time(NULL));
     int d,i,k,del;
     Tree *x=NULL;
     for(i=0;i<10;i++){
                       /*d=(rand()%15)+1;
                       printf("%d ",d);*/
                       scanf("%d",&d);
                       insertnode(&rootptr,d);
                       }
     
     printf("\n");
     inorder(rootptr);
   /*  printf("\n\n%d",*x);
    printf("\n\n1  %d\n\n",x);
     */
 /*    printf("\nenter key\n");
     scanf("%d",&k);
     
     x=search(rootptr,k);
     if(x!=NULL){
                 printf("\n\n2  %d",x->data);
                 printf("\n\n3  %d",x);
                 }
   */  
     printf("\nenter the value to be deleted");
     scanf("%d",&del);
     delete(&rootptr,del);
     inorder(rootptr);
     
     getch();
}


void insertnode(Treeptr *treeptr, int value)
{
     if(*treeptr==NULL){
                        *treeptr=malloc(sizeof(Tree));
                        (*treeptr)->data=value;
                        (*treeptr)->leftptr=NULL;
                        (*treeptr)->rightptr=NULL;
                        }
     else{
          if(value>(*treeptr)->data){
                                   insertnode(&((*treeptr)->rightptr),value);
                                   }
          else {
                if(value<(*treeptr)->data){
                                         insertnode(&((*treeptr)->leftptr),value);
                                         }
                }
          }
}
               
          
     
void inorder(Treeptr treeptr)
{
     if(treeptr!=NULL){
                       inorder(treeptr->leftptr);
                       printf("%d ",treeptr->data);
                       inorder(treeptr->rightptr);
                       }
}
     
     
     
Treeptr search(Treeptr treeptr, int key)
{
     if(treeptr!=NULL){
                       if(key>treeptr->data)return search(treeptr->rightptr,key);
                       if(key<treeptr->data)return search(treeptr->leftptr,key);
                       if(key==treeptr->data){printf("tatti");return treeptr;}
                       }
     else {printf("This value doesn't exist");
           return NULL;
           }
}     
     
     
     
void delete(Treeptr *treeptr,int value)
{
     
     if((*treeptr)!=NULL){
                          Treeptr tmpptr=NULL;
                          if(value>(*treeptr)->data)delete((&(*treeptr)->rightptr),value);
                          if(value<(*treeptr)->data)delete((&(*treeptr)->leftptr),value);
                          if(value==(*treeptr)->data){
                                                                          
                                                        if((*treeptr)->leftptr==NULL&&(*treeptr)->rightptr==NULL){tmpptr=*treeptr;
                                                                                                                  *treeptr=NULL;
                                                                                                                  free(tmpptr);
                                                                                                                  printf("tatista");
                                                                                                                 }
                                                        else{   
                                                             if((*treeptr)->leftptr==NULL||(*treeptr)->rightptr==NULL){
                                                                                                                       tmpptr=*treeptr;
                                                                                                                       if((*treeptr)->rightptr!=NULL)
                                                                                                                       *treeptr=(*treeptr)->rightptr;
                                                                                                                       else
                                                                                                                       *treeptr=(*treeptr)->leftptr;
                                                                                                                       free(tmpptr);
                                                                                                                       
                                                                                                                     }
                                                                                                                     
                                                                    else{                                                 
                                                                         if((*treeptr)->leftptr!=NULL&&(*treeptr)->rightptr!=NULL){
                                                                                                                               int x=garb(&((*treeptr)->leftptr));
                                                                                                                              (*treeptr)->data=x;   
                                                                                                                             }
                                                           
                                                                                                            
                                                                         }                                  
                                                                                                           
                                                             }                                                    
                                                                                                           
                                                                                                           }                                                     
                                                                                                           
                                                                                                           
                                                                                                           
                       }
     else printf("This value doesn't exist");
     
     
}   
     
     
     
     
int garb(Treeptr *treeptr)
{
        if((*treeptr)->rightptr!=NULL){
                                      return garb(&((*treeptr)->rightptr));
                                     }
        else {
              Treeptr tmpptr=*treeptr;
              int tmp=(*treeptr)->data;
              *treeptr=(*treeptr)->leftptr;
            /*  printf("chung %d",tmp);*/
              free(tmpptr);
              return tmp;
              
              
             }
              
}



/* you cant assign one pointer to other directly.
 eg treeptr=treeptr->rightptr 
 is wrong 
 you have to do ths inirectly using middlemen as follows
 *treeptr=(*treeptr)->rightptr
 */

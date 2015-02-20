int main()
{
 int a = 9;
 int b = 37;
 
 int asteps=0;
 int bsteps=0;
 //19 9 4 2 1
 //37 18 9
 
 int control=0;
 
 control = a>b?1:2;printf("%d\n",control);
 
 while(1==1)
 {
     if(control==1){
                    while(a>b){
                               if(a%2==0)a/=2;
                               else a=(a-1)/2;
                               asteps++;
                               }
                    if(a==b) break;
                    else control=2;
                    }
                    

     if(control==2){
                    while(b>a){
                               if(b%2==0)b/=2;
                               else b=(b-1)/2;
                               bsteps++;
                               }
                    if(a==b) break; 
                    else control=1;
                    }
     
     
     }
    
printf("%d %d %d\n",a,asteps,bsteps);
    
getch();
    
}

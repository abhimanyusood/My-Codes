#include<stdio.h>
#include<conio.h>

void scancube(int red[3][3],int green[3][3],int yellow[3][3],int blue[3][3],int white[3][3],int orange[3][3]);
void R(int r[3][3],int g[3][3],int y[3][3],int b[3][3],int w[3][3],int o[3][3]);
void L(int r[3][3],int g[3][3],int y[3][3],int b[3][3],int w[3][3],int o[3][3]);
void U(int r[3][3],int g[3][3],int y[3][3],int b[3][3],int w[3][3],int o[3][3]);
void D(int r[3][3],int g[3][3],int y[3][3],int b[3][3],int w[3][3],int o[3][3]);
void F(int r[3][3],int g[3][3],int y[3][3],int b[3][3],int w[3][3],int o[3][3]);
void B(int r[3][3],int g[3][3],int y[3][3],int b[3][3],int w[3][3],int o[3][3]);
void printarray(int array[3][3]);
void copy(int r[3][3],int g[3][3],int y[3][3],int b[3][3],int w[3][3],int o[3][3],int rc[3][3],int gc[3][3],int yc[3][3],int bc[3][3],int wc[3][3],int oc[3][3]);
int  rube(int r[3][3],int g[3][3],int y[3][3],int b[3][3],int w[3][3],int o[3][3],int m,int size,int p[size],int q[size]);
int  check(int r[3][3],int g[3][3],int y[3][3],int b[3][3],int w[3][3],int o[3][3]);

int main()
{
    int red[3][3];
    int green[3][3];
    int yellow[3][3];
    int blue[3][3];
    int white[3][3];
    int orange[3][3];
    
 /*   int cred[3][3];
    int cgreen[3][3];
    int cyellow[3][3];
    int cblue[3][3];
    int cwhite[3][3];
    int corange[3][3];
   */ 
    scancube(red,green,yellow,blue,white,orange);
    
  /*  R(red,green,yellow,blue,white,orange);
    L(red,green,yellow,blue,white,orange);
    U(red,green,yellow,blue,white,orange);
    D(red,green,yellow,blue,white,orange);
    F(red,green,yellow,blue,white,orange);
    B(red,green,yellow,blue,white,orange);
    
    copy(red,green,yellow,blue,white,orange,cred,cgreen,cyellow,cblue,cwhite,corange);
    
    printarray(cred);
    printarray(cgreen);
    printarray(cyellow);
    printarray(cblue);
    printarray(cwhite);
    printarray(corange);
  
  */
    int tmp,moves=1;
    for(moves=1;moves<=40;moves++){
    int p[moves];
    int q[moves];
    for(tmp=0;tmp<moves;tmp++){p[tmp]=0;q[tmp]=0;}
    
    int z=rube(red,green,yellow,blue,white,orange,1,moves,p,q);printf("\n\nbada %d bada\n\n",z);if(z==13){ for(tmp=0;tmp<moves;tmp++)printf("\n\nchattatti%dtatti\n",p[tmp]);break;}

   
}      
    getch();
    
}


void scancube(int red[3][3],int green[3][3],int yellow[3][3],int blue[3][3],int white[3][3],int orange[3][3])
{
     printf("To read red centred face - Hold the cube such that green centre faces\ndownwards and red centre faces towards you.");
     printf("\nRead the color of each of 9 squares on red centred face sequentially \nfrom left to right starting from the top left corner.");

     int row,col;
     int tmp;
     for(row=0;row<3;row++)
     for(col=0;col<3;col++){  if(row==0&&col==0)printf("\n\n");                 
                              printf("red[%d][%d]= ",row+1,col+1);                
                              scanf("%s",&tmp);/*printf("%c\n",tmp);*/
                              char tempo=tmp;/*printf("itti%c",tempo);*/
                              if(tempo=='r'){red[row][col]=1;/*printf("tatti\n");*/}
                              if(tempo=='g')red[row][col]=2;
                              if(tempo=='y')red[row][col]=4;
                              if(tempo=='b')red[row][col]=7;
                              if(tempo=='w')red[row][col]=12;
                              if(tempo=='o')red[row][col]=20;
                              if(tempo!='r'&&tempo!='g'&&tempo!='y'&&tempo!='b'&&tempo!='w'&&tempo!='o'){printf("invalid entry\n");col--;}
                           }



     printf("\n\n\nTo read green centred face - Hold the cube such that red centre faces \nupwards and green centre faces towards you.");
     printf("\nRead the color of each of 9 squares on green centred face sequentially \nfrom left to right starting from the top left corner.");

for(row=0;row<3;row++)
     for(col=0;col<3;col++){  if(row==0&&col==0)printf("\n\n");                 
                              printf("green[%d][%d]= ",row+1,col+1);                
                              scanf("%s",&tmp);/*printf("%c\n",tmp);*/
                              char tempo=tmp;/*printf("itti%c",tempo);*/
                              if(tempo=='r'){green[row][col]=1;/*printf("tatti\n");*/}
                              if(tempo=='g')green[row][col]=2;
                              if(tempo=='y')green[row][col]=4;
                              if(tempo=='b')green[row][col]=7;
                              if(tempo=='w')green[row][col]=12;
                              if(tempo=='o')green[row][col]=20;
                              if(tempo!='r'&&tempo!='g'&&tempo!='y'&&tempo!='b'&&tempo!='w'&&tempo!='o'){printf("invalid entry\n");col--;}
                           }


     printf("\n\n\nTo read yellow centred face - Hold the cube such that red centre faces \nupwards and yellow centre faces towards you.");
     printf("\nRead the color of each of 9 squares on yellow centred face sequentially \nfrom left to right starting from the top left corner.");
                           
for(row=0;row<3;row++)
     for(col=0;col<3;col++){  if(row==0&&col==0)printf("\n\n");                 
                              printf("yellow[%d][%d]= ",row+1,col+1);                
                              scanf("%s",&tmp);/*printf("%c\n",tmp);*/
                              char tempo=tmp;/*printf("itti%c",tempo);*/
                              if(tempo=='r'){yellow[row][col]=1;/*printf("tatti\n");*/}
                              if(tempo=='g')yellow[row][col]=2;
                              if(tempo=='y')yellow[row][col]=4;
                              if(tempo=='b')yellow[row][col]=7;
                              if(tempo=='w')yellow[row][col]=12;
                              if(tempo=='o')yellow[row][col]=20;
                              if(tempo!='r'&&tempo!='g'&&tempo!='y'&&tempo!='b'&&tempo!='w'&&tempo!='o'){printf("invalid entry\n");col--;}
                           }


     printf("\n\n\nTo read blue centred face - Hold the cube such that red centre faces \nupwards and blue centre faces towards you.");
     printf("\nRead the color of each of 9 squares on blue centred face sequentially \nfrom left to right starting from the top left corner.");
                           
for(row=0;row<3;row++)
     for(col=0;col<3;col++){  if(row==0&&col==0)printf("\n\n");                 
                              printf("blue[%d][%d]= ",row+1,col+1);                
                              scanf("%s",&tmp);/*printf("%c\n",tmp);*/
                              char tempo=tmp;/*printf("itti%c",tempo);*/
                              if(tempo=='r'){blue[row][col]=1;/*printf("tatti\n");*/}
                              if(tempo=='g')blue[row][col]=2;
                              if(tempo=='y')blue[row][col]=4;
                              if(tempo=='b')blue[row][col]=7;
                              if(tempo=='w')blue[row][col]=12;
                              if(tempo=='o')blue[row][col]=20;
                              if(tempo!='r'&&tempo!='g'&&tempo!='y'&&tempo!='b'&&tempo!='w'&&tempo!='o'){printf("invalid entry\n");col--;}
                           }


     printf("\n\n\nTo read white centred face - Hold the cube such that red centre faces \nupwards and white faces towards you.");
     printf("\nRead the color of each of 9 squares on white centred face sequentially \nfrom left to right starting from the top left corner.");
                           
for(row=0;row<3;row++)
     for(col=0;col<3;col++){  if(row==0&&col==0)printf("\n\n");                 
                              printf("white[%d][%d]= ",row+1,col+1);                
                              scanf("%s",&tmp);/*printf("%c\n",tmp);*/
                              char tempo=tmp;/*printf("itti%c",tempo);*/
                              if(tempo=='r'){white[row][col]=1;/*printf("tatti\n");*/}
                              if(tempo=='g')white[row][col]=2;
                              if(tempo=='y')white[row][col]=4;
                              if(tempo=='b')white[row][col]=7;
                              if(tempo=='w')white[row][col]=12;
                              if(tempo=='o')white[row][col]=20;
                              if(tempo!='r'&&tempo!='g'&&tempo!='y'&&tempo!='b'&&tempo!='w'&&tempo!='o'){printf("invalid entry\n");col--;}
                           }


     printf("\n\n\nTo read orange centred face - Hold the cube such that green centre faces \nupwards and orange faces towards you.");
     printf("\nRead the color of each of 9 squares on orange face sequentially \nfrom left to right starting from the top left corner.");
                           
for(row=0;row<3;row++)
     for(col=0;col<3;col++){  if(row==0&&col==0)printf("\n\n");                 
                              printf("orange[%d][%d]= ",row+1,col+1);                
                              scanf("%s",&tmp);/*printf("%c\n",tmp);*/
                              char tempo=tmp;/*printf("itti%c",tempo);*/
                              if(tempo=='r'){orange[row][col]=1;/*printf("tatti\n");*/}
                              if(tempo=='g')orange[row][col]=2;
                              if(tempo=='y')orange[row][col]=4;
                              if(tempo=='b')orange[row][col]=7;
                              if(tempo=='w')orange[row][col]=12;
                              if(tempo=='o')orange[row][col]=20;
                              if(tempo!='r'&&tempo!='g'&&tempo!='y'&&tempo!='b'&&tempo!='w'&&tempo!='o'){printf("invalid entry\n");col--;}
                           }


}                   





void R(int r[3][3],int g[3][3],int y[3][3],int b[3][3],int w[3][3],int o[3][3])
{
     int g02=g[0][2];
     int g12=g[1][2];
     int g22=g[2][2];
     int o02=o[0][2];
     int o12=o[1][2];
     int o22=o[2][2];
     int b20=b[2][0];
     int b10=b[1][0];
     int b00=b[0][0];
     int r02=r[0][2];
     int r12=r[1][2];
     int r22=r[2][2];
     
     r[0][2]=g02;
     r[1][2]=g12;
     r[2][2]=g22;
     g[0][2]=o02;
     g[1][2]=o12;
     g[2][2]=o22;
     o[0][2]=b20;
     o[1][2]=b10;
     o[2][2]=b00;
     b[2][0]=r02;
     b[1][0]=r12;
     b[0][0]=r22;
     
     int y00=y[0][0];    
     int y01=y[0][1];
     int y02=y[0][2];
     int y12=y[1][2];
     int y22=y[2][2];
     int y21=y[2][1];
     int y20=y[2][0];
     int y10=y[1][0];
     
     y[0][2]=y00;
     y[1][2]=y01;
     y[2][2]=y02;
     y[2][1]=y12;
     y[2][0]=y22;
     y[1][0]=y21;
     y[0][0]=y20;
     y[0][1]=y10;
     
}     
     



void L(int r[3][3],int g[3][3],int y[3][3],int b[3][3],int w[3][3],int o[3][3])
{
     int g00=g[0][0];
     int g10=g[1][0];
     int g20=g[2][0];
     int o00=o[0][0];
     int o10=o[1][0];
     int o20=o[2][0];
     int b22=b[2][2];
     int b12=b[1][2];
     int b02=b[0][2];
     int r00=r[0][0];
     int r10=r[1][0];
     int r20=r[2][0];
     
     o[0][0]=g00;
     o[1][0]=g10;
     o[2][0]=g20;
     b[2][2]=o00;
     b[1][2]=o10;
     b[0][2]=o20;
     r[0][0]=b22;
     r[1][0]=b12;
     r[2][0]=b02;
     g[0][0]=r00;
     g[1][0]=r10;
     g[2][0]=r20;
     
     int w02=w[0][2];
     int w01=w[0][1];
     int w00=w[0][0];
     int w10=w[1][0];
     int w20=w[2][0];
     int w21=w[2][1];
     int w22=w[2][2];
     int w12=w[1][2];
     
     w[2][2]=w02;
     w[1][2]=w01;
     w[0][2]=w00;
     w[0][1]=w10;
     w[0][0]=w20;
     w[1][0]=w21;
     w[2][0]=w22;
     w[2][1]=w12;
     
}




void U(int r[3][3],int g[3][3],int y[3][3],int b[3][3],int w[3][3],int o[3][3])
{
     int g00=g[0][0];
     int g01=g[0][1];
     int g02=g[0][2];
     int y00=y[0][0];
     int y01=y[0][1];
     int y02=y[0][2];
     int b00=b[0][0];
     int b01=b[0][1];
     int b02=b[0][2];
     int w00=w[0][0];
     int w01=w[0][1];
     int w02=w[0][2];
     
     w[0][0]=g00;
     w[0][1]=g01;
     w[0][2]=g02;
     g[0][0]=y00;
     g[0][1]=y01;
     g[0][2]=y02;
     y[0][0]=b00;
     y[0][1]=b01;
     y[0][2]=b02;
     b[0][0]=w00;
     b[0][1]=w01;
     b[0][2]=w02;
     
     int r00=r[0][0];
     int r01=r[0][1];
     int r02=r[0][2];
     int r12=r[1][2];
     int r22=r[2][2];
     int r21=r[2][1];
     int r20=r[2][0];
     int r10=r[1][0];
     
     r[0][2]=r00;
     r[1][2]=r01;
     r[2][2]=r02;
     r[2][1]=r12;
     r[2][0]=r22;
     r[1][0]=r21;
     r[0][0]=r20;
     r[0][1]=r10;
     
}



void D(int r[3][3],int g[3][3],int y[3][3],int b[3][3],int w[3][3],int o[3][3])
{
     int g20=g[2][0];
     int g21=g[2][1];
     int g22=g[2][2];
     int y20=y[2][0];
     int y21=y[2][1];
     int y22=y[2][2];
     int b20=b[2][0];
     int b21=b[2][1];
     int b22=b[2][2];
     int w20=w[2][0];
     int w21=w[2][1];
     int w22=w[2][2];
     
     y[2][0]=g20;
     y[2][1]=g21;
     y[2][2]=g22;
     b[2][0]=y20;
     b[2][1]=y21;
     b[2][2]=y22;
     w[2][0]=b20;
     w[2][1]=b21;
     w[2][2]=b22;
     g[2][0]=w20;
     g[2][1]=w21;
     g[2][2]=w22;
     
     int o00=o[0][0];
     int o01=o[0][1];
     int o02=o[0][2];
     int o12=o[1][2];
     int o22=o[2][2];
     int o21=o[2][1];
     int o20=o[2][0];
     int o10=o[1][0];
     
     o[0][2]=o00;
     o[1][2]=o01;
     o[2][2]=o02;
     o[2][1]=o12;
     o[2][0]=o22;
     o[1][0]=o21;
     o[0][0]=o20;
     o[0][1]=o10;
     
}




void F(int r[3][3],int g[3][3],int y[3][3],int b[3][3],int w[3][3],int o[3][3])
{
     int r20=r[2][0];
     int r21=r[2][1];
     int r22=r[2][2];
     int y00=y[0][0];
     int y10=y[1][0];
     int y20=y[2][0];
     int o02=o[0][2];
     int o01=o[0][1];
     int o00=o[0][0];
     int w22=w[2][2];
     int w12=w[1][2];
     int w02=w[0][2];
     
     y[0][0]=r20;
     y[1][0]=r21;
     y[2][0]=r22;
     o[0][2]=y00;
     o[0][1]=y10;
     o[0][0]=y20;
     w[2][2]=o02;
     w[1][2]=o01;
     w[0][2]=o00;
     r[2][0]=w22;
     r[2][1]=w12;
     r[2][2]=w02;
     
     int g00=g[0][0];
     int g01=g[0][1];
     int g02=g[0][2];
     int g12=g[1][2];
     int g22=g[2][2];
     int g21=g[2][1];
     int g20=g[2][0];
     int g10=g[1][0];
     
     g[0][2]=g00;
     g[1][2]=g01;
     g[2][2]=g02;
     g[2][1]=g12;
     g[2][0]=g22;
     g[1][0]=g21;
     g[0][0]=g20;
     g[0][1]=g10;
     
}




void B(int r[3][3],int g[3][3],int y[3][3],int b[3][3],int w[3][3],int o[3][3])
{
     int r00=r[0][0];
     int r01=r[0][1];
     int r02=r[0][2];
     int y02=y[0][2];
     int y12=y[1][2];
     int y22=y[2][2];
     int o22=o[2][2];
     int o21=o[2][1];
     int o20=o[2][0];
     int w20=w[2][0];
     int w10=w[1][0];
     int w00=w[0][0];
     
     w[2][0]=r00;
     w[1][0]=r01;
     w[0][0]=r02;
     r[0][0]=y02;
     r[0][1]=y12;
     r[0][2]=y22;
     y[0][2]=o22;
     y[1][2]=o21;
     y[2][2]=o20;
     o[2][2]=w20;
     o[2][1]=w10;
     o[2][0]=w00;
     
     int b00=b[0][0];
     int b01=b[0][1];
     int b02=b[0][2];
     int b12=b[1][2];
     int b22=b[2][2];
     int b21=b[2][1];
     int b20=b[2][0];
     int b10=b[1][0];
     
     b[0][2]=b00;
     b[1][2]=b01;
     b[2][2]=b02;
     b[2][1]=b12;
     b[2][0]=b22;
     b[1][0]=b21;
     b[0][0]=b20;
     b[0][1]=b10;
     
}




void printarray(int array[3][3])
{    
     int i,j;
     for(i=0;i<3;i++)
     {for(j=0;j<3;j++)
     printf("%d ",array[i][j]);
     printf("\n");      
     }   
     printf("\n\n");

}




void copy(int r[3][3],int g[3][3],int y[3][3],int b[3][3],int w[3][3],int o[3][3],int rc[3][3],int gc[3][3],int yc[3][3],int bc[3][3],int wc[3][3],int oc[3][3])     
{
     int i,j;
     
     for(i=0;i<3;i++)
     for(j=0;j<3;j++)
     rc[i][j]=r[i][j];  

     for(i=0;i<3;i++)
     for(j=0;j<3;j++)
     gc[i][j]=g[i][j];  

     for(i=0;i<3;i++)
     for(j=0;j<3;j++)
     yc[i][j]=y[i][j];  

     for(i=0;i<3;i++)
     for(j=0;j<3;j++)
     bc[i][j]=b[i][j];  

     for(i=0;i<3;i++)
     for(j=0;j<3;j++)
     wc[i][j]=w[i][j];  

     for(i=0;i<3;i++)
     for(j=0;j<3;j++)
     oc[i][j]=o[i][j];  
    
}




int rube(int r[3][3],int g[3][3],int y[3][3],int b[3][3],int w[3][3],int o[3][3],int m,int size,int p[size],int q[size])
{
     if(m<=size){
                 int rc[3][3];
                 int gc[3][3];
                 int yc[3][3];
                 int bc[3][3];
                 int wc[3][3];
                 int oc[3][3];
                 
                 copy(r,g,y,b,w,o,rc,gc,yc,bc,wc,oc);
                 R(rc,gc,yc,bc,wc,oc);
                 p[m-1]=1;
                 int ch=check(rc,gc,yc,bc,wc,oc);printf("alootatti");
                 if(ch==0){printf("badboodaartatti");int z=rube(rc,gc,yc,bc,wc,oc,m+1,size,p,q);
                           if(z==13)return 13;   
                           }
                 else{printf("\np[%d]=%d",m,p[m-1]); return 13;}
            
            
            
                 copy(r,g,y,b,w,o,rc,gc,yc,bc,wc,oc);
                 L(rc,gc,yc,bc,wc,oc);
                 p[m-1]=2;
                 ch=check(rc,gc,yc,bc,wc,oc);
                 if(ch==0){int z=rube(rc,gc,yc,bc,wc,oc,m+1,size,p,q);
                           if(z==13)return 13;   
                           }
                 else{printf("\np[%d]=%d",m,p[m-1]); return 13;}
            
            
            
                 copy(r,g,y,b,w,o,rc,gc,yc,bc,wc,oc);
                 U(rc,gc,yc,bc,wc,oc);
                 p[m-1]=3;
                 ch=check(rc,gc,yc,bc,wc,oc);
                 if(ch==0){int z=rube(rc,gc,yc,bc,wc,oc,m+1,size,p,q);
                           if(z==13)return 13;   
                           }
                 else{printf("\np[%d]=%d",m,p[m-1]); return 13;}
            
            
            
                 copy(r,g,y,b,w,o,rc,gc,yc,bc,wc,oc);
                 D(rc,gc,yc,bc,wc,oc);
                 p[m-1]=4;
                 ch=check(rc,gc,yc,bc,wc,oc);
                 if(ch==0){int z=rube(rc,gc,yc,bc,wc,oc,m+1,size,p,q);
                           if(z==13)return 13;   
                           }
                 else{printf("\np[%d]=%d",m,p[m-1]); return 13;}
            
            
            
                 copy(r,g,y,b,w,o,rc,gc,yc,bc,wc,oc);
                 F(rc,gc,yc,bc,wc,oc);
                 p[m-1]=5;
                 check(rc,gc,yc,bc,wc,oc);
                 if(ch==0){int z=rube(rc,gc,yc,bc,wc,oc,m+1,size,p,q);
                           if(z==13)return 13;   
                           }
                 else{printf("\np[%d]=%d",m,p[m-1]); return 13;}
            
            
            
                 copy(r,g,y,b,w,o,rc,gc,yc,bc,wc,oc);
                 B(rc,gc,yc,bc,wc,oc);
                 p[m-1]=6;
                 ch=check(rc,gc,yc,bc,wc,oc);
                 if(ch==0){int z=rube(rc,gc,yc,bc,wc,oc,m+1,size,p,q);
                           if(z==13)return 13;   
                           }
                 else{printf("\np[%d]=%d",m,p[m-1]); return 13;}

                 }

}




int  check(int r[3][3],int g[3][3],int y[3][3],int b[3][3],int w[3][3],int o[3][3])
{
     int i,j,sr=0,sg=0,sy=0,sb=0,sw=0,so=0;
     
     for(i=0;i<3;i++)
     for(j=0;j<3;j++)
     sr=sr+r[i][j];/*printf("saditatti%d\n",sr);  */

     for(i=0;i<3;i++)
     for(j=0;j<3;j++)
     sg=sg+g[i][j];  /*printf("saditatti%d\n",sg);*/

     for(i=0;i<3;i++)
     for(j=0;j<3;j++)
     sy=sy+y[i][j];  /*printf("saditatti%d\n",sy);*/

     for(i=0;i<3;i++)
     for(j=0;j<3;j++)
     sb=sb+b[i][j];  /*printf("saditatti%d\n",sb);*/

     for(i=0;i<3;i++)
     for(j=0;j<3;j++)
     sw=sw+w[i][j];  /*printf("saditatti%d\n",sw);*/

     for(i=0;i<3;i++)
     for(j=0;j<3;j++)
     so=so+o[i][j];/*printf("saditatti%d\n",so);*/
     
     if(sr==9&&sg==18&&sy==36&&sb==63&&sw==108&&so==180){/*printf("saditatti");*/return 1;}
     else return 0;
     
}       
     


     

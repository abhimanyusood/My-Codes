import java.util.*;

public class GlobalMembersSudokuSolver
{
    public static void scansudoku(int[][][] a)
    {
         int r;
         int c;
         int t;
         int n = 0;

         for(r = 0;r<9;r++)
     {
         for(c = 0;c<9;c++)
     {

         System.out.printf("a[%d][%d]= ",r+1,c+1);
         scanf("%d", t);
         if(a[r][c][t] == 0&&a[r][c][0]!=0||t<0||t>9)
         {
             System.out.print("Invalid entry.\n");
             n = 0;
             c--;
         }
         else
     {
             a[r][c][0] = t;
     }
         GlobalMembersSudokuSolver.bakline(a, r, c, a[r][c][0]);
     }
         system("cls");
         System.out.print(" \t\t              SUDOKU SOLVER\n\n\n");

       //Tangible multiline preserve/*  if(1<=a[r][c][0]&&a[r][c][0]<=9)bakline(a,r,c,a[r][c][0]);
       //Tangible multiline preserve  else {  printf("\t\t Entered value must lie between 1 to 9");c--;}}
       //Tangible multiline preserve */
    }
    public static void initializecube(int[][][] a)
    {
         int i;
         int j;
         int k;

         for(i = 0;i<9;i++)
     {
         for(j = 0;j<9;j++)
     {
         for(k = 1;k<=9;k++)
     {
         a[i][j][k] = 1;
     }
     }
     }

    }
    public static void bakline(int[][][] a, int i, int j, int z)
    {
         int row;
         int col;
         int k;
         int r;
         int c;
         int d;

         if(1<=a[i][j][0]&&a[i][j][0]<=9)
         {
             for(k = 1;k<=9;k++)
         {
                 a[i][j][k] = 0;
         }

         for(col = 0;col<9;col++)
     {
             a[i][col][z] = 0;
     }

         for(row = 0;row<9;row++)
     {
             a[row][j][z] = 0;
     }

         if(0<=i&&i<=2&&0<=j&&j<=2)
     {
             d = 1;
     }
         if(0<=i&&i<=2&&3<=j&&j<=5)
     {
             d = 2;
     }
         if(0<=i&&i<=2&&6<=j&&j<=8)
     {
             d = 3;
     }
         if(3<=i&&i<=5&&0<=j&&j<=2)
     {
             d = 4;
     }
         if(3<=i&&i<=5&&3<=j&&j<=5)
     {
             d = 5;
     }
         if(3<=i&&i<=5&&6<=j&&j<=8)
     {
             d = 6;
     }
         if(6<=i&&i<=8&&0<=j&&j<=2)
     {
             d = 7;
     }
         if(6<=i&&i<=8&&3<=j&&j<=5)
     {
             d = 8;
     }
         if(6<=i&&i<=8&&6<=j&&j<=8)
     {
             d = 9;
     }

         switch(d)
         {
                   case 1:
                   for(row = 0;row<=2;row++)
               {
                       for(col = 0;col<=2;col++)
                   {
                           a[row][col][z] = 0;
                   }
               }
                   break;

                   case 2:
                   for(row = 0;row<=2;row++)
               {
                       for(col = 3;col<=5;col++)
                   {
                           a[row][col][z] = 0;
                   }
               }
                   break;

                   case 3:
                   for(row = 0;row<=2;row++)
               {
                       for(col = 6;col<=8;col++)
                   {
                           a[row][col][z] = 0;
                   }
               }
                   break;

                   case 4:
                   for(row = 3;row<=5;row++)
               {
                       for(col = 0;col<=2;col++)
                   {
                           a[row][col][z] = 0;
                   }
               }
                   break;

                   case 5:
                   for(row = 3;row<=5;row++)
               {
                       for(col = 3;col<=5;col++)
                   {
                           a[row][col][z] = 0;
                   }
               }
                   break;

                   case 6:
                   for(row = 3;row<=5;row++)
               {
                       for(col = 6;col<=8;col++)
                   {
                           a[row][col][z] = 0;
                   }
               }
                   break;

                   case 7:
                   for(row = 6;row<=8;row++)
               {
                       for(col = 0;col<=2;col++)
                   {
                           a[row][col][z] = 0;
                   }
               }
                   break;

                   case 8:
                   for(row = 6;row<=8;row++)
               {
                       for(col = 3;col<=5;col++)
                   {
                           a[row][col][z] = 0;
                   }
               }
                   break;

                   case 9:
                   for(row = 6;row<=8;row++)
               {
                       for(col = 6;col<=8;col++)
                   {
                           a[row][col][z] = 0;
                   }
               }
                   break;

                   }
         }
    }
    public static void pan(int[][][] a)
    {
         int oops = 1;
     while(oops!=0)
     {
         oops = 0;


         int row;
         int col;
         int i;
         int j;
         int k;
         int sum = 0;
         int o;

    for(k = 1;k<=9;k++)
{
        for(row = 0;row<=2;row++)
    {
            for(col = 0;col<=2;col++)
        {
                                                                         o = 0;
                                                                         sum = sum+a[row][col][k];
                                                                         if(row == 2&&col == 2)
                                                                         {
                                                                                            if(sum == 1)
                                                                                            {
                                                                                                       for(i = 0;i<=2;i++)
                                                                                                       {
                                                                                                                         for(j = 0;j<=2;j++)
                                                                                                                         {
                                                                                                                                           if(a[i][j][k] == 1) //printf("%d %d",i,j);
                                                                                                                                           {
    o = 2;
    break;
                                                                                                                                           }
                                                                                                                                           }
                                                                                                                         if(o == 2)
                                                                                                                             break;
                                                                                                                         }
                                                                                                        a[i][j][0] = k; //printf("%d %d %d %d",i,j,k,sum);
                                                                                                        GlobalMembersSudokuSolver.bakline(a, i, j, k);
                                                                                                        oops++;
                                                                                                        }
                                                                                             sum = 0;
                                                                                             } //printf("sum=%d",sum);
                                                                         }




    for(k = 1;k<=9;k++)
{
        for(row = 0;row<=2;row++)
    {
            for(col = 3;col<=5;col++)
        {
                                                                         o = 0;
                                                                         sum = sum+a[row][col][k];
                                                                         if(row == 2&&col == 5)
                                                                         {
                                                                                            if(sum == 1)
                                                                                            {
                                                                                                       for(i = 0;i<=2;i++)
                                                                                                       {
                                                                                                                         for(j = 3;j<=5;j++)
                                                                                                                         {
                                                                                                                                           if(a[i][j][k] == 1) //printf("%d %d",i,j);
                                                                                                                                           {
    o = 2;
    break;
                                                                                                                                           }
                                                                                                                                           }
                                                                                                                         if(o == 2)
                                                                                                                             break;
                                                                                                                         }
                                                                                                        a[i][j][0] = k; //printf("%d %d %d %d",i,j,k,sum);
                                                                                                        GlobalMembersSudokuSolver.bakline(a, i, j, k);
                                                                                                        oops++;
                                                                                                        }
                                                                                             sum = 0;
                                                                                             } //printf("sum=%d",sum);
                                                                         }




    for(k = 1;k<=9;k++)
{
        for(row = 0;row<=2;row++)
    {
            for(col = 6;col<=8;col++)
        {
                                                                         o = 0;
                                                                         sum = sum+a[row][col][k];
                                                                         if(row == 2&&col == 8)
                                                                         {
                                                                                            if(sum == 1)
                                                                                            {
                                                                                                       for(i = 0;i<=2;i++)
                                                                                                       {
                                                                                                                         for(j = 6;j<=8;j++)
                                                                                                                         {
                                                                                                                                           if(a[i][j][k] == 1) //printf("%d %d",i,j);
                                                                                                                                           {
    o = 2;
    break;
                                                                                                                                           }
                                                                                                                                           }
                                                                                                                         if(o == 2)
                                                                                                                             break;
                                                                                                                         }
                                                                                                        a[i][j][0] = k; //printf("%d %d %d %d",i,j,k,sum);
                                                                                                        GlobalMembersSudokuSolver.bakline(a, i, j, k);
                                                                                                        oops++;
                                                                                                        }
                                                                                             sum = 0;
                                                                                             } //printf("sum=%d",sum);
                                                                         }




    for(k = 1;k<=9;k++)
{
        for(row = 3;row<=5;row++)
    {
            for(col = 0;col<=2;col++)
        {
                                                                         o = 0;
                                                                         sum = sum+a[row][col][k];
                                                                         if(row == 5&&col == 2)
                                                                         {
                                                                                            if(sum == 1)
                                                                                            {
                                                                                                       for(i = 3;i<=5;i++)
                                                                                                       {
                                                                                                                         for(j = 0;j<=2;j++)
                                                                                                                         {
                                                                                                                                           if(a[i][j][k] == 1) //printf("%d %d",i,j);
                                                                                                                                           {
    o = 2;
    break;
                                                                                                                                           }
                                                                                                                                           }
                                                                                                                         if(o == 2)
                                                                                                                             break;
                                                                                                                         }
                                                                                                        a[i][j][0] = k; //printf("%d %d %d %d",i,j,k,sum);
                                                                                                        GlobalMembersSudokuSolver.bakline(a, i, j, k);
                                                                                                        oops++;
                                                                                                        }
                                                                                             sum = 0;
                                                                                             } //printf("sum=%d",sum);
                                                                         }




    for(k = 1;k<=9;k++)
{
        for(row = 3;row<=5;row++)
    {
            for(col = 3;col<=5;col++)
        {
                                                                         o = 0;
                                                                         sum = sum+a[row][col][k];
                                                                         if(row == 5&&col == 5)
                                                                         {
                                                                                            if(sum == 1)
                                                                                            {
                                                                                                       for(i = 3;i<=5;i++)
                                                                                                       {
                                                                                                                         for(j = 3;j<=5;j++)
                                                                                                                         {
                                                                                                                                           if(a[i][j][k] == 1) //printf("%d %d",i,j);
                                                                                                                                           {
    o = 2;
    break;
                                                                                                                                           }
                                                                                                                                           }
                                                                                                                         if(o == 2)
                                                                                                                             break;
                                                                                                                         }
                                                                                                        a[i][j][0] = k; //printf("%d %d %d %d",i,j,k,sum);
                                                                                                        GlobalMembersSudokuSolver.bakline(a, i, j, k);
                                                                                                        oops++;
                                                                                                        }
                                                                                             sum = 0;
                                                                                             } //printf("sum=%d",sum);
                                                                         }




    for(k = 1;k<=9;k++)
{
        for(row = 3;row<=5;row++)
    {
            for(col = 6;col<=8;col++)
        {
                                                                         o = 0;
                                                                         sum = sum+a[row][col][k];
                                                                         if(row == 5&&col == 8)
                                                                         {
                                                                                            if(sum == 1)
                                                                                            {
                                                                                                       for(i = 3;i<=5;i++)
                                                                                                       {
                                                                                                                         for(j = 6;j<=8;j++)
                                                                                                                         {
                                                                                                                                           if(a[i][j][k] == 1) //printf("%d %d",i,j);
                                                                                                                                           {
    o = 2;
    break;
                                                                                                                                           }
                                                                                                                                           }
                                                                                                                         if(o == 2)
                                                                                                                             break;
                                                                                                                         }
                                                                                                        a[i][j][0] = k; //printf("%d %d %d %d",i,j,k,sum);
                                                                                                        GlobalMembersSudokuSolver.bakline(a, i, j, k);
                                                                                                        oops++;
                                                                                                        }
                                                                                             sum = 0;
                                                                                             } //printf("sum=%d",sum);
                                                                         }




    for(k = 1;k<=9;k++)
{
        for(row = 6;row<=8;row++)
    {
            for(col = 0;col<=2;col++)
        {
                                                                         o = 0;
                                                                         sum = sum+a[row][col][k];
                                                                         if(row == 8&&col == 2)
                                                                         {
                                                                                            if(sum == 1)
                                                                                            {
                                                                                                       for(i = 6;i<=8;i++)
                                                                                                       {
                                                                                                                         for(j = 0;j<=2;j++)
                                                                                                                         {
                                                                                                                                           if(a[i][j][k] == 1) //printf("%d %d",i,j);
                                                                                                                                           {
    o = 2;
    break;
                                                                                                                                           }
                                                                                                                                           }
                                                                                                                         if(o == 2)
                                                                                                                             break;
                                                                                                                         }
                                                                                                        a[i][j][0] = k; //printf("%d %d %d %d",i,j,k,sum);
                                                                                                        GlobalMembersSudokuSolver.bakline(a, i, j, k);
                                                                                                        oops++;
                                                                                                        }
                                                                                             sum = 0;
                                                                                             } //printf("sum=%d",sum);
                                                                         }




    for(k = 1;k<=9;k++)
{
        for(row = 6;row<=8;row++)
    {
            for(col = 3;col<=5;col++)
        {
                                                                         o = 0;
                                                                         sum = sum+a[row][col][k];
                                                                         if(row == 8&&col == 5)
                                                                         {
                                                                                            if(sum == 1)
                                                                                            {
                                                                                                       for(i = 6;i<=8;i++)
                                                                                                       {
                                                                                                                         for(j = 3;j<=5;j++)
                                                                                                                         {
                                                                                                                                           if(a[i][j][k] == 1) //printf("%d %d",i,j);
                                                                                                                                           {
    o = 2;
    break;
                                                                                                                                           }
                                                                                                                                           }
                                                                                                                         if(o == 2)
                                                                                                                             break;
                                                                                                                         }
                                                                                                        a[i][j][0] = k; //printf("%d %d %d %d",i,j,k,sum);
                                                                                                        GlobalMembersSudokuSolver.bakline(a, i, j, k);
                                                                                                        oops++;
                                                                                                        }
                                                                                             sum = 0;
                                                                                             } //printf("sum=%d",sum);
                                                                         }




    for(k = 1;k<=9;k++)
{
        for(row = 6;row<=8;row++)
    {
            for(col = 6;col<=8;col++)
        {
                                                                         o = 0;
                                                                         sum = sum+a[row][col][k];
                                                                         if(row == 8&&col == 8)
                                                                         {
                                                                                            if(sum == 1)
                                                                                            {
                                                                                                       for(i = 6;i<=8;i++)
                                                                                                       {
                                                                                                                         for(j = 6;j<=8;j++)
                                                                                                                         {
                                                                                                                                           if(a[i][j][k] == 1) //printf("%d %d",i,j);
                                                                                                                                           {
    o = 2;
    break;
                                                                                                                                           }
                                                                                                                                           }
                                                                                                                         if(o == 2)
                                                                                                                             break;
                                                                                                                         }
                                                                                                        a[i][j][0] = k; //printf("%d %d %d %d",i,j,k,sum);
                                                                                                        GlobalMembersSudokuSolver.bakline(a, i, j, k);
                                                                                                        oops++;
                                                                                                        }
                                                                                             sum = 0;
                                                                                             } //printf("sum=%d",sum);
                                                                         }







    int tot = 0;
    int kk;
    int p;
    for(row = 0;row<=2;row++)
{
        for(col = 0;col<=2;col++)
    {
            for(k = 1;k<=9;k++)
        {
                                                                    tot = tot+a[row][col][k];
                                                                    if(k == 9)
                                                                    {
                                                                             if(tot == 1)
                                                                             {
                                                                                        for(kk = 1;kk<=9;kk++)
                                                                                        {
                                                                                                             if(a[row][col][kk] == 1)
                                                                                                             {
                                                                                                                 break;
                                                                                                             }
                                                                                                             }


                                                                             a[row][col][0] = kk;
                                                                             GlobalMembersSudokuSolver.bakline(a, row, col, kk);
                                                                             oops++;
                                                                             }
                                                                     tot = 0;
                                                                     }
        }




    for(row = 0;row<=2;row++)
{
        for(col = 3;col<=5;col++)
    {
            for(k = 1;k<=9;k++)
        {
                                                                    tot = tot+a[row][col][k];
                                                                    if(k == 9)
                                                                    {
                                                                             if(tot == 1)
                                                                             {
                                                                                        for(kk = 1;kk<=9;kk++)
                                                                                        {
                                                                                                             if(a[row][col][kk] == 1)
                                                                                                             {
                                                                                                                 p = 2;
                                                                                                                 break;
                                                                                                             }
                                                                                                             }


                                                                             a[row][col][0] = kk;
                                                                             GlobalMembersSudokuSolver.bakline(a, row, col, kk);
                                                                             oops++;
                                                                             }

                                                                     tot = 0;
                                                                     }
        }




    for(row = 0;row<=2;row++)
{
        for(col = 6;col<=8;col++)
    {
            for(k = 1;k<=9;k++)
        {
                                                                    tot = tot+a[row][col][k];
                                                                    if(k == 9)
                                                                    {
                                                                             if(tot == 1)
                                                                             {
                                                                                        for(kk = 1;kk<=9;kk++)
                                                                                        {
                                                                                                             if(a[row][col][kk] == 1)
                                                                                                             {
                                                                                                                 p = 2;
                                                                                                                 break;
                                                                                                             }
                                                                                                             }


                                                                             a[row][col][0] = kk;
                                                                             GlobalMembersSudokuSolver.bakline(a, row, col, kk);
                                                                             oops++;
                                                                             }

                                                                     tot = 0;
                                                                     }
        }




    for(row = 3;row<=5;row++)
{
        for(col = 0;col<=2;col++)
    {
            for(k = 1;k<=9;k++)
        {
                                                                    tot = tot+a[row][col][k];
                                                                    if(k == 9)
                                                                    {
                                                                             if(tot == 1)
                                                                             {
                                                                                        for(kk = 1;kk<=9;kk++)
                                                                                        {
                                                                                                             if(a[row][col][kk] == 1)
                                                                                                             {
                                                                                                                 p = 2;
                                                                                                                 break;
                                                                                                             }
                                                                                                             }


                                                                             a[row][col][0] = kk;
                                                                             GlobalMembersSudokuSolver.bakline(a, row, col, kk);
                                                                             oops++;
                                                                             }

                                                                     tot = 0;
                                                                     }
        }




    for(row = 3;row<=5;row++)
{
        for(col = 3;col<=5;col++)
    {
            for(k = 1;k<=9;k++)
        {
                                                                    tot = tot+a[row][col][k];
                                                                    if(k == 9)
                                                                    {
                                                                             if(tot == 1)
                                                                             {
                                                                                        for(kk = 1;kk<=9;kk++)
                                                                                        {
                                                                                                             if(a[row][col][kk] == 1)
                                                                                                             {
                                                                                                                 p = 2;
                                                                                                                 break;
                                                                                                             }
                                                                                                             }


                                                                             a[row][col][0] = kk;
                                                                             GlobalMembersSudokuSolver.bakline(a, row, col, kk);
                                                                             oops++;
                                                                             }

                                                                     tot = 0;
                                                                     }
        }




    for(row = 3;row<=5;row++)
{
        for(col = 6;col<=8;col++)
    {
            for(k = 1;k<=9;k++)
        {
                                                                    tot = tot+a[row][col][k];
                                                                    if(k == 9)
                                                                    {
                                                                             if(tot == 1)
                                                                             {
                                                                                        for(kk = 1;kk<=9;kk++)
                                                                                        {
                                                                                                             if(a[row][col][kk] == 1)
                                                                                                             {
                                                                                                                 p = 2;
                                                                                                                 break;
                                                                                                             }
                                                                                                             }


                                                                             a[row][col][0] = kk;
                                                                             GlobalMembersSudokuSolver.bakline(a, row, col, kk);
                                                                             oops++;
                                                                             }

                                                                     tot = 0;
                                                                     }
        }




    for(row = 6;row<=8;row++)
{
        for(col = 0;col<=2;col++)
    {
            for(k = 1;k<=9;k++)
        {
                                                                    tot = tot+a[row][col][k];
                                                                    if(k == 9)
                                                                    {
                                                                             if(tot == 1)
                                                                             {
                                                                                        for(kk = 1;kk<=9;kk++)
                                                                                        {
                                                                                                             if(a[row][col][kk] == 1)
                                                                                                             {
                                                                                                                 p = 2;
                                                                                                                 break;
                                                                                                             }
                                                                                                             }


                                                                             a[row][col][0] = kk;
                                                                             GlobalMembersSudokuSolver.bakline(a, row, col, kk);
                                                                             oops++;
                                                                             }

                                                                     tot = 0;
                                                                     }
        }




    for(row = 6;row<=8;row++)
{
        for(col = 3;col<=5;col++)
    {
            for(k = 1;k<=9;k++)
        {
                                                                    tot = tot+a[row][col][k];
                                                                    if(k == 9)
                                                                    {
                                                                             if(tot == 1)
                                                                             {
                                                                                        for(kk = 1;kk<=9;kk++)
                                                                                        {
                                                                                                             if(a[row][col][kk] == 1)
                                                                                                             {
                                                                                                                 p = 2;
                                                                                                                 break;
                                                                                                             }
                                                                                                             }


                                                                             a[row][col][0] = kk;
                                                                             GlobalMembersSudokuSolver.bakline(a, row, col, kk);
                                                                             oops++;
                                                                             }

                                                                     tot = 0;
                                                                     }
        }




    for(row = 6;row<=8;row++)
{
        for(col = 6;col<=8;col++)
    {
            for(k = 1;k<=9;k++)
        {
                                                                   tot = tot+a[row][col][k];
                                                                    if(k == 9)
                                                                    {
                                                                             if(tot == 1)
                                                                             {
                                                                                        for(kk = 1;kk<=9;kk++)
                                                                                        {
                                                                                                             if(a[row][col][kk] == 1)
                                                                                                             {
                                                                                                                 p = 2;
                                                                                                                 break;
                                                                                                             }
                                                                                                             }


                                                                             a[row][col][0] = kk;
                                                                             GlobalMembersSudokuSolver.bakline(a, row, col, kk);
                                                                             oops++;
                                                                             }

                                                                     tot = 0;
                                                                     }
        }



    }



    }
    public static void print(int[][][] a)
    {
         System.out.printf("\n\nflag\n%d\n%d\n%d\n%d\n%d%d\n%d\n%d\n%d\n\n",a[0][8][0],a[8][2][0],a[4][4][0],a[4][8][0],a[8][0][0],a[8][4][0],a[8][8][0],a[0][3][0],a[0][0][0]);

    }
    public static void printarray(int[][][] a)
    {
         int r;
         int c;

         for(r = 0;r<9;r++)
         {
         if(r == 0)
     {
             System.out.printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n%c           %c           %c           %c\n",218,196,196,196,196,196,196,196,196,196,196,196,194,196,196,196,196,196,196,196,196,196,196,196,194,196,196,196,196,196,196,196,196,196,196,196,191,179,179,179,179);
     }
         for(c = 0;c<9;c++)
         {
         if(c == 3||c == 6)
     {
             System.out.printf("%c  ",179);
     }
         if(c == 0)
     {
             System.out.printf("%c  ",179);
     }
         if(a[r][c][0] == 0)
     {
             System.out.print("_  ");
     }
         else
     {
         System.out.printf("%d  ",a[r][c][0]);
     }
         }
         if(r == 2||r == 5)
     {
             System.out.printf("%c\n%c           %c           %c           %c\n%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",179,179,179,179,179,195,196,196,196,196,196,196,196,196,196,196,196,197,196,196,196,196,196,196,196,196,196,196,196,197,196,196,196,196,196,196,196,196,196,196,196);
     }
         System.out.printf("%c\n%c           %c           %c           %c\n",179,179,179,179,179);
         }
         System.out.printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n\n",192,196,196,196,196,196,196,196,196,196,196,196,193,196,196,196,196,196,196,196,196,196,196,196,193,196,196,196,196,196,196,196,196,196,196,196,217);


    }
    public static int leash(int[][][][][] a, int m, int n)
    { //if(m==2){copybts(v,a,m-1,1);printf("tatti\n%d\n",a[8][7][0][m][0]);printarray(v);}
        int[][][] v = new int[9][9][10];
        int i;
        GlobalMembersSudokuSolver.copym(a, m-1, m, 0, n); //if(m==2){copybts(v,a,m,0);printf("tatti\n%d\n",a[8][7][0][m][0]);printarray(v);}

         int[][] b = new int[9][9];
         int r;
         int c;
         int k;
         int tot = 0;
         for(r = 0;r<9;r++)
     {
         for(c = 0;c<9;c++)
     {
         for(k = 1;k<10;k++)
     {
         tot = tot+a[r][c][k][m][0];
                           if(k == 9)
                           {
                               b[r][c] = tot;
                                    tot = 0;
                                    }
                           }
      //Tangible multiline preserve/*  printf("\n\n\n\nm=%d\n",m);
      //Tangible multiline preserve for(r=0;r<9;r++){
      //Tangible multiline preserve   for(c=0;c<9;c++)
      //Tangible multiline preserve   printf("%d ",b[r][c]);
      //Tangible multiline preserve   printf("\n");}
      //Tangible multiline preserve   printf("\n\n");
      //Tangible multiline preserve  */

        int x;
        int y;
        int z = 9;
        for(r = 0;r<9;r++)
    {
        for(c = 0;c<9;c++)
    {
        if(0<b[r][c]&&b[r][c]<z)
    {
        z = b[r][c];
        x = r;
        y = c;
    }

       //Tangible multiline preserve/* printf("\n\nz%dz\n\n",z); */




     //Tangible multiline preserve/*   int x,y,g;
     //Tangible multiline preserve
     //Tangible multiline preserve   for(r=0;r<9;r++){
     //Tangible multiline preserve   for(c=0;c<9;c++){if(b[r][c]==z){x=r;y=c; g=99;break;}}
     //Tangible multiline preserve
     //Tangible multiline preserve                if(g==99)break;}
    //Tangible multiline preserve*/
    //Tangible multiline preserve/*    printf("jio%dhhjjh %dhjkhjk\n",r,c);*/



      int[] ch = new int[z];
      i = 1;
      for(k = 1;k<=9;k++)
  {
      if(a[x][y][k][m][0] == 1) //printf("/n%d \n",k);
    {
        ch[i] = k;
    i++;
    }



        int d1;
        int d2;
        int d;
        for(k = 1;k<=z;k++)
        {
                            d1 = (tangible.RandomNumbers.nextNumber()%z)+1;
                            d2 = (tangible.RandomNumbers.nextNumber()%z)+1;
                            c = ch[d1];
                            ch[d1] = ch[d2];
                            ch[d2] = c;
                            }

      //Tangible multiline preserve/* for(k=1;k<=z;k++)
      //Tangible multiline preserve{printf("%d \n",ch[k]);}
      //Tangible multiline preserve  */

     //Tangible multiline preserve/*int v[9][9][10];
     //Tangible multiline preserve*/
     for(i = 1;i<=z;i++)
     {
                       GlobalMembersSudokuSolver.copyn(a, m, i, 0);
                       a[x][y][0][m][i] = ch[i]; //printf("\nchewingum%d\n",a[x][y][0][m][i]);
                       GlobalMembersSudokuSolver.copybts(v, a, m, i);
                       GlobalMembersSudokuSolver.bakline(v, x, y, ch[i]);

                       GlobalMembersSudokuSolver.pan(v); //if(m==2){printf("tatti\n");printarray(v);}
                       GlobalMembersSudokuSolver.copystb(v, a, m, i);
                       int u = GlobalMembersSudokuSolver.check(v); //printf("\n%d %d %d \n",i,x,y);if(m==1){copybts(v,a,m,i);printf("toooooatti\n");printarray(v);}
                       if(u == 2)
                       {
                           int l = GlobalMembersSudokuSolver.leash(a, m+1, i);
                                    if(l == 13)
                                {
                                        return 13;
                                }
                                    }
                       if(u == 1) //printf("batch\n");
                       {
    System.out.print("\n\n\nSolved sudoku \n\n");
    GlobalMembersSudokuSolver.printarray(v);
    return 13;
                       }

                                }

    }
    public static void copystb(int[][][] a, int[][][][][] b, int m, int n)
    {
         int r;
         int c;
         int k;

         for(r = 0;r<9;r++)
     {
         for(c = 0;c<9;c++)
     {
         for(k = 0;k<10;k++)
     {
                           b[r][c][k][m][n] = a[r][c][k];
                           }

      //Tangible multiline preserve/*     for(r=0;r<9;r++){
      //Tangible multiline preserve   for(c=0;c<9;c++)
      //Tangible multiline preserve   printf("%d ",b[r][c][0][m][n]);
      //Tangible multiline preserve   printf("\n");}
      //Tangible multiline preserve   printf("\n\n");
      //Tangible multiline preserve  */
    }
    public static void copybts(int[][][] a, int[][][][][] b, int m, int n)
    {
         int r;
         int c;
         int k;

         for(r = 0;r<9;r++)
     {
         for(c = 0;c<9;c++)
     {
         for(k = 0;k<10;k++)
     {
                           a[r][c][k] = b[r][c][k][m][n];
                           }


    }
    public static void copym(int[][][][][] a, int m1, int m2, int n1, int n2)
    {
         int r;
         int c;
         int k;

         for(r = 0;r<9;r++)
     {
         for(c = 0;c<9;c++)
     {
         for(k = 0;k<10;k++)
     {
                          a[r][c][k][m2][n1] = a[r][c][k][m1][n2];
                           }

    //Tangible multiline preserve/*     for(r=0;r<9;r++){
    //Tangible multiline preserve     for(c=0;c<9;c++)
    //Tangible multiline preserve     printf("%d ",a[r][c][0][m1][0]);
    //Tangible multiline preserve     printf("\n");}
    //Tangible multiline preserve     printf("\n\n");
    //Tangible multiline preserve*/

    }
    public static void copyn(int[][][][][] a, int m, int n1, int n2)
    {
         int r;
         int c;
         int k;

         for(r = 0;r<9;r++)
     {
         for(c = 0;c<9;c++)
     {
         for(k = 0;k<10;k++)
     {
                           a[r][c][k][m][n1] = a[r][c][k][m][n2];
                           }

    }
    public static int check(int[][][] v)
    {
        int row;
        int col;
        int k;
        int tot = 0;
        int o;
        for(row = 0;row<=8;row++)
        {
            for(col = 0;col<=8;col++)
            {
                for(k = 0;k<=9;k++)
                {
                    o = 0;
                                                                    tot = tot+v[row][col][k];
                                                                    if(k == 9)
                                                                    {
                                                                             if(tot == 0) //printf("\nalootatti%d %d\n",row,col);
                                                                             {
                                                                                 o = 9;
    break;
                                                                             }
                                                                             else
                                                                         {
                                                                                 tot = 0;
                                                                         }
                                                                             }
                                                                         }
                                                                         if(o == 9)
                                                                             break;
            }
            if(o == 9)
                break;
        }


        if(o == 9)
    {
            return 0;
    }
        else
        {

         int sum = 0;
         for(row = 0;row<=8;row++)
     {
             for(col = 0;col<=8;col++)
         {
                                                          sum = sum+v[row][col][0];
                                                          }


         if(sum == 405)
     {
             return 1;
     }
         else
         {
             System.out.print("");
             return 2;
         }
        }


    }
    public static void dev()
    {
          System.out.print("\n\n\n\nTHANK YOU\n\n\n\n\n\n\t\t\t\t\t\t\tdeveloped by -\n\t\t\t\t\t\t\tabhimanyu sood");
    }
    public static void welcome()
    {
         System.out.print(" \t\t              SUDOKU SOLVER\n\n\n");
         System.out.print("WELCOME \n\n\n\n");

    }

    public static int Main()
    {
        GlobalMembersSudokuSolver.welcome();

        int[][][] a = new int[9][9][10];
        GlobalMembersSudokuSolver.initializecube(a); //Tangible multiline preserve/*print(a);a[0][6][0]=4;bakline(a,0,6,4);
    //Tangible multiline preserve                               a[4][7][0]=4;bakline(a,4,7,4);
    //Tangible multiline preserve                               a[6][0][0]=4;bakline(a,6,0,4);
    //Tangible multiline preserve                               a[7][5][0]=4;bakline(a,7,5,4);                           /*   print(a);*/

                               //Tangible multiline preserve/*    a[8][6][0]=6;bakline(a,8,6,6);
                               //Tangible multiline preserve    a[4][7][0]=6;bakline(a,4,7,6);
                               //Tangible multiline preserve    a[1][3][0]=6;bakline(a,1,3,6);
                               //Tangible multiline preserve    a[2][0][0]=6;bakline(a,2,0,6);  
                               //Tangible multiline preserve    
                               //Tangible multiline preserve    a[6][0][0]=1;bakline(a,6,0,1);
                               //Tangible multiline preserve    a[6][1][0]=2;bakline(a,6,1,2);
                               //Tangible multiline preserve    a[6][2][0]=3;bakline(a,6,2,3);
                               //Tangible multiline preserve    a[7][0][0]=4;bakline(a,7,0,4);  
                               //Tangible multiline preserve    a[7][1][0]=5;bakline(a,7,1,5);
                               //Tangible multiline preserve    a[7][2][0]=6;bakline(a,7,2,6);
                               //Tangible multiline preserve    a[8][0][0]=7;bakline(a,8,0,7);
                               //Tangible multiline preserve    
                               //Tangible multiline preserve    a[2][1][0]=9;bakline(a,2,2,9);
                               //Tangible multiline preserve    
                               //Tangible multiline preserve    
                               //Tangible multiline preserve    
                               //Tangible multiline preserve    a[6][3][0]=1;bakline(a,6,3,1);
                               //Tangible multiline preserve    a[6][4][0]=2;bakline(a,6,4,2);
                               //Tangible multiline preserve    a[6][5][0]=3;bakline(a,6,5,3);  
                               //Tangible multiline preserve    a[7][3][0]=4;bakline(a,7,3,4);
                               //Tangible multiline preserve    a[7][4][0]=5;bakline(a,7,4,5);
                               //Tangible multiline preserve    a[7][5][0]=6;bakline(a,7,5,6);
                               //Tangible multiline preserve    a[8][3][0]=7;bakline(a,8,3,7);
                               //Tangible multiline preserve    a[8][4][0]=8;bakline(a,8,4,8);
                               //Tangible multiline preserve    
                               //Tangible multiline preserve    
                               //Tangible multiline preserve    a[6][6][0]=1;bakline(a,6,6,1);
                               //Tangible multiline preserve    a[6][7][0]=2;bakline(a,6,7,2);
                               //Tangible multiline preserve    a[6][8][0]=3;bakline(a,6,8,3);
                               //Tangible multiline preserve    a[7][6][0]=4;bakline(a,7,6,4);  
                               //Tangible multiline preserve    a[7][7][0]=5;bakline(a,7,7,5);
                               //Tangible multiline preserve    a[7][8][0]=6;bakline(a,7,8,6);
                               //Tangible multiline preserve    a[8][6][0]=7;bakline(a,8,6,7);
                               //Tangible multiline preserve    a[8][7][0]=8;bakline(a,8,7,8);
                               //Tangible multiline preserve    a[8][8][0]=9;bakline(a,8,8,9);*/
                      //Tangible multiline preserve/*             
                      //Tangible multiline preserve             a[0][3][0]=9;bakline(a,0,3,9);
                      //Tangible multiline preserve             a[0][5][0]=8;bakline(a,0,5,8);
                      //Tangible multiline preserve             a[0][6][0]=4;bakline(a,0,6,4);
                      //Tangible multiline preserve             a[1][0][0]=3;bakline(a,1,0,3);  
                      //Tangible multiline preserve             a[1][5][0]=2;bakline(a,1,5,2);
                      //Tangible multiline preserve             a[1][7][0]=5;bakline(a,1,7,5);
                      //Tangible multiline preserve             a[2][9][0]=6;bakline(a,2,9,6);
                      //Tangible multiline preserve             a[2][7][0]=9;bakline(a,2,7,9);
                      //Tangible multiline preserve             a[2][8][0]=3;bakline(a,2,8,3);
                      //Tangible multiline preserve             a[3][0][0]=1;bakline(a,3,0,1);
                      //Tangible multiline preserve             a[3][3][0]=8;bakline(a,3,3,8);
                      //Tangible multiline preserve             a[3][5][0]=9;bakline(a,3,5,9);
                      //Tangible multiline preserve             a[3][8][0]=6;bakline(a,3,8,6);  
                      //Tangible multiline preserve             a[4][2][0]=4;bakline(a,4,2,4);
                      //Tangible multiline preserve             a[4][6][0]=7;bakline(a,4,6,7);
                      //Tangible multiline preserve             a[5][0][0]=2;bakline(a,5,0,2);
                      //Tangible multiline preserve             a[5][3][0]=7;bakline(a,5,3,7);
                      //Tangible multiline preserve             a[5][5][0]=3;bakline(a,5,5,3);
                      //Tangible multiline preserve             a[5][8][0]=9;bakline(a,5,8,9);
                      //Tangible multiline preserve             a[6][0][0]=7;bakline(a,6,0,7);
                      //Tangible multiline preserve             a[6][1][0]=1;bakline(a,6,1,1);
                      //Tangible multiline preserve             a[6][8][0]=2;bakline(a,6,8,2);  
                      //Tangible multiline preserve             a[7][1][0]=2;bakline(a,7,1,2);
                      //Tangible multiline preserve             a[7][3][0]=1;bakline(a,7,3,1);
                      //Tangible multiline preserve             a[7][8][0]=4;bakline(a,7,8,4);
                      //Tangible multiline preserve             a[8][2][0]=6;bakline(a,8,2,6);
                      //Tangible multiline preserve             a[8][3][0]=3;bakline(a,8,3,3);
                      //Tangible multiline preserve             a[8][5][0]=7;bakline(a,8,5,7);*/


        tangible.RandomNumbers.seed((int)time(null));

        int w;
        int doo;
        System.out.print("Choose the mode of your input -\n\n1-Enter input manually\n2-Read input from a text file\n\n");
        for(;;)
        {
            scanf("%d", w);
        if(w == 1||w == 2)
            break;
        else
    {
            System.out.print("\nEnter either 1 or 2.\n");
    }
        }


    if(w == 2)
    {
        system("cls");
        System.out.print(" \t\t              SUDOKU SOLVER\n\n\n");

        int t;
        int d;
        FILE x;
        if((x = fopen("sudoku.txt","r")) == null)
        {
                                                    System.out.print("\n\nTo read input from a text file, follow these steps -\n");
                                                    System.out.print("\n1 Create a new notepad text file in same location where this software is placed");
                                                    System.out.print("\n2 Now read your unfilled sudoku board from left to right starting from first row  and moving to subsequent rows and enter corresponding numbers in this text      file. For an empty box enter 0.Leave 1 space between any two entries.");
                                                    System.out.print("\n3 Save this file and Rename it to sudoku.txt");
                                                    System.out.print("\n4 Rerun this program.");
                                                    System.out.print("\n5 If it still doesn't work, try entring input manually.");
                                                    GlobalMembersSudokuSolver.dev();
                                                    doo = 9;
                                                    }
        else
        {
            int r;
            int c;
        for(r = 0;r<9;r++)
        {
        for(c = 0;c<9;c++)
        {
        fscanf(x, "%d", t);
        if((a[r][c][t] == 0&&a[r][c][0]!=0)||t<0||t>9)
        {
            System.out.print("\n\n\nSorry, your input board is incorrect. Please recheck your input file.");
            d = 99;
            break;
        }
        else
        {
            a[r][c][0] = t;
        GlobalMembersSudokuSolver.bakline(a, r, c, a[r][c][0]);
        }
        }
        if(d == 99)
            break;
        }
                                 fclose(x);
        }


        if(doo!=9)
        {
        if(d!=99)
        {
                    System.out.print("\n\nUnsolved sudoku \n\n");
                    GlobalMembersSudokuSolver.printarray(a);
                    int[][][][][] b = new int[9][9][10][63][9];
                    GlobalMembersSudokuSolver.copystb(a, b, 0, 0);
                    int l = GlobalMembersSudokuSolver.leash(b, 1, 0);
                    GlobalMembersSudokuSolver.dev();

                 }
        else
        {
            GlobalMembersSudokuSolver.dev();
            System.out.print("");
        }
                 }

    }


    else
    {
        system("cls");
        System.out.print(" \t\t              SUDOKU SOLVER\n\n\nTreat your sudoku board as a 9*9 matrix and enter the corresponding entries \nFor unfilled boxex enter 0\n\n\n");

         GlobalMembersSudokuSolver.scansudoku(a);
         System.out.print("\n\n\n");
         System.out.print("Unsolved sudoku \n\n");
         GlobalMembersSudokuSolver.printarray(a);
         int[][][][][] b = new int[9][9][10][63][9];
         GlobalMembersSudokuSolver.copystb(a, b, 0, 0);
         int l = GlobalMembersSudokuSolver.leash(b, 1, 0);
         GlobalMembersSudokuSolver.dev();
    }


        getch();
    }
}


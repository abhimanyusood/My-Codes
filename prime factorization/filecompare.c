#include <stdio.h>
#include <string.h>

#define MAXNAME 20
#define MAXLINE 1000

FILE *first, *second;

int main()
{
    char f[MAXNAME]="ans.txt", s[MAXNAME]="out.txt", str1[MAXLINE], str2[MAXLINE];
    
  //  printf("type the names of the compared files\n");
    //printf("first: ");
    //gets(f);
    //printf("second: ");
    //gets(s);
    if((first = fopen(f, "r")) == NULL)
    {
        perror(f);
        return 1;
    }
    else if((second = fopen(s, "r")) == NULL)
    {
        perror(s);
        return 1;
    }
    else
        printf("files open\n\n"); 
    while(!feof(first) && !feof(second))
    { 
        fgets(str1, MAXLINE-1, first);
        fgets(str2, MAXLINE-1, second);
        if(strcmp(str1,str2) != 0)
             {
                printf("first different strings:\n\n");
                printf("%s\n%s\n", str1, str2);
                break;
            }
    }
    fclose(first);
    fclose(second);
    getch();
    return 0;
}

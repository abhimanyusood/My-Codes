#include <stdio.h>
#include <conio.h>
main( )
{
FILE *fp,*h ;
char ch ;
fp = fopen ( "ninnu.txt", "r" ) ;
while ( 1 )
{
ch = fgetc ( fp ) ;
if ( ch == EOF )
break ;
printf ( "%c", ch ) ;
}
fclose ( fp ) ;


h = fopen ( "ninnu.txt", "r" ) ;
while ( 1 )
{
ch = fgetc ( h ) ;
if ( ch == EOF )
break ;
printf ( "%c", ch ) ;
}
fclose ( h ) ;
getch();/*for full info read yashwant kanetkar*/
}

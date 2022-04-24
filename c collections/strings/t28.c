#include <stdio.h>
void main()
{
char s1[100];
char s2[100];
int ss1,ss2;
gets( s1 );
fgets( s2, sizeof(s2), stdin);
ss1 =  strlen( s1 );
ss2 =  strlen( s2 );
printf( "%d %d \n", ss1, ss2);
}
void main()
{
char buf1[100] = "Hello";
char buf2[100] = "World";

char *strptr1 = buf1 + 2;
char *strptr2 = buf2 + 3;

strcpy( strptr1, buf2 );
strcpy( strptr2, buf1 );

printf( "%s\n",buf1 );
printf( "%s\n",buf2 );
}
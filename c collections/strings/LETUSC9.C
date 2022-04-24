#include<conio.h>
#include<string.h>
/*
main()
{
char name[]="klinsman";
int i=7;
clrscr();
while (i>=0)
{
printf("%c",name[i]);
i--;
}
i++;
printf("\n");
while (i<=7)
{
printf("%c",name[i]);
i++;
}
getch();
}*/

/*
main()
{
int i=0;
char name[]="singarvelan";
clrscr();
while(name[i] != 'v')
{
printf("%c",name[i]);
i++;
}
getch();
} */



/*
main()
{
char name[]="klinsman";
char *ptr;
clrscr();
ptr=name;     //==== ptr=&name[0];
while(*ptr !='\0')
{
printf("%c",*ptr);
ptr++;
}
getch();
}
*/


/*
void main()
{
char name[25];
clrscr();
scanf("%s",name);
printf("%s",name+6);
getch();
}
*/
/*
void  main()
{
char name[25];
clrscr();
printf("enter your full name\n");
gets(name);
//if(gets(name)=="hello shatlin" )
//printf("hai shatlin");
clrscr();
puts("is your name");
puts(name);
getch();
}
  */
/*   //STRINGS

void main()
{
char name[25];
clrscr();
gets(name);
strupr(name);
puts(name);
strlwr(name);
strncpy(name ,"hai",2);
puts(name);
strncpy(name,"sha",2);
puts(name);
strset(name,97);
puts(name);
gets(name);
strrev(name);
puts(name);
strrev(name);
puts(name);
getch();
strchr(name,97);
puts(name);
}*/


/* //A LOOKALIKE FUNCTION OF STRLEN.....
void main()
{
char a[100];
int t=0,i=0;
clrscr();
gets(a);
while(a[i] !='\0')
{
i++;
t++;
}
printf("the length of the string is %d",t);
getch();
} */
/*


//A LOOKALIKE OF STRCPY
void main()
{
void stringcopy(char *s,char *t);
char name[25],mane[25];
clrscr();
gets(mane);
stringcopy(name,mane);
printf( "%s",name);
getch();
}
void stringcopy(char *s,char *t)
{
int i=0;
while(*t!='\0')
{
*s=*t;
s++;
t++;
}
*s='\0';
}
*/

/*
main()
{
char c[2] ="A";
clrscr();
printf("\n%c",c[0]);
printf("\n%s",c);
getch();
}
*/


/*
void main()
{
char s[40] ="get organised !learn c";
clrscr();
printf("\n%s",&s[2]);
printf("\n%s",s);
printf("\n%s",&s);
printf("\n%c",s[2]);
}
*/

/*
main()
{
char s[] =" viruses work similarly";
int i =0;
clrscr();
while(s[i] !='\0')
{
printf("\n%c %c",s[i],*(s+i));
//printf(" \n%c %c",i[s],*(i+s));
i++;
}
getch();
}

*/

/*
main()
{
int arr[]={'A','B','C','D'};
int i;
clrscr();
for(i=0;i<=4;i++)
printf("\n%d",arr[i]);
getch();
}
*/


main()
{
char arr[]= "rhombus";
char *sr =arr;
int i;
clrscr();
for(i=0;i<=7;i++)
{
printf("%c ",*sr);
sr++;
}
getch();
}

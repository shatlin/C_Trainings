#include<stdio.h>
#include<conio.h>
/*
void main() //q1
{
clrscr
()
;
printf
("hello  "

"world")
;
getch
();
}no error*/



/*void main() //2
{
struct   a
{
int i;
char c;
void a();
}k;//no error if ; included
k.i=10 ;
k.c=12;
printf("%d,%c, hello",k.i,k.c);
}//error since structure not ended
*/


/*
char *argv[2]; //3
int argc;
main(argc,argv)
{
printf("hello");
}//no error
*/

/*main(argc,argv) //alternative of q3
{
printf("hello");
}//no error
*/

/*main(argc,argv) //alternative of q3
{
char *argv[];
int argc;
printf("hello");
}// error; declarations must be above the main()
*/

 /*void main()
{
long double t=12.5;
clrscr();
printf("%d",t);
getch();
}*/


//4

/*main()
{
int i;
clrscr();
printf("%d",i);
getch();//garbage value
} */

/*main()
{
clrscr();
int i;
printf("%d",i);
getch();//error.i must be initalised  at the beginning
} */

/*int i;
main()
{
printf("%d",i+2);
getch();//out put 0;not garbage value
} */


//6

/*main()
{
static int i;
i=10;
clrscr();
printf("%d",i);
getch();//no error
}*/
//8
/*a()
{
printf("hell\n");
}
b()
{
printf("ha\n");
}
c()
{
printf("bai\n");
}

main()
{
int (*i[3])();
clrscr();
i[0]=a;
i[1]=b;
i[2]=c;
i[2]();
getch();//bai
}*/

//alternative 8
/*a()
{
printf("hell\n");
}
b()
{
printf("ha\n");
}
c()
{
printf("bai\n");
}

main()
{
int (*i[3])();
clrscr();
i[0]=a();
i[1]=b();
i[2]=c();
//i[2]();
getch();//hell ha bai
} */

/*main()
{printf("hello world");};;;*/

//11

/*main()
{
int a[4];
a[-2]=10;
a[2]=3;
printf("%d",-2[a]);
}*/

//12

/*main()
{
int i;
clrscr();
*&i=10;
printf("%d",i);
getch();//10
}
	main()
{      int i=10;
clrscr();
printf("%d...",++i);
printf("%d",++i);
getch();
}*/


/*void main()
  {
  int x=10,y=10;
  x=x=x+1;
  y=y=y+1;
  x=x++;
  printf("%d,%d",x,y);
  } */
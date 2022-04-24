#include\
<stdio.h>
#include\
<conio.h>
#include<string.h>
#define as clrscr();
#include<math.h>
#define f(x,y) x*2+3*y+16
/*void main(c,v)
{
int x=10,y=11,z=12;

crscr();
x=++y=z++;  //assignment operator right to left
printf("%d  %d  %d",x,y,z);
getch();
} */


/*typedef  double abc;
abc x;
enum color
{
red,
blue,
green
};
clrscr();
printf("%d \n",green);
getch();

} */

/*main(int a,char b[],char *c[])
{
int i;
clrscr();
printf("the number of command line args are :"
"%d\n\n",a);
printf("list of command line arguments :\n");
for(i=0;i<a;i++)
printf("arguement %d: %s\n",i,b[i]);
printf("\n\n");
printf("the environment variables passed to main "
"are:\n");
for(i=0;c[i];i++)
printf("%s\n",c[i]);
getch();
} */



/*main(int argc,char* argv[])
{
static int kkk;kkk=strlen(argv[1]);
clrscr();
printf("the number of characters in the first arguments is %d ",kkk);
getch();
} */

/*main(int argc,char* argv[])
{
static int kkk;
kkk=strlen(argv[1]);
clrscr();
printf("the number of characters in the first arguments is %d ",kkk);
getch();
} */




/*main()
{
int num=12345;
char *reverse();
clrscr();
printf("%5d is %s\n",num,reverse(num));
}

char *reverse (int value)
{
int digit,end=5;
static char decimal[5];
int begin=0;
decimal[end]='\0';
while(begin<end)
{
digit=value%10;
decimal[begin++]=digit+'0';
value/=10;
}
return decimal;
} */

///////////////////////////////////////////
//
//
//
/*static float a=400;
main()
{
static float *l=&a;
as
printf("%f",*l);
} */
//
//
//
/////////////////////////////////////////////

/*main()
{
const int max=10;
char aaa[max];
} */

main()
{
int j=9;
float i=8.5;
as
printf("%d   %d",sizeof('58' ),sizeof("58"));
}



/*main ()
{
float x=5.0,y=4.0;
float z=x%y;
printf("%d ",z);
} */


/*int main(void)
{
int i;
int x=5,y=2,z=10;
float a,b;
char c='a';
as;
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
}//error since structure not ended */


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
/*main()
{
char e="a";
clrscr();
printf("%c %d ",e,e);
getch();
} */
/*
void main()
{
for(a=0;a>12;a++)
{
printf("%d test   ",a++)
}
}
}


void main()
{
int b=6;

switch(b)
{
case 6:printf("i am the original");break;
case 2+4:printf("ju ...world);
default:printf("guess who");
}
}
*/

/*main()
{
int a=10;
printf("%d %s %s "
,a,"out string 1","out
string 2");  //obvious error
} */

/*void main()
{
int a=10;
as;
printf("%d\a",printf("%d",a));
getch();
}


int d;
void main()
{
char e;
float f;
as;
printf("%d  %c  %f",d,e,f);
} */

/*main()
{
as;
for(int a=0;a<12;a++,printf(" test%d\n",++a));
printf("my mark %d ",a);
} */


/*main()
{
int a='a'+15;
printf("%c",a);
}

void main()
{
int a;
scanf("%d",a);
printf("%c",a++);
}*/


/*void main()
{
a+14+35;
}

i=10;
printf("%d %d %d %d %d %d \n",++i,i++,i+1,i++,i--,--i);
getch();
}
*/

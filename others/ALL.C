/*
1.
 main()
 {
 int count=9,t=0;
    register int n=(count+7)/8;
    clrscr();
    switch (count %8){
       case 0 : do{
		 t++;
       case 4 :  t++;
       case 3 :  t++;
       case 2 :  t++;
       case 1 :  t++;
		} while(--n>0);
		printf("%d",t);
    }
   }

2.
#include <stdio.h>
#include <conio.h>
#define STRANGE if(c==8)printf("BYE")

void main()
{
  int a=5,b=6,c=7;
     if (a==b)
	STRANGE;
     else
	printf("HI");
   getch();
}

3.
 main(){
 float i=1.234;
     switch(i){
		case 	 1: printf("One");break;
		case 1.234: printf("1.234");
		default   : printf("Other");
     }
   }

4.
 main(){
  int i=2,j=5,k=0,m=10;
     for(;i>j==k!=m;i-=2){
	printf("HELLO\n");
     }
     printf("%d",i);

 }

5.
#include <stdio.h>
#include <conio.h>
void main(void)
{
  int i;
  clrscr();
  for(i=1;i<=5;i++)
  {
    if(i==3)
    continue;
    printf("%d",i);
  }
   printf("\n");
   for(i=1;i<=5;i++)
   {
    if(i==3)
    goto end;
    printf("%d",i);
    end:;
   }
}

6.
#include <stdio.h>
#include <conio.h>
void main(void)
{
   int i;
   clrscr();
   for(i=1;i<=5;i++)
   {
     if(i==3)
     break;
     printf("%d",i);
   }
   printf("\n");
   for(i=1;i<=5;i++)
   {
     if(i==3)
     goto end;
     printf("%d",i);
   }
   end:;
}

7.
#include <stdio.h>
main()
{
   int i;
   clrscr();
   for(i=0;i++;printf("%d",i));
   printf("%d",i);
}


8.
#include <stdio.h>
#include <conio.h>
#define STRANGE c==8 ?printf("BYE"):printf("\n")
main()
{
  int a=5,b=6,c=7;
   clrscr();
   if(a==b)
     STRANGE;
   else
     printf("HI");
 getch();
}

9.
main()
{
    int i=0,x=5,y=5,z=0;
    for(i=0;i<5;{++x;++y;z=x+y},i++){
       printf("i = %d  x = %d  y = %d  z = %d\n",i,x,y,z);
    }
}

10.
char ch;
int i;
main()
{
 int t;
 clrscr();
   for(t=4;scanf("%d",&i)-t;printf("%d\n",i)){
      printf("%d\n",t--);
   }
}

11.
main()
{
  int ch=2;
  clrscr();
   switch(ch){
      case 1:
	     printf("case 1\n");
      case 2:
	     printf("case 2\n");
      fault:
	     printf("default\n");
   }
   getch();
}

12.
main()
{
int x,y,z=y=x=-1;
  if(!(z=++x&&++y||++z))
    printf("x = %d,y = %d,z = %d",x,y,z);
  else
    printf("no output");
}

13.
main()
{
  int i=400*400/400;
  if(i==400)
   printf("hi");
  else
   printf("hello");
}

14.
main()
{
   int i=1,j=1;
   clrscr();
   for(;j;printf("%d %d\n",i,j))
     j=i++<=5;
}

15.
main()
{
  int c=10,d=5,e=10,a;
  a=c>1?d>1||e>20?100:200:300;
  printf("a = %d",a);
}

16.
main()
{
  int x,y=5,z=5;
  float f=10.00;
  clrscr();
do{
  printf("%*.*f\t%n",y--,z--,f,&x);
  printf("%d\n",x);
  f-=1.25;
}while((x-2)!=0);
getch();
}

17.
# include <stdio.h>
main()
{int i=2;
 switch(i)
 {
 case 1:{
	  printf("One");break;
 case 2:  printf("Two");
	 };
 default: printf("Other");
 }
}

18.
# include <stdio.h>
main()
{int a=48,i=0;
 while(a >>= i)
 printf("\n%d %d",a,i++);
}

/*19.
main()
{
  int i=5;
  while(i=i--)
      printf("%d",i);
}

/*20.*/
main()
{
   float a[5]={12.345,23.456,34.567,45.678,56.789};
   int i=0;
     for(i=0;i<5;i++)
       printf("%f\n",a[i]);
}

       /*			       <<THE END>>*/
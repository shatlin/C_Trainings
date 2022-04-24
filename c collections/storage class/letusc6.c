#include<stdio.h>
#include<conio.h>
#define c clrscr()
#define g getch()

//INT AS LONG USING LETTER L
/*
main()
{
c;
printf("%d" ,sizeof(23L));
printf("\n\n%d" ,sizeof(23l));
printf("\n\n%d" ,sizeof(032767));
printf("\n\n%d" ,sizeof(0x575675672777));
g;
} */

/*
//STATIC 1
main()
{
void increment();
clrscr();
increment();
increment();
increment();
getch();
}
void increment()
{
static int i=1;
i=i+1;
printf("\n%d" ,i);
} */

/*
// STATIC 2
main()
{
void increment();
clrscr();
increment();
increment();
increment();
getch();
}
void increment()
{
static int i;
i=1;
i=i+1;
printf("\n%d" ,i);
} */

/*

//GLOBAL VARIABLE

int i;
main()
{
void increment();
clrscr();
increment();

increment();
increment();
getch();
}
void increment()
{
i=i+1;
printf("\n%d" ,i);

}
*/

//EXERCISES

/*
main()
{
int i;
clrscr();
for (i=0;i<=50000;i++)
printf(" "  "  %d ",i);
getch();
}*/

/*
main()
{
float a=13.5;
double b=13.5;
c;
printf("\n%f %lf ",a,b);
g;
}
*/

/*
int i=0;
main()
{
c;
printf("\n mains i is %d",i);
i++;
val();
printf("\n mains i is %d",i);
val();
g;
}
val()
{
i=100;
printf("\n val's i is %d ",i);
i++;
} */


/*
main()
{
int x,y ,s=2;
c;
s*=3;
y=faa(s);
x=gaa(s);
printf("\n %d %d %d",s,y,x);
g;
}

int t=8; //VALUE OF T PERSISTS BETWEEN CALLS AS IT IS GLOBAL

int faa(int a)
{
a+=-5;
t -=4;
return (a+t);
}

int  gaa(int a)
{
a=1;
t+=a;
return (a+t);
} */


/*
main()
{
static int count =5;
printf("\ncount = %d",count--);
if (count !=0)
main();
}
*/

/*
main()
{
float a=25.345;
float *b;
c;
b=&a;
printf("\n%f \n%u",a,b);
g;
}
*/


/*
main()
{
unsigned a=25;
long unsigned b=25l;
c;
printf("\n%lu %u",a,b);
g;
}
*/

/*
main()
{
long num;
num=2;
c;
printf("\n%ld",num);
g;
}*/

/*
main()
{
int i,j;
c;
for(i=1;i<5;i++)
{
j=ga(i);
printf("\n%d" ,j);
}
g;
}
ga(int x)
{
static int v=1;
int b=3;v+=x;
return(v+b+x);
}
  */
/*
float x=4.5;
main()
{
float y;
float fa(float);
c;
x*=2.0;
y=fa(x);
printf("\n%f %f",x,y);
g;
}

float fa(float a)
{
a+=1.3;
x-=4.5;
return (a+x);
} */

/*
main()
{
int a;
c;
a=sumdig(12345);
printf("\n%d",a);
g;
}
sumdig(int num)
{
static int sum;
int a,b;
a=num%10;
b=(num - a) /10;
sum=sum+a;
if(b)
sumdig(b);
else
return (sum);
}
*/











#include<stdio.h>
   main()
     {
       int i=0;
       fork();
       printf("%d",i++);
       fork();
      printf("%d",i++);
      fork();
      wait();
     }

/*
3. What is the memory allocated by the following definition ?
  int (*x)[10];


4. What is the memory allocated by the following definition ?
int (*x)();


5. In the following program segment 

#include<stdio.h>
     main()
    {
      int a=2;
      int b=9;
      int c=1;
     while(b)
  {
     if(odd(b))
     c=c*a;
    a=a*a;
    b=b/2;
  }
printf("%d\n",c);
}

How many times is c=c*a calculated?


6. In the program segment in question 5 what is the value of a at the end of the while loop?


7. What is the output for the program given below 

     typedef enum grade{GOOD,BAD,WORST,}BAD;
     main()
    {
        BAD g1;
	g1=1;
	printf("%d",g1);
     }


8. Give the output for the following program. 

#define STYLE1 char
      main()
     {
      typedef char STYLE2;
     STYLE1 x;
     STYLE2 y;
     clrscr();
     x=255;
     y=255;
     printf("%d %d\n",x,y);
     }


9. Give the output for the following program segment.

#ifdef TRUE
int I=0;
#endif

main()
{
int j=0;
printf("%d %d\n",i,j);
}


10. In the following program 

#include<stdio.h>
main()
{
char *pDestn,*pSource="I Love You Daddy";
pDestn=malloc(strlen(pSource));
strcpy(pDestn,pSource);
printf("%s",pDestn);
free(pDestn);
}

(a)Free() fails
(b)Strcpy() fails
(c)prints I love You Daddy
(d)error


11. What is the output for the following program

     #include<stdio.h>
       main()
      {
      char a[5][5],flag;
      a[0][0]='A';
      flag=((a==*a)&&(*a==a[0]));
      printf("%d\n",flag);
      }





*/

#include<conio.h>
#include<iostream.h>
#include<math.h>
void n(int i)
{
gotoxy(i,10);
cout<<"Þ";
n(i++);
if(i>80)
i=-i;
}

void main()
{
}

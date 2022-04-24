#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
for(int l=2000;l<30000;l++)
for(int j=0,k=1;k<10;j++,k++)
{
if(l%k==j)
{
if(k==9)cout<<l<<endl;
}
else
break;
}
}
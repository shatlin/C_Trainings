#include<math.h>
void main()
{
unsigned long j,i,k,b;
clrscr();
for(j=65400;j<65535;j++)
{
k=sqrtl(j)+2;
for(i=2;i<=k;i++)
{
  if(j % i != 0)
  continue;
  else
  break;
}
if(i==k+1)
printf("\n%lu",j);
}
getch();

}
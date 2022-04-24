#include<math.h>
void main()
{
int b=0;
unsigned long j,i,k;
clrscr();
for(j=4294967000;j<4294967295;j++)
{
k=sqrtl(j);
for(i=2;i<k+2;i++)
{
  if(j % i != 0)
  continue;
  else
  break;
}
if(i==k+3)
printf("\n%lu",j);

}

getch();
}
#include <stdio.h>
#include <conio.h>
void main()
{
  int i;
  int aaa[3];
  int a=1,b=2;
   clrscr();
  printf(" %d ,%d\n",a,b);
    for(i=0;i<4;i++)
      aaa[i]=i;
  printf(" %d ,%d\n",a,b);
  printf(" a = %u,b = %u\n",&a,&b);
  printf("aaa[0] = %u aaa[1] = %u aaa[2] = %u\n",&aaa[0],&aaa[1],&aaa[2]);
  printf("aaa[3] = %u aaa[4] = %u aaa[5] = %u\n",&aaa[3],&aaa[4],&aaa[5]);
  getch();
}
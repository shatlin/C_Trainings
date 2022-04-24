#include <stdio.h>
#include <string.h>

int main(void)
{
struct xxx{
				 int i;
				 char j;
			 };

struct xxx zzz ={1,'a'};
abc(zzz);
}
abc(struct xxx aaa)
{
printf("%d...%c",aaa.i,aaa.j);
}

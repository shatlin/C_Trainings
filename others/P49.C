#include <assert.h>
void main(void)
{
	char s[]="mku MCA";
	clrscr();
	assert(strchr(s,"m")!=0);
	printf("Okay...");
	getch();
}
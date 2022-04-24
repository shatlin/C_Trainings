#include<dos.h>
#include<conio.h>     //ascii value of EOF is 26
#include<process.h>
#include"stdio.h"
main()
{
	clrscr();
	FILE *fp;
	struct emp
	{
		char name[40];
		int age;
	};
	struct emp e;

	fp = fopen("employee.dat","r");

	if(fp==NULL)
	{
		puts("cannot open");
		exit(0);
	}

	while(fread(&e,sizeof(e),1,fp)==1)
	{
		printf("\n name age\n");
		printf("%s %d",e.name,e.age);
	}
	fclose(fp);
	getch();
}


main(int a,char b[],char *c[])
{
int i;
clrscr();
printf("the number of command line args are :"
"%d\n\n",a);
printf("list of command line arguments :\n");
for(i=0;i<a;i++)
printf("arguement %d: %s\n",i,b[i]);
printf("\n\n");
printf("the environment variables passed to main "
"are:\n");
for(i=0;c[i];i++)
printf("%s\n",c[i]);
getch();
}

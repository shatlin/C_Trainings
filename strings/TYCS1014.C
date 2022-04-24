void main()
{ int i;
char p1[]="sameuel";
char *p2="moses";
clrscr();
p1[4]='s';
p2[4]='t';
p2="delilah";
for(i=0;i<7;i++)
printf("%c",p1[i]);
printf("\n%s",p2);
}
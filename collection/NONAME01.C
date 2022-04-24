char key[10]="abcdefghij";

void rshift()
{
char temp[7],temp1[3];
int i;
for(i=0;i<3;i++)
temp1[i]=key[i+7];
for(i=0;i<7;i++)
temp[i]=key[i];
for(i=0;i<3;i++)
key[i]=temp1[i];
for(i=0;i<7;i++)
key[i+3]=temp[i];
}

void lshift()
{
char temp[3];
int i;
for(i=0;i<3;i++)
{
temp[i]=key[i];
}
for(i=0;i<7;i++)
{
key[i]=key[i+3];
}
for(i=0;i<3;i++)
{
key[i+7]=temp[i];
}
}
void main()
{
int i;
clrscr();
lshift();
for(i=0;i<10;i++)
printf("%c",key[i]);
printf("\n");
rshift();
for(i=0;i<10;i++)
printf("%c",key[i]);
getch();
}

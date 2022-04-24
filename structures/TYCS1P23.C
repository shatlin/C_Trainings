void main()
{
struct es
{
char name[20];
int age;
float sal;
};
struct es e={"tiger"};
clrscr();
printf("%d   %f",e.age,e.sal);
}
//partially initialised struct's uninitialised values are zero.
//atleast one value must be initialsied for this.
#include<math.h>

static unsigned long char1[10];
void modulo(unsigned long a,unsigned long n)
{
int i;
unsigned long c=0,d=1;
for(i=9;i>=0;i--)
{
c*=2;
d=(d*d)%n;
if(char1[i]==1)
{
c+=1;
d=(d*a)%n;
}
}

unsigned long invfunc(unsigned long we)
{
unsigned long i,j;
for(i=0;i<28;i++)
{
			j=(we*i)%28;
			if(j==1)
			{
			return i;
			}
	}
}

void binary(unsigned long a)
{
	int i;
		 for(i=9;i>=0||a>0;i--)
		 {
				char1[i]=a%2;
				a/=2;
		}
}

void main()
{
unsigned long a=17;
unsigned long p=5,q=7;
unsigned long e=3,d;
unsigned long n,z,b,c;
binary(77);
clrscr();
for(n=0;n<10;n++)
  printf("%lu ",char1[n]);
  getch();
n=p*q;
z=(p-1)*(q-1);
d=invfunc(e);

b=pow(a,e);
printf("%lu",d);
getch();
b%=n;
c=pow(b,d);
c%=n;
printf("\n%u  %lu   %lu",a,b,c);
getch();
}

main()
{
int a=3,b=4;
b%=3+4;               // + evaluated first before %=
a*=a+5;              // same as above
printf("b=%d a=%d\n",b,a);
}
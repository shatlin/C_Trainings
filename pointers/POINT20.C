void main()
{
float *t();
float p=3.24,*q;
q=&p;
clrscr();
printf("\n&p before call=%u",&p);
printf("\nq  before call=%u",q);
q=t(&p);
printf("\nq  after call =%u",q);
printf("\n&p after call =%u",&p);
getch();
}

float *t(float *r)
{
r=r+1;
return (r);
}
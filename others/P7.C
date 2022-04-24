main()
{
  char v1,*p1=&v1;
  int v2,*p2=&v2;
  float v3,*p3=&v3;
  double v4,*p4=&v4;
  long v5,*p5=&v5;
  long double v6,*p6=&v6;
  short v7,*p7=&v7;
   clrscr();
   printf("scalar values or scaling factor>>>\n");
   printf("ptr to char        : %d\n",sizeof(*p1));
   printf("ptr to int         : %d\n",sizeof(*p2));
   printf("ptr to float       : %d\n",sizeof(*p3));
   printf("ptr to double      : %d\n",sizeof(*p4));
   printf("ptr to long        : %d\n",sizeof(*p5));
   printf("ptr to long double : %d\n",sizeof(*p6));
   printf("ptr to short       : %d\n",sizeof(*p7));
   getch();
}
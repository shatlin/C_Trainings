main(int argc,char *argv[])
{
 /*  printf("%c",argv);*/
   printf("%c",++argv[0]);
   printf("%c",*++argv);
   printf("%c",++*++argv);
   printf("%c",++*++*++argv);
}
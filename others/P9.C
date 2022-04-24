/* analyse the code*/
main()
{
float **ptr1,*ptr2;
   clrscr();
     *ptr2=20;
     *ptr1=10;
	  ptr2=&ptr1;
	  printf("%u\n",ptr1);
	  printf("%u\t %u\n",*ptr1,*ptr2);  //10 0
	  printf("%u\t %u\n",**ptr1,*ptr2); //0 junk
   getch();
}
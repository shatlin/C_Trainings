/* analyse the code*/
main()
{
  float z[15];
  char *ptr1;
  int *ptr2;
  float *ptr3=z,*ptr4=&z[14];
   clrscr();
    if(ptr4>ptr3)
       puts("ptr4 is pointing to a higher element in 'z' than ptr3\n");
    if(ptr3==z)
	puts("ptr3 points to the 1st element in 'z'\n");
    if(ptr4==&z[14])
	puts("ptr4 points to the last element in 'z'\n");
    if(ptr4>&z[14])
	puts("ptr4 points beyond the last element in 'z'\n");
    if((ptr4<&z[14])&&(ptr3>=z))
	puts("ptr3 points to an element within 'z'\n");
    ptr2=0;
    ptr2=0xb000;
    ptr2=(int*)0xb000;
    ptr1=ptr2;
    if(ptr1==ptr2)
       puts("bad");
    if(ptr1==(char *)ptr2)
       puts("good");
   getch();
}
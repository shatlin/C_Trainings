 #include <stdio.h>
main()
{
   int i;
	for(i=0;i<32767;printf("%d\n",i),++i); //output   0..32767
	printf("%d",i);                      //******
	getch();
}

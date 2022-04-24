#include <stdio.h>
#include <conio.h>
main()
{
    unsigned long magic1;
    long unsigned magic2;
    unsigned long int magic3;
    unsigned int long magic4;
    long unsigned int magic5;
    long int unsigned magic6;
    int unsigned long magic7;
    int long unsigned magic8;

    clrscr();
    printf("memory required to store the variables.\n");
    printf("magic1 : %d bytes\n",sizeof(magic1));
    printf("magic2 : %d bytes\n",sizeof(magic2));
    printf("magic3 : %d bytes\n",sizeof(magic3));
    printf("magic4 : %d bytes\n",sizeof(magic4));
    printf("magic5 : %d bytes\n",sizeof(magic5));
    printf("magic6 : %d bytes\n",sizeof(magic6));
    printf("magic7 : %d bytes\n",sizeof(magic7));
    printf("magic8 : %d bytes\n",sizeof(magic8));
    getch();
}

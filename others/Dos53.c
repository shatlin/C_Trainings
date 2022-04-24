#include <stdio.h>
static abc()
{
 int i=1;
 return i++;
 }
void main()
{
 int i=1;
 i=abc();        // different variable i with  the same name here
 printf("\n%d.....",i);
 i=abc();
 printf("%d",i);
 getch();
}

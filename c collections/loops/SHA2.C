#include <stdio.h>
#include <string.h>
void main()
{
int i;
for(i=32760;i<=32767;i++) //infinite loop
printf("%d\n",i);
}
//FOR LOOP
//after initialization i<32767 is checked.if condition true the body executed
//then i incremented.now  condition again checked.this process is repeated.
//here when i=32767 the loop executed then i incremented in which
//case i becomes -32768. now condition checked which returns true.


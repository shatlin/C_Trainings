#include <stdio.h>
 #define J 1

main()
{
  int i = 1.234;
     switch(i){
	  case 1	: printf("One");	break;
	  case 1.5	: printf("1.234");
	  default : printf("Other");
     }
}

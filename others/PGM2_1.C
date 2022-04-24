#include <stdio.h>
#include <conio.h>
void main(void)
{
  clrscr();
  printf("handle or fd entry in FILE structure for stdin : %d\n",stdin->fd);
  printf("handle or fd entry in FILE structure for stdin : %d\n",stdout->fd);
  printf("handle or fd entry in FILE structure for stdin : %d\n",stderr->fd);
  printf("handle or fd entry in FILE structure for stdin : %d\n",stdaux->fd);
  printf("handle or fd entry in FILE structure for stdin : %d\n",stdprn->fd);
  getch();
}
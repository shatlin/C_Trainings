
#include <dos.h>
#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

#define ARROW_SIZE 10

void draw_arrow(int x, int y);

int main(void)
{
   int gdriver = DETECT, gmode, errorcode;
   void *arrow;
   int x, y, maxx;
   unsigned int size;

   initgraph(&gdriver, &gmode, "d:\\tc\\bgi");

   size = imagesize(108, 100, 41, 200);

   arrow = malloc(size);
   for(int i=0;!kbhit();i+=8)
   {
   delay(100);
	outtextxy(400,100+i,"\1");
	//circle(400,100+i,4);
      //	putpixel(400,100+i,10);
	 getimage(108, 100, 410,200, arrow);
	putimage(100, 100, arrow,XOR_PUT);
    }
   getch();
   free(arrow);
   closegraph();
   return 0;
}


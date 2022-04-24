#include <stdio.h>
#include <conio.h>
main()
{
  int *p,**q,i,j,r,c;
    clrscr();
    printf("\n\n\n\n\n");
    printf("\nPlease enter the number of rows : ");
     scanf("%d",&r);
    printf("\nPlease enter the number of columns : ");
     scanf("%d",&c);
    p=(int *)malloc(c*sizeof(int));
    q=(int *)malloc(r*sizeof(p));
      for(i=0;i<r;i++){
	for(j=0;j<c;j++)
	  scanf("\t\t%d",&(*(*(q+i)+j)));
	  }
    printf("\n\tThe input matrix is");
    printf("\n\t-------------------\n");
     for(i=0;i<r;i++){
       for(j=0;j<c;j++){
	 printf("\t%d",*(*(q+i)+j));
	 }
	printf("\n\n");
     }
     free(p);
     free(q);
  getch();
}
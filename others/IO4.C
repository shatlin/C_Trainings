
      /*  04/07/98 */
#include <stdio.h>
#include <conio.h>
main()
{
  char cvar='a';
  int ivar=234,ivar2=32767,ivar3=32768,ivar4=-1234,x=0,y=0;
  float fvar=12.34000,fvar2=123.459000,fvar3=.001234;
  char arr[]="mku mca";
  long double ldvar=1234.567800;
/* "  % [flag] [width] [.prec] [F|N|h|l] type " */
clrscr();
/*  printf("\n[1]    %c",cvar);
  printf("\n[2]    %d\t%d\t%d\t%u",ivar,ivar2,ivar3,ivar3);
  printf("\n[3]    %o",ivar);
  printf("\n[4]    %x\t%x\t%x",ivar,ivar2,ivar3);
  printf("\n[5]    %f",fvar);
  printf("\n[6]    %Lf",ldvar);
  printf("\n[7]    %s",arr);
*/  printf("\n[8]    %s",cvar);/* garbage because %s instead of %c */
/*  printf("\n[9]    %i",ivar);/* %i for %d */
/*  printf("\n[10]    %e\t%e\t%E\t%g\t%G",fvar,fvar,fvar,fvar,fvar);
  printf("\n[11]    %g\t%G",fvar2,fvar2);
  printf("\n[12]    %x",65535);
  printf("\n[13]    %f",ldvar);
  printf("\n[14]    %c",arr);
  printf("\n[15]    %-10c",cvar);
  printf("\n[16]    %10c",cvar);
  printf("\n[17]    % d\t%#d\t%5d\t%-5d\t%+d\t%05d",ivar,ivar,ivar,ivar,ivar,ivar);
  printf("\n[18]    %-d\t% d\t%#0d\t%0#d",ivar,ivar4,ivar4,ivar4);
  printf("\n[19]    %*d",7,ivar);
  printf("\n[20]    %*d",7.,ivar);
  printf("\n[21]    %.*d",7,ivar);
  printf("\n[22]    %*.*d",7,5,ivar);
  printf("\n[23]    %6.2f\t%*.*f",fvar,7,2,fvar);
  printf("\n[24]    %6.2g\t%6.6g\t%*.*g\t%07g\t%g",fvar,fvar,6,4,fvar,fvar,fvar3);
  printf("\n[25]    %Lf",ldvar);
  printf("\n[26]    %s",arr);
  printf("\n[27]    %d\t%d",printf("\t%d",y),x=printf("\n[28]    PSG Tech mca%n",&y));
  printf("\n[29]    %d\t%d",x,y);
  printf("\n[30]    %Fp\t%Np",&ivar,&ivar);

	scanf("%d",&ivar);
  printf("\n%d",ivar);                      */
  getch();
}



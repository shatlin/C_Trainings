/* analyse the code*/
main()
{
   int ai[]={1,3,5,7,9},*const ip1=&ai[0];
   const int cai[]={0,2,4,6,8},*const ip2=&cai[0];
   clrscr();
     ip1=&cai[0];
     ip1[1]=5;
     ++*(ip1+2);
      ++*(ip2+2);
      ip2[1]=5;
      --*(ip2+2);
     ip2=&ai[0];
   getch();
}


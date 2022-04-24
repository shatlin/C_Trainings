

 main()
    {int count=9,t=0;
     register int n=(count+7)/8;
     clrscr();
     if (n=1) goto case1;
     switch (count %8)
     {   case 0 : do{
		 t++;
	 case 4 : t++;
	 case 3 : t++;
	 case 2 : t++;
	 case1 :   case 1 : t++;
		  } while(--n>0);
	 printf("%d",t);
     }
   }


  main()
    {int i = 10;
    clrscr();
     printf("\n%d", i);
     goto jmp;
     i = 5;
     do
	{
	--i;
	jmp:
	   printf("\n%d", i);
	}
     while(i);
    }


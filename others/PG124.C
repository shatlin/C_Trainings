#define shortcut(i) printf("zzz"#i" = %f\",zzz##i)

main()
{
	float zzz1=10;
	float zzz2=20;
	float zzz3=30;
	float zzz4=40;
	float zzz5=50;

	clrscr();

	shortcut(1);
	shortcut(2);
	shortcut(3);
	shortcut(4);
	shortcut(5);
	getch();
}

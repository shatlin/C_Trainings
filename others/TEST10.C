main()
{
 int a[5]={1,2,3,4,5};
 int i,j,k;
 clrscr();
 i=++a[1];
 j=a[1]++;
 k=a[i++];
 printf("%d..%d..%d\n",i,j,k);
 getch();
}
main()
{
  int a[]={1,2,3};
  int *aptr=&a[-1];
  printf("%d..%d..%d\n",aptr[1],aptr[2],aptr[3]);
  getch();
}
int pstrcmp(const void *p1,const void *p2)
{
   return(strcmp(*(char *const *)p1,*(char *const *)p2));
}

main()
{
    char *a="mca",*b="mca";
    clrscr();
    printf("%d",pstrcmp(a,b));
}
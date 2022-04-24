main()
{
int arr[]={12,14,15,23,45};
clrscr();
printf("%d",arr+1);
printf("%c",&arr+1);
//this prog expalins diff between arr and &arr
//arr points to the firse element of array
//&arr points to the array
//&arr+1 is address of element next to the array
getch();
}
main()
{
int x=3,y,z;
z=y=x;
z*=y/=x;                    // expression is evaluated from right and assigned to the one on the left
printf("x=%d y=%d z=%d",x,y,z);
}
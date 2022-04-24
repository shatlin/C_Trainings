struct x1
{
  int x;
};

typedef struct
{
  int x;
}x2;

main()
{
	struct x1 a;
	struct x2 b;
   a.x=5;
   b.x=10;
   printf("%d %d",a.x,b.x);
}
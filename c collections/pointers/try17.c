void main() 
{ 
float a=12.5; 
float *b,*c; 
b=&a; 
c=b;
clrscr();
printf("\n%u \n%u \n%u ",&a,b,c);
printf("\n%f\n%f\n%f\n%f\n%f",a,*(&a),*&a,*b,*c);
getch();
}
void main() 
{ 
 int d=0; 
union 
{ 
unsigned char  i :  4; 
}n, j; 
clrscr(); 
for( ; d<26;d++) 
{ 
n.i=d; 
printf("%d  " ,n.i); 
getch(); 
} 
} 


#include<iostream.h>
#include<dos.h>
#include<string.h>
#include<conio.h>
void main()
{
clrscr();
int stud[5][2]=
		{
		 {1234,56},
		 {1212,33},
		 {1432,22},
		 {132,45},
		 {1203,45}		 };
for(int i=0;i<=4;i++)
for(int j=0;j<=1;j++)
cout<<"address of  "<<i<<" 1-D array"<<stud[i]<<endl;
cout<<"*(stud+2) = "<<*(stud+2)<<endl;
					//stud[2]=*(stud+2)
					//=>**(stud+2)will give the element 1432.
cout<<"*(stud+2) "<<*(stud+2)<<endl;	//address of 1432
cout<<"stud+2    "<<stud+2<<endl;	//base address of 1-th 1-D array.
					//both are same.
cout<<**(stud+2)<<endl;			//stud+2=base address of 1-th 1-D.
					//=>**(stud+2)gives 1432.

cout<<**stud+2;				//**stud=1234 =>**stud+2=1236

cout<<"stud[2]    "<<stud[2]<<endl;	//address
cout<<"*stud[2]   "<<*stud[2]<<endl;	//value
cout<<"*(*stud+2) "<<*(*stud+2)<<endl;	//replacing stud[2] with *(stud+2);
cout<<"stud[2]+1   " <<*(stud[2]+1)<<endl;
cout<<"*(*stud+2)+1  "<<*(*(stud+2)+1)<<endl;
getch();
}
#include<iostream.h>
#include<conio.h>
int stu[5] 	    =    {24,34,12,44,56};
int stud[5][2]      =
		    {
			 {1234,56},{1212,33},{1434,80},{1312,78},{1203,75}
		    };

int stude[3][4][2] ={
			 {
			  {2,4},{7,8},{3,4},{5,6}
			 },

			 {
			  {7,6},{5,3},{3,4},{2,3}
			 },

			 {
			   {8,9},{7,2},{3,4},{5,1},
			 }
		    };


void main()
{
	clrscr();
	cout<<"INDEX ACCESS\n";
	cout<<"the elements in the 1-D array are\n";

 for(int i=0;i<5;i++)

	cout<<"\t"<<stu[i];
	cout<<endl;
	cout<<" the elements in the 2-D array are\n";
	for(int j=0;j<5;j++)
	{
		cout<<"\t";
		for(int k=0;k<2;k++)
			cout<<stud[j][k]<<"  ";
		cout<<endl;
	}
	cout<<"the elements in the 3-D array are";

 for(int l=0;l<3;l++)
 {
	cout<<endl;
	for(int m=0;m<4;m++)
	{
		cout<<endl<<"\t";
		for(int n=0;n<2;n++)
			cout<<stude[l][m][n]<<"  ";
	}
}

getch();
clrscr();
cout<<"POINTER ACCESS\n";

	int *ja,*jc,*js;
	ja=stu;
	jc=*stud;
	js=**stude;
cout<<"the first array is\n";
	for(int as=0;as<5;as++,ja++)
	cout<<"\t"<<*ja;
cout<<"\nthe second array is\n";
	for (int tt=0;tt<10;tt++,jc++)
	cout<<"  "<<*jc;
cout<<"\nthe third array is \n";
	for(int q=0;q<24;q++,js++)
	cout<<*js<<"  ";

getch();
clrscr();
cout<<"stu          "<<stu<<endl;    //base address of the entire array
cout<<"stud         "<<stud<<endl;   //base address         ,,
cout<<"stude        "<<stude<<endl;  //base address         ,,
cout<<"stu[0]       "<<stu[0]<<endl; //gives the zeroth element which is a
				     //value (1)
cout<<"stud[0]      "<<stud[0]<<endl;//gives the address of
				      // of the zeroth 1-d array
cout<<"stude[0]     "<<stude[0]<<endl;//gives the address of the
				      //zeroth 2-d array
for(int t=0;t<5;t++)
cout<<"aaa"<<stud+t<<endl;
getch();

}
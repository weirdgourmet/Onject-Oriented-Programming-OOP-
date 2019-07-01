/*
Author:weirdgourmet
Title:File Handling
 
*/


#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main()
{
	char name[100], ph_no[100];
	char n[100], m[100];
	ofstream outf("phn_direct.txt");
	char ch;
	int c=0;
	do{  
		cout<<"Enter the name"<<endl;    //writing data into file
		cin>>name;
		cout<<"Enter the phone no"<<endl;
		cin>>ph_no;

		outf<<name<<"\t"<<ph_no<<endl;
		c++;
		cout<<"Do u want to continue?y/n"<<endl;
		cin>>ch;
	}while(ch=='y');
	outf.close();

	ifstream inf;
	inf.open("phn_direct.txt");
	cout<<"Name:"<<"\t\t\t"<<"Number"<<endl;
	for(int i=0; i<c; i++)
	{
		inf>>name>>ph_no;
		cout<<name<<"\t\t\t"<<ph_no<<endl;
	}
	inf.close();

	ifstream obj;
	obj.open("phn_direct.txt");
	int choice;
	cout<<"Enter your choice:"<<endl;
	cout<<"1.Determine the telephone number of person"<<endl;
	cout<<"2.Determine the name if telephone number is known"<<endl;
	cout<<"3.Update the telephone number"<<endl;
	cin>>choice;
	switch(choice)
	{
	case 1:
	{
		cout<<"Enter name to find number"<<endl; 
		cin>>n;
		again1:
		obj>>name;
		if(!strcmp(name, n))
		{
			obj.getline(ph_no, 100);
			cout<<name<<"\t\t\t"<<ph_no<<endl;
		}
		else
		{
			if(obj.eof()!=0)
				cout<<"Sorry your input is not found"<<endl;
			else
				goto again1;
		}
		break;
	}
	case 2:
	{
		cout<<"Enter the mobile no to find name"<<endl;
		cin>>n;
		again2:
                obj>>name;
		obj>>ph_no;
		if(!strcmp(ph_no, n))
		{
			cout<<name<<"\t\t\t"<<ph_no<<endl;
		}
		else
		{
			if(obj.eof()!=0)
				cout<<"Sorry your input is not found"<<endl;
			else
				goto again2;
		}
		break;
	}
	case 3:
	{
       ofstream obj2("Modified.txt");
       cout<<"Enter the name whose no. have to change"<<endl;
       cin>>n;
       again3:
	   obj>>name>>ph_no;
	   if(!strcmp(name, n))
	   {
		   cout<<"Enter the changed mobile no"<<endl;
		   cin>>m;

		   obj2<<name<<"\t\t\t"<<m;
		   obj2<<endl;

		do
		   {
			   obj>>name>>ph_no;

			   obj2<<name<<"\t\t\t"<<ph_no<<endl;
			   obj2<<endl;
		   } while(obj.eof()!=0);

	   }
	   else{
		   if(obj.eof()!=0)
		   {
			   cout<<"Sorry input is not found"<<endl;
		   }
		   else
		   {

			   obj2<<name<<"\t\t\t"<<ph_no<<endl;
			   obj2<<endl;
			   goto again3;
		   }
	   }
       break;
	}
	default:
		cout<<"Invalid choice"<<endl;
		break;
	}
	return 0;
}


OUTPUT:
Enter the name
MAdhura
Enter the phone no
23654
Do u want to continue?y/n
y
Enter the name
Juil
Enter the phone no
6543
Do u want to continue?y/n
y
Enter the name
prag
Enter the phone no
7654
Do u want to continue?y/n
n
Name:			Number
MAdhura			23654
Juil			6543
prag			7654
Enter your choice:
1.Determine the telephone number of person
2.Determine the name if telephone number is known
3.Update the telephone number
2
Enter the mobile no to find name
6543
Juil			6543




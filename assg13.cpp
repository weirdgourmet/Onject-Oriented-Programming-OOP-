/*
Author:weirdgourmet
Title:Inheritance

*/

#include<iostream>
using namespace std;

class personal
{
protected:
	string name;
	string address;
public:
	void getdata_per();

};

class professional
{
protected:
	string emailid;
	int phn_no;
public:
	void getdata_pro();

};

class academic:public personal,public professional
{

	string institute;
	string branch;

public:
	void getdata_acad();
	void display();

};

void personal::getdata_per()
{
cout<<"Enter the name"<<endl;
cin>>name;
cout<<"Enter the address"<<endl;
cin>>address;
}

void professional::getdata_pro()
{
	cout<<"Enter the ph no"<<endl;
	cin>>phn_no;
	cout<<"Enter the email-id"<<endl;
	cin>>emailid;
}

void academic::getdata_acad()
{
	cout<<"Enter the institute"<<endl;
		cin>>institute;
		cout<<"Enter the branch"<<endl;
		cin>>branch;

}

void academic::display()
{
cout<<"\n Name:"<<name;
cout<<"\n Address:"<<address;
cout<<"\n Phone no:"<<phn_no;
cout<<"\n Email-id:"<<emailid;
cout<<"\n Institute:"<<institute;
cout<<"\n Branch:"<<branch;

}
int main()
{
academic *a;
int n,k=0;
cout<<"Enter the total no. of entries"<<endl;
cin>>n;
a=new academic[n];
for(int i=0;i<n;i++)
{cout<<endl;
a[i].getdata_per();
a[i].getdata_pro();
a[i].getdata_acad();
}
for(int i=0;i<n;i++)
{
	cout<<endl<<"Entry "<<++k<<":"<<endl;
	a[i].display();
}


return 0;
}

OUTPUT:
Enter the total no. of entries
3

Enter the name
Mahura
Enter the address
uytr
Enter the ph no
6543
Enter the email-id
iuytre
Enter the institute
mnhbgfd
Enter the branch
uytr

Enter the name
uytre
Enter the address
iuytrew
Enter the ph no
87654
Enter the email-id
lkjhgf
Enter the institute
oiujhg
Enter the branch
ijhgf

Enter the name
iuytfr
Enter the address
uytr
Enter the ph no
7654
Enter the email-id
uytr
Enter the institute
jhg
Enter the branch
uygtf

Entry 1:

 Name:Mahura
 Address:uytr
 Phone no:6543
 Email-id:iuytre
 Institute:mnhbgfd
 Branch:uytr
Entry 2:

 Name:uytre
 Address:iuytrew
 Phone no:87654
 Email-id:lkjhgf
 Institute:oiujhg
 Branch:ijhgf
Entry 3:

 Name:iuytfr
 Address:uytr
 Phone no:7654
 Email-id:uytr
 Institute:jhg
 Branch:uygtf

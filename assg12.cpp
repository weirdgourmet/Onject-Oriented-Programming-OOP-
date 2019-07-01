/*
Author:weirdgourmet

*/

#include<iostream>
#include<string.h>
using namespace std;


class book{

	int price;
	string publisher;

public:
	int stk_pos;
	string author;
	string title;
	book()
	{
		author='\0';
		title='\0';
		publisher='\0';
		price=0;
		stk_pos=0;
	}

	void getdata();



};


void book::getdata()
{
cout<<"Author: "<<endl;
cin>>author;
cout<<"Title: "<<endl;
cin>>title;
cout<<"Publisher: "<<endl;
cin>>publisher;
cout<<"Price: "<<endl;
cin>>price;
cout<<"Stock-position: "<<endl;
cin>>stk_pos;

}


int main()
{
	int i;
	book *b;
	int num;
	string nm,athr;
	cout<<"MAKE ENTRIES FOR DATABASE:"<<endl;
	cout<<"Enter the no. of entries: "<<endl;
	cin>>num;
	b=new book[num];
	for( i=0;i<num;i++)
		b[i].getdata();
int final=i;
	cout<<" \n Dear Customer,enter the book name and author's name:"<<endl;
	cin>>nm>>athr;
	int flag=0;
	int copies,k;
	for(int j=0;j<final;j++)
	{
		int c1= (b[j].author).compare(athr);
		int c2=  (b[j].title).compare(nm);
		if(c1==0 && c2==0)
		{
			 k=j;
			flag =1;
			break;
		}

	}

	if(flag==0)
		cout<<"The entered entry is not available"<<endl;

	if(flag==1)
	{
		cout<<"Enter the no. of copies required "<<endl;
		cin>>copies;
		if(copies>b[k].stk_pos)
		cout<<"Sorry! Required no. of books not in stock"<<endl;
		else
			cout<<"Available in stock"<<endl;

	}



return 0;

	}


OUTPUT:

MAKE ENTRIES FOR DATABASE:
Enter the no. of entries: 
2
Author: 
jkrowling
Title: 
harrypotter
Publisher: 
jaico
Price: 
678
Stock-position: 
5
Author: 
rlstine
Title: 
goosebumps
Publisher: 
junglee
Price: 
345
Stock-position: 
5
 
 Dear Customer,enter the book name and author's name:
rlstine
goosebumps
The entered entry is not available


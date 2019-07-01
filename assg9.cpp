/*
Author:weirdgourmet

*/
#include<iostream>
using namespace std;

class publication
{
   protected:
	string title;
	float price;
  public:
      publication()
   {
title='\0';
price=0;
}

 };

class book:public publication
{

int pagecount;

public:
	book()
{
pagecount = 0;}

void get_bk();
void display_bk();


};


class tape:public publication
{

float play_time;

public:
	tape()
{

		 play_time=0;
}

void get_time();
void display_time();

};

void book::get_bk()
{
cout<<endl<<"Enter the book name "<<endl;
cin>>title;
cout<<endl<<"Enter the price"<<endl;
cin>>price;
cout<<endl<<"Enter the pages"<<endl;
cin>>pagecount;

try{
  if(price<0||price>10000)
	  throw 1;
  else if(pagecount>10000)
	  throw 2;
  else if(title.length()==0)
	  throw 3;
}
  catch(int)
  {
	  price=0;
	  pagecount=0;
	  title='\0';
  }

}

void book::display_bk()
{
cout<<"Book name:"<<title<<endl;
cout<<"Price :"<<price<<endl;
cout<<"No. of pages :"<<pagecount<<endl;
}

void tape::get_time()
{
	cout<<endl<<"Enter the tape name "<<endl;
	cin>>title;
	cout<<endl<<"Enter the price"<<endl;
	cin>>price;
	cout<<endl<<"Enter the playing time in minutes"<<endl;
	cin>>play_time;

	try{
	  if(price<0||price>10000)
		  throw 1;
	  else if(play_time>1000)
		  throw 2;
	  else if(title.length()==0)
		  throw 3;
	}
	  catch(int)
	  {
		  price=0;
		  play_time=0;
		  title='\0';
	  }
}

void tape::display_time()
{
	cout<<"Tape name :"<<title<<endl;
	cout<<"Price :"<<price<<endl;
	cout<<"Playing time :"<< play_time<<endl;

}

int main()
{

	book obj;
	tape obj1;
	char choice,ch;


do{
	cout<<"Enter b to make book-entry"<<endl
		<<"Enter t to make tape-entry"<<endl;
	cin>>choice;


	switch(choice)
	{
	case 'b':

		obj.get_bk();
		obj.display_bk();
		break;
	case 't':
		obj1.get_time();
		obj1.display_time();
		break;
	}
cout<<"Do you want to continue ?"<<endl;
cin>>ch;

}while(ch=='y');

return 0;
}

OUTPUT:
Enter b to make book-entry
Enter t to make tape-entry
b

Enter the book name 
alice

Enter the price
34

Enter the pages
23
Book name:alice
Price :34
No. of pages :23
Do you want to continue ?
y
Enter b to make book-entry
Enter t to make tape-entry
t

Enter the tape name 
linkinpark

Enter the price
45

Enter the playing time in minutes
34
Tape name :linkinpark
Price :45
Playing time :34
Do you want to continue ?
n







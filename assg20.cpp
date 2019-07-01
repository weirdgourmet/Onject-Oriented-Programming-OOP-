/*
Author:weirdgourmet
Title:Linked List
 
*/


#include<iostream>
#include<list>
using namespace std;

class list1{

list<int> linklist;
list<int> ::iterator ptr;

public:
 void empty();
 void insert();
 void insert_last();
 void del();
 void sort();
 void display();
 void reverse();

};

void list1::empty()
{
if(linklist.empty())
	cout<<"List is empty \n";
else
	cout<<"List is not empty \n";


}

void list1::insert()
{
int n;
cout<<"Enter the no. of elements \n";
cin>>n;
int num;
for(int i=0;i<n;i++)
{
cout<<"Enter the data \n";
cin>>num;
linklist.push_front(num);
}


}

void list1::insert_last()
{
cout<<"Enter the element at last \n";
int num;
cin>>num;
linklist.push_back(num);

}

void list1::del()
{
int num;
cout<<"Enter the element you wish to delete \n";
cin>>num;
linklist.remove(num);

}

void list1::sort()
{
cout<<"Sorted list \n";
linklist.sort();
}

void list1::display()
{
ptr=linklist.begin();
for(unsigned int i=0;i<linklist.size();i++)
{
	cout<<" "<<*ptr;
	ptr++;
}
}

void list1::reverse()
{
cout<<"\n The reverse list is \n";
linklist.reverse();

}

int main()
{
list1 l;
cout<<"Insert function \n";
l.insert();
l.insert_last();
l.del();
l.sort();
l.display();
l.reverse();
l.display();

return 0;

}

OUTPUT:
Insert function 
Enter the no. of elements 
5
Enter the data 
3
Enter the data 
4
Enter the data 
6
Enter the data 
4
Enter the data 
3
Enter the element at last 
90
Enter the element you wish to delete 
4
Sorted list 
 3 3 6 90
 The reverse list is 
 90 6 3 3

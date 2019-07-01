/*
Author:weirdgourmet

*/
#include<iostream>
using namespace std;
class assg
{
int a,b,res;
char c;

public:
void getdata();
void choice();
void dis();
};

void assg::getdata()
{
cout<<"Enter first no,operator and second no"<<endl;
cin>>a>>c>>b;
cout<<a<<c<<b;
}

void assg::choice()
{
switch(c)
{
case '+':
res=a+b;
break;
case '-':
res=a-b;
break;
case '*':
res=a*b;
break;
case '/':
res=a/b;
break;

}


}

void assg::dis()
{
cout<<res<<endl;
}

int main()
{
int  i;
assg a;
char d;

do{

a.getdata();
cout<<endl;
a.choice();
cout<<endl;

a.dis();





cout<<"Do you want to continue?"<<endl;
cin>>d;



}while(d=='y');
return 0;

}

OUTPUT:
Enter first no,operator and second no
3+4
3+4

7
Do you want to continue?
y 
Enter first no,operator and second no
3-2
3-2

1
Do you want to continue?
y
Enter first no,operator and second no
7*8
7*8

56
Do you want to continue?
y
Enter first no,operator and second no
9/3
9/3

3
Do you want to continue?
n


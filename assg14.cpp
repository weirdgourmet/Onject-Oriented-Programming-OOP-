/*
Author:weirdgourmet
*/

#include<iostream>
using namespace std;
class info{
int age;
int income;
string city;
int vehicle;

public:
  void getdata();


};


void info::getdata()
{


try
{
	cout<<"Enter age"<<endl;
	cin>>age;
	if(age<18 || age>55) throw age;
}

catch(int age)
{
cout<<	"Exception caught"<<endl;
}
try{
cout<<"Enter income"<<endl;
	cin>>income;
 if(income<(50000) || income>(100000)) throw income;
}

catch(int income)
{
cout<<	"Exception caught"<<endl;
}
try{
cout<<"Enter city"<<endl;
cin>>city;
if(city !="pune"&&city !="mumbai" &&city !="bangalore"&& city !="chennai") throw (city);
}
catch(string c )
{
cout<<	"Exception caught"<<endl;
}
try{
cout<<"Enter vehicle(no. of wheels)"<<endl;
	cin>>vehicle;
 if(vehicle != 4) throw vehicle;

}


catch(int vehicle)
{
cout<<	"Exception caught"<<endl;
}





cout<<"That's it!"<<endl;

}
int main()
{

info i;
i.getdata();
return 0;

}


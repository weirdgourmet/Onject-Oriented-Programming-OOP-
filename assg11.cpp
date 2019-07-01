/*
Author:weirdgourmet
*/


#include<iostream>
using namespace std;

class convert
		{
		protected:
	       float val1;
	       float val2;

		public:
	       float init()
	   	{
	   		cout<<"Enter the value you wish to convert"<<endl;
	   		cin>>val1;

	   		return val1;
	   	}
	       float getcov()
	       {
	      	  cout<<"The final value  is"<<endl;
	      	   cout<<val2;
	        }
	        virtual float compute() { }


		};


class temp: public convert
{
public:

  float compute();

};

float temp::compute()
{
val2 =32 + val1*5/9;
return val2;
}


class length: public convert
{
public:

  float compute();

};

float length::compute()
{
val2 = val1*1.6;
return val2;

}

int main()
{
convert *c ;
temp t;
c = &t;
cout<<"Enter the temp in  celsius"<<endl;
c->init();
c->compute();
cout<<" Temp in Fahrenheit"<<endl;
c->getcov();

convert *c1;
length l;
c1=&l;

cout<<"Enter the length in  miles"<<endl;
c->init();
c->compute();
cout<<"Length in km "<<endl;
c->getcov();

return 0;

}

OUTPUT:
Enter the temp in  celsius
Enter the value you wish to convert
4
 Temp in Fahrenheit
The final value  is
34.2222
Enter the length in  miles
Enter the value you wish to convert
45
Length in km 
The final value  is
57






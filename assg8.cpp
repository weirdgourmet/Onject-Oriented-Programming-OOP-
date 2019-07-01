/*
Author:weirdgourmet
*/
#include<iostream>
using namespace std;

class rational{

int n1,n2;

  public:
       int gc;
       rational()
       {
    	   n1=0;
    	   n2=1;
       }
       rational(int num,int deno){
    	   n1=num;
    	   n2=deno;
    	   if(n2<=0)
    		   cout<<"Sorry! Check your denominator"<<endl;


       }
       void putdata();
       void gcd();
       friend rational operator+(rational ,rational);
       friend rational operator-(rational ,rational);
       friend rational operator*(rational ,rational);
       friend rational operator/(rational ,rational);
       int operator ==(rational);
       int operator >(rational);
       int operator <(rational);
};




void rational:: putdata()
{
if(n1==0)
{
	cout<<"0";
return ;}

cout<<n1<<"/"<<n2;


}

void rational::gcd()
{
int a=n1,b=n2;
while(a!=b)
{
	if(a==0)
	{
		gc=1;
		return;
	}
if(a>b)
   a=a-b;
else
   b=b-a;

}
gc=a;

n1=n1/gc;
n2=n2/gc;

}


rational operator+(rational r1 ,rational r2)
{
rational temp;
 temp.n1=r1.n1*r2.n2 + r1.n2*r2.n1;
temp.n2=r1.n2*r2.n2;

return temp;

}

rational operator-(rational r1 ,rational r2)
{
rational temp;
 temp.n1=r1.n1*r2.n2 - r1.n2*r2.n1;
temp.n2=r1.n2*r2.n2;

return temp;

}


rational operator*(rational r1 ,rational r2)
{
rational temp;
 temp.n1=r1.n1*r2.n1;
temp.n2=r1.n2*r2.n2;

return temp;

}

rational operator/(rational r1 ,rational r2)
{
rational temp;
 temp.n1=r1.n1*r2.n2;
temp.n2=r1.n2*r2.n1;

return temp;
}

int rational::operator ==(rational r)
		{
	float f,g;
	f=(float)n1/n2;
	g=(float)r.n1/r.n2;
	if(f==g)
		return 1;
	else return 0;
		}

int rational::operator >(rational r)
		{
	float f,g;
	f=(float)n1/n2;
	g=(float)r.n1/r.n2;
	if(f>g)
		return 1;
	else return 0;
		}

int rational::operator <(rational r)
		{
	float f,g;
	f=(float)n1/n2;
	g=(float)r.n1/r.n2;
	if(f<g)
		return 1;
	else return 0;
		}

int main()
{
	int nume,den;
rational r_add,r_sub,r_mul,r_div;
cout<<"Enter the first fraction"<<endl;
cout<<"Enter the numerator"<<endl;
cin>>nume;
cout<<"Enter the denominator"<<endl;
cin>>den;
rational r1(nume,den);
cout<<"a =";
r1.putdata();
r1.gcd();
if(r1.gc!=1)
{
 cout<<" = ";
r1.putdata();
}

cout<<endl<<"Enter the second fraction"<<endl;
cout<<"Enter the numerator"<<endl;
cin>>nume;
cout<<"Enter the denominator"<<endl;
cin>>den;
rational r2(nume,den);
cout<<"b =";
r2.putdata();
r2.gcd();
if(r2.gc!=1)
{
 cout<<" = ";
r2.putdata();
}
int choice;
char ch;
do{

	cout<<endl<<"Enter a choice"<<endl;
	cout<<"1.Addition"<<endl;
	cout<<"2.Subtraction"<<endl;
	cout<<"3.Multiplication"<<endl;
	cout<<"4.Division"<<endl;
	cout<<"5.Comparison"<<endl;
	cin>>choice;

	switch(choice)
	{

	case 1:
		r_add =r1 +r2;
		cout<<endl<<"Addition =";
		r_add.putdata();
		r_add.gcd();
		if(r_add.gc!=1)
		{
		 cout<<" = ";
		r_add.putdata();
		}
		break;

	case 2:
		r_sub =r1-r2;
		cout<<endl<<"Subtraction =";
		r_sub.putdata();
		r_sub.gcd();
		if(r_sub.gc!=1)
		{
		 cout<<" = ";
		r_sub.putdata();
		}
		break;

	case 3:
		r_mul =r1*r2;
		cout<<endl<<"Multiplication =";
		r_mul.putdata();
		r_mul.gcd();
		if(r_mul.gc!=1)
		{
		 cout<<" = ";
		r_mul.putdata();
		}
		break;

	case 4:

		r_div =r1/r2;
		cout<<endl<<"Division =";
		r_div.putdata();
		r_div.gcd();
		if(r_div.gc!=1)
		{
		 cout<<" = ";
		r_div.putdata();
		}
		break;

	case 5:
		if(r1==r2)
			cout<<endl<<"Equal Fractions"<<endl;
		else if(r1<r2)
			cout<<" \n b is greater than a"<<endl;
		else
			cout<<" \n a is greater than b"<<endl;
		break;
	}
	cout<<endl<<"Do you want to continue?"<<endl;
	cin>>ch;
}while(ch=='y');

return 0;
}

OUTPUT:
Enter the first fraction
Enter the numerator
3
Enter the denominator
6
a =3/6 = 1/2
Enter the second fraction
Enter the numerator
4
Enter the denominator
20
b =4/20 = 1/5
Enter a choice
1.Addition
2.Subtraction
3.Multiplication
4.Division
5.Comparison
3

Multiplication =1/10
Do you want to continue?
y

Enter a choice
1.Addition
2.Subtraction
3.Multiplication
4.Division
5.Comparison
1

Addition =7/10
Do you want to continue?
y

Enter a choice
1.Addition
2.Subtraction
3.Multiplication
4.Division
5.Comparison
2

Subtraction =3/10
Do you want to continue?
4
pawar@me-ubuntu-hp-notebook:~$ ./a.out
Enter the first fraction
Enter the numerator
3
Enter the denominator
6
a =3/6 = 1/2
Enter the second fraction
Enter the numerator
4
Enter the denominator
20
b =4/20 = 1/5
Enter a choice
1.Addition
2.Subtraction
3.Multiplication
4.Division
5.Comparison
3

Multiplication =1/10
Do you want to continue?
y

Enter a choice
1.Addition
2.Subtraction
3.Multiplication
4.Division
5.Comparison
4

Division =5/2
Do you want to continue?
y

Enter a choice
1.Addition
2.Subtraction
3.Multiplication
4.Division
5.Comparison
5
 
 a is greater than b

Do you want to continue?
n





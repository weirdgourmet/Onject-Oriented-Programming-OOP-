/*
Author:weirdgourmet
Title:Additon of binary numbers using stack
 
*/


#include<iostream>
#include<stack>
#include<math.h>
int const MAX=50;
using namespace std;

class stk{
	stack<int>s;
	stack<int>t;

    int a[MAX],ans[MAX],temp[MAX];
    int num;
public:
    int count=0,i=0,k=0,l=0;
	void getdata();
	void put_stack(int diff);
	void putdata();
    void add(stk &s1,stk &s2);
    void dec();
    void dis_arr()
    {
    	for(int i=l-1;i>=0;i--)
    		cout<<" "<<a[i];
    }

};

void stk::getdata()
{
int num;
cin>>num;

while(num!=0)
{

	count++;
a[i]=num%2;
num=num/2;
i++;

}
}

void stk::put_stack(int diff)  //Making the bit length of 2 nos equal
{

while(diff!=0)
{
s.push(0);

diff--;
}

int j=i-1;

while(j!=-1)
{
s.push(a[j]);
temp[l]=a[j];
l++;
j--;

}

}
void stk::putdata()
{

while(!s.empty())
{
cout<<" "<<s.top();
s.pop();
}
}

void stk::add(stk & s1 ,stk & s2)
{

int bit;
int carry =0;
while(!s1.s.empty()|| !s2.s.empty())
 {
bit=s1.s.top()+ s2.s.top()+carry;

 carry=0;
if(bit==0 || bit==1)
	t.push(bit);

if(bit==2)
{
t.push(0);
carry=1;
}

if(bit==3)
{
t.push(1);
carry=1;
}
s1.s.pop();
s2.s.pop();
 }

if(bit==3||bit==2)
	t.push(1);

while(!t.empty())
{
ans[k++]=t.top();
cout<<" "<<t.top();
t.pop();
}

}

void stk::dec()
{
	int sum=0;cout<<endl;
	int p=0;
	for(int i=k-1;i>=0;i--)
	{

		 sum=sum + pow(2,p)*(ans[i]);
		 p++;
	}
cout<<" \n Answer :"<<sum;
}

int main()
{
stk s1 ,s2 ,s3;
int diff;
int flag;
cout<<"Enter num 1 \n";
s1.getdata();

cout<<"Enter num 2 \n";
s2.getdata();

if(s1.count!=s2.count)
{
	if(s1.count>s2.count)
		{diff=s1.count-s2.count;
		flag=1;
		}
	else
		{diff=s2.count-s1.count;
		flag=2;
		}
}

if(flag==1)
{
s2.put_stack(diff);
s1.put_stack(0);}
else if(flag==2)
{	s1.put_stack(diff);
    s2.put_stack(0);
}
if(s1.count==s2.count)
	{s1.put_stack(0);
   s2.put_stack(0);
	}
cout<<"Num 1 =";
s1.dis_arr();
  cout<<endl;
  cout<<"Num 2 =";
  s2.dis_arr();
  cout<<endl;
  cout<<"Result =";
  s3.add(s1,s2);
s3.dec();




return 0;

}

OUTPUT:
Enter num 1 
34
Enter num 2 
45
Num 1 = 1 0 0 0 1 0
Num 2 = 1 0 1 1 0 1
Result = 1 0 0 1 1 1 1
 
 Answer :79

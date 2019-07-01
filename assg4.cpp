/*
Author:weirdgourmet

*/
#include<iostream>
using namespace std;
class cpparray
{
int a[10];
int s=sizeof(a)/sizeof(int);
int b[10];
int size;
 int i,n;
public:
void  range();
  void operator=(cpparray & );
void size0();
};

void cpparray::range()
{
cout<<"Enter the size of array"<<endl;
cin>>size;
cout<<"Enter the elements of array"<<endl;
if(size>s)
{


for(i=0;i<size;i++)
{
if(i==s)
{
cout<<" Out of bounds now"<<endl;
break;
}
else
cin>>a[i];
}
cout<<"Displaying array:"<<endl;
for(i=0;i<s;i++)
cout<<" "<<a[i];
}
else
{	for(i=0;i<size;i++)
        cin>>a[i];
for(i=0;i<size;i++)
    cout<<" "<<a[i];

}

}




void cpparray :: operator=(cpparray & c){
cpparray d;

   if(c.size>s){
for(i=0;i<s;i++)
d.b[i]=c.a[i];
for(i=0;i<s;i++)
cout<<" "<<d.b[i];
    }
    else
    {
        for(i=0;i<c.size;i++)
        d.b[i]=c.a[i];
        for(i=0;i<c.size;i++)
        cout<<" "<<d.b[i];

    }

}

void cpparray::size0()
{
if(size>s)
{
int j=sizeof(a);
cout<<j;
}
else
{
cout<<size*sizeof(int);
}


}

int main()
{
cpparray c ,d;

c.range();
cout<<endl;
cout<<"Copied array:"<<endl;
d=c;
cout<<endl;
cout<<"Size :"<<endl;
c.size0();

return 0;

}

OUTPUT:
Enter the size of array
16
Enter the elements of array
1
2
3
4
5
6
7
8
9
0
 Out of bounds now
Displaying array:
 1 2 3 4 5 6 7 8 9 0
Copied array:
 1 2 3 4 5 6 7 8 9 0
Size :
40

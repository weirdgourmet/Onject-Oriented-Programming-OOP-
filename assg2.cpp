/*
Author:weirdgourmet
Assg no:2
Title:Addition and Multiplication of complex nos.

*/#include<iostream>
using namespace std;
class comp
{
float x;
float y;
 public:
   comp(){}
   comp(float a)
   {
   x=y=a;
   }
comp(float a ,float b)
{
x=a; y=b;
}
friend istream & operator >>(istream & ,comp & );
friend ostream & operator<<(ostream &,comp &);
friend comp  operator+(comp ,comp);
friend  comp operator*(comp,comp);

};


 istream & operator >>(istream &i ,comp &c )
 {
 cout<<"Enter a complex no:"<<endl;
 i>>c.x>>c.y;
 return i;
 }
 
  ostream & operator <<(ostream &o,comp &c )
 {
 o<<"The complex no. is:"<<endl;
 o<<c.x<<"+ j"<<c.y<<endl;
 return o;
 }
 
 
 comp  operator+(comp c1 ,comp c2)
 {
 comp temp;
 temp.x=c1.x+c2.x;
 temp.y=c1.y+c2.y;
 return temp;
 
 }
  comp  operator*(comp c1 ,comp c2)
 {
 comp temp;
 temp.x=c1.x*c2.x -c1.y*c2.y;
 temp.y=c1.x*c2.y + c2.x*c1.y;
 return temp;
 
 }
 
 
 
 int main()
 {
 comp c1,c2,c3;
 cin>>c1;
 cout<<c1;
 cin>>c2;
 cout<<c2;
 cout<<"Addition:"<<endl;
 c3=c1 + c2;
 cout<<c3;
  cout<<"Multiplication:"<<endl;
 c3=c1 * c2;
 cout<<c3;
 return 0;
 
 }

OUTPUT:
Enter a complex no:
4
3
The complex no. is:
4+ j3
Enter a complex no:
1
5
The complex no. is:
1+ j5
Addition:
The complex no. is:
5+ j8
Multiplication:
The complex no. is:
-11+ j23



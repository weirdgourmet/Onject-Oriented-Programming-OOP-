/*
Author:weirdgourmet
Title:Quadratic Equation

*/
#include<iostream>
#include<math.h>
using namespace std;
class quad
{
int a,b,c ,d,p,res,x1,x2;

 public:
   quad(){}
  
quad(int x ,int y,int z)
{
a=x; b=y;c=z;
}
friend istream & operator >>(istream & ,quad & );
friend ostream & operator<<(ostream &,quad &);
friend quad  operator+(quad ,quad);
void eval();
void sol();

};
 istream & operator >>(istream &i ,quad &q )

 {
 cout<<"Enter the co-effecients"<<endl;
 i>>q.a>>q.b>>q.c;
 return i;
 }
 
  ostream & operator <<(ostream &o,quad &q )
 {
 o<<"The equation  is:"<<endl;
 o<<q.a<<"x^2 +"<<q.b<<"x"<<" +"<<q.c<<endl;
 return o;
 }
 
 
 quad  operator+(quad q1 ,quad q2)
 {
 quad temp;
 temp.a=q1.a+q2.a;
 temp.b=q1.b+q2.b;
  temp.c=q1.c+q2.c;
 return temp;
 
 }
 
 void quad::eval()
 {
 cout<<"Enter a value for x"<<endl;
 cin>>p;
 res=a*p*p +b*p+ c;
 cout<<"Answer"<<res<<endl;
 
 
 }
 
 void quad::sol()
 {
 d=b*b -4*a*c;
 if(d<0)
 cout<<"Solution is not real"<<endl;
 
 x1= (-b+pow(d,0.5))/(2*a);
 
 x2= (-b-pow(d,0.5))/(2*a);
 cout<<"The roots of x are"<<x1<<"  "<<x2<<endl;
 
 }
 
 
 int main()
 {
 quad q1,q2,q3;
 cin>>q1;
 cout<<q1;
 cin>>q2;
 cout<<q2;
 cout<<"Addition:"<<endl;
 q3=q1+q2;
 cout<<q3;
 q1.eval();
 q1.sol();
 return 0;
 
 }

OUTPUT:
Enter the co-effecients
1
-5
6
The equation  is:
1x^2 +-5x +6
Enter the co-effecients
1
1
1
The equation  is:
1x^2 +1x +1
Addition:
The equation  is:
2x^2 +-4x +7
Enter a value for x
3
Answer0
The roots of x are3  2

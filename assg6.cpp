/*
Author:weirdgourmet
*/
#include<iostream>
using namespace std;
class db{
string name;
int dob;
string bg;
string add;
long int tel;
long int drlc;
int roll;
int cls;
char div;
friend class stud;
static int count;
public:
void display();
 db( ){ name ="\0";           //default constructor
dob =0;
bg ='\0';
add ="Pune";
roll=0;
cls=0;
div='a';
tel=0;
drlc = 0;   }
 db( string s,int c,int e, char w,int d,string p,string q,long int y, long int z)     //parametrised constructor
 {
name = s;
roll=c;
cls=e;
div=w;
dob = d;
bg = p;
add = q;
tel= y;
drlc = z;
 }



db( db &x)     //copy constructor
 {
name = x.name;
dob = x.dob;
bg = x.bg;
add = x.add;
tel= x.tel;
drlc = x.drlc;

 }



~db()   //destructor
{
}

void display1()      //inline code function
{cout<<endl;
cout<<"Name : "<<this->name<<endl
<<"DOB:  "<<this->dob <<endl
<<"Blood group:   "<< this->bg <<endl
<<"Address :   "<<this->add <<endl
<<"Telephone  :"<< this->tel<<endl
<<"Driver's license :" <<this->drlc<<endl;
cout<<endl;
}


void getdata()
{cout<<"Enter the data"<<endl;
cout<<"Name :" <<endl;
cin>>name;
cout<<"DOB:  "<<endl;cin>>dob ;
cout<<"Blood group:   "<< endl;cin>>bg;
cout<<"Address :   "<<endl;cin>>add;
cout<<"Telephone  :"<<endl; cin>>tel;
cout<<"Driver's license :" <<endl;cin>>drlc;
}


static void showcount()
{
++count;
}
void ct()
{
   cout<<"Total entries are:"<<count<<endl;}


};
int db::count;
void db:: display()
{cout<<endl;
cout<<"Name : "<<name<<endl
<<"DOB:  "<<dob <<endl
<<"Blood group:   "<< bg <<endl
<<"Address :   "<<add <<endl
<<"Telephone  :"<< tel<<endl
<<"Driver's license :" <<drlc<<endl;

}


class stud    //friend class
{


public:

   void details(db& o)
   {
       cout<<" Roll no: " <<endl;
       cin>>o.roll ;
       cout<<"Class "<<endl;
       cin>>o.cls ;
       cout<<" Div : "<< endl;
       cin>>o.div ;
   }

void displays(db& o)
{cout<<"Roll no: "<<o.roll<<endl
   << "Class " <<o.cls<<endl
   << "Div : "<<o.div<<endl;}
};


int main()
{
db b;
b.display1();
cout<<endl;
db d("Madhura",12,5,'H',37,"b","ere",2258,2351862);  //parameterized constructor
db d1(d);
d1.display1();
db *s;
stud *s1;
int n;
cout<<"Enter the no. of students "<<endl;
cin>>n;
s=new db[n];
s1=new stud[n];
for(int i=0;i<n;i++)
{
   s[i].getdata();
   s1[i].details(s[i]);
   db::showcount();
}

for(int i=0;i<n;i++)
{
   cout<<"Entry "<<i+1<<endl;
s[i].display();
s1[i].displays(s[i]);
}

s->ct();
return 0;
delete s;
delete s1;
}
OUTPUT:
Name : 
DOB:  0
Blood group:   
Address :   Pune
Telephone  :0
Driver's license :0



Name : Madhura
DOB:  37
Blood group:   b
Address :   ere
Telephone  :2258
Driver's license :2351862

Enter the no. of students 
3
Enter the data
Name :
Madhura
DOB:  
10
Blood group:   
B+
Address :   
nashik
Telephone  :
23518363
Driver's license :
456789
 Roll no: 
2258
Class 
2
 Div : 
3
Enter the data
Name :
pragati
DOB:  
102
Blood group:   
A+
Address :   
dhuel
Telephone  :
456890
Driver's license :
12345678
 Roll no: 
2257
Class 
2
 Div : 
2
Enter the data
Name :
jui
DOB:  
32
Blood group:   
C-
Address :   
ytres
Telephone  :
6543
Driver's license :
65432
 Roll no: 
4433
Class 
3
 Div : 
3
Entry 1

Name : Madhura
DOB:  10
Blood group:   B+
Address :   nashik
Telephone  :23518363
Driver's license :456789
Roll no: 2258
Class 2
Div : 3
Entry 2

Name : pragati
DOB:  102
Blood group:   A+
Address :   dhuel
Telephone  :456890
Driver's license :12345678
Roll no: 2257
Class 2
Div : 2
Entry 3

Name : jui
DOB:  32
Blood group:   C-
Address :   ytres
Telephone  :6543
Driver's license :65432
Roll no: 4433
Class 3
Div : 3
Total entries are:3


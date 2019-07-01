/*
Author:weirdgourmet
Title:Command Line Arguments
*/


#include<iostream>
#include<fstream>
#include<string.h>
#include<cstdlib>

using namespace std;

int main(int argc , char*argv[])
{

if(argc<4)
{
cout<<"Insufficient number of arguments"<<endl;
exit(1);
}

string newdata,data;
cout<<"Replacing string "<<argv[1]<<" with string "<<argv[2]<<"  in the file "<<argv[3]<<endl;
fstream fin;
fin.open(argv[3],ios::in);
if(!fin)
{
cout<<"Error opening file."<<endl;
return 1;
}
cout<<"      CONTENTS OF FILE BEFORE REPLACEMENT      "<<endl;
while(fin)
{
getline(fin,data);
cout<<data<<endl;
}

fin.close();
fin.open(argv[3],ios::in);
newdata="";
if(!fin)
{
cout<<"Unable to open file"<<endl;
return 1;
}
//Replacing data of the file
while(fin)
{

getline(fin,data);

int a=(int)data.find(argv[1],0);
 while(a!=string::npos)
{
data.replace(a,strlen(argv[1]),argv[2]);
a=(int)data.find(argv[1],a+1);
}

newdata=newdata+data+"\n";
}

fin.close();
fin.open(argv[3],ios::out);

if(!fin)
{
cout<<"Error opening file"<<endl;
return 1;
}

fin<<newdata;
cout<<"Replacement successful"<<endl;
fin.close();
cout<<"      CONTENTS OF FILE AFTER REPLACEMENT      "<<endl;
fin.open(argv[3],ios::in);

if(!fin)
{
cout<<"Error opening file"<<endl;
return 1;
}

while(fin)
{
getline(fin,data);
cout<<data<<endl;
}

fin.close();

return 0;
}

Replacing string hello with string bye  in the file hi.txt
      CONTENTS OF FILE BEFORE REPLACEMENT      
hello world 
hello mars


Replacement successful
      CONTENTS OF FILE AFTER REPLACEMENT      
bye world 
bye mars


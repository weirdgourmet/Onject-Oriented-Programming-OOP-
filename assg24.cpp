/*weirdgourmet
Title:Searching & Sorting
 
*/

#include<iostream>
#include<algorithm>
using namespace std;

class db{

	string item_name;
	int cost;
	int quantity;
   static int count;
public:
	int item_code;
     void getdata();
     void putdata();


};
int db::count;

void db::getdata()
{

cout<<"Enter: \n";
cout<<"Item code: \n";
cin>>item_code;
cout<<"Item Name: \n";
cin>>item_name;
cout<<"Cost: \n";
cin>>cost;
cout<<"Quantity:\n";
cin>>quantity;

}
void db::putdata()
{
    cout<<endl;
    cout<<"Item no:"<<++count<<endl;
	cout<<"Item code: \n"<<item_code<<endl;
	cout<<"Item Name: \n"<<item_name<<endl;
	cout<<"Cost: \n"<<cost<<endl;
	cout<<"Quantity:\n"<<quantity<<endl;
}

int main()
{

db *data;
int n;
int i;
int *temp;
int *ptr;
int num;
cout<<"Enter the no. of entries \n";
cin>>n;
data= new db[n];
temp=new int[n];
for( i=0;i<n;i++)
	{data[i].getdata();
	temp[i]=data[i].item_code;

	}

sort(temp,temp+n);
int j;
for(int i=0;i<n;i++)
{
	for( j=0;j<n;j++)
	{
if(temp[i]==data[j].item_code)   //Displaying in ascending order of item code
{
data[j].putdata();
break;
}
	}
}
cout<<"Enter the item code of product you wish to search: \n";
cin>>num;

ptr=find(temp,temp+n,num);
if(ptr!=temp+n)
  cout<<"Given product is present! \n";
  else
	  cout<<"Given product is not  present! \n";
return 0;

}
OUTPUT:
Enter the no. of entries 
2
Enter: 
Item code: 
1234
Item Name: 
brush
Cost: 
34
Quantity:
4
Enter: 
Item code: 
678
Item Name: 
toothpaste
Cost: 
23
Quantity:
2

Item no:1
Item code: 
678
Item Name: 
toothpaste
Cost: 
23
Quantity:
2

Item no:2
Item code: 
1234
Item Name: 
brush
Cost: 
34
Quantity:
4
Enter the item code of product you wish to search: 
678
Given product is present! 


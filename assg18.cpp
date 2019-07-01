/*
Author:weirdgourmet
Title:Selection Sort
 
*/


#include<iostream>
using namespace std;

template<class T>
void sort(T a[],int n)
{
	int i_min;
	T temp;
for(int i=0;i<n-1;i++)
{
i_min=i;
   for(int j=i+1;j<n;j++)
   {
	   if(a[j]<a[i_min])
		   i_min=j;
   }
temp=a[i];
a[i]=a[i_min];
a[i_min]=temp;

}

}






int main()
{
int *a;
float *b;
int n;
cout<<"Enter the no. of integer values"<<endl;
cin>>n;
a=new int[n];
for(int i=0;i<n;i++)
{cout<<"Enter data:";
cin>>a[i];
}
sort(a,n);
cout<<"Sorted array"<<endl;
for(int i=0;i<n;i++)
cout<<" "<<a[i];

cout<<"\n Enter the no. of float values"<<endl;
cin>>n;
b=new float[n];
for(int i=0;i<n;i++)
{cout<<"Enter data:";
cin>>b[i];
}
sort(b,n);
cout<<"Sorted array"<<endl;
for(int i=0;i<n;i++)
cout<<" "<<b[i];



return 0;
}

OUTPUT:
Enter the no. of integer values
4
Enter data:43
Enter data:22
Enter data:21
Enter data:22
Sorted array
 21 22 22 43
 Enter the no. of float values
5
Enter data:3.4
Enter data:7.6
Enter data:5.4
Enter data:3.2
Enter data:1.2
Sorted array
 1.2 3.2 3.4 5.4 7.6

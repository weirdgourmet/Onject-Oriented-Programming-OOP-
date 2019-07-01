/*
Author:weirdgourmet

*/
#include<iostream>
using namespace std;

const int size =5;
template <class T>
class vector{
	T *v;

public:

	vector()
{ v =new T[size];
 for(int i=0;i<size;i++)
	  v[i]=0;
		}

	vector(T *a)
{
		v =new T[size];
for(int i=0;i<size;i++)
	v[i]=a[i];

}
	void  display()
	{
		for(int i=0;i<size;i++)
			cout<<"\t"<<v[i];
		    cout<<endl;
	}
void modify();

void scalar(T *a);

};

template<class T> void vector<T>::modify()
{
	 T num;
	cout<<"Enter num to modify"<<endl;
	cin>>num;
	 int i;
	cout<<"Enter the index"<<endl;
	cin>>i;

	v[i]=num;


}

template<class T> void vector<T>::scalar(T *a)
{
int x;
cout<<"Enter the scalar multiple"<<endl;
	cin>>x;
	for(int i=0;i<size;i++)
		v[i]=x*a[i];


		}
int main()
{
	int x[5]={1,2,3,4,5};
	float y[5]={1.1,2.2,3.3,4.5,5.6};

	vector<int> v1(x);
	vector <float> v2(y);
/*
	v1=x;
	v2=y; */

	cout<<"v1 =  ";
	v1.display();


	cout<<"v2 =  ";
		v2.display();
		
		v1.modify();
			v1.display();

			v2.modify();
			v2.display();

		v1.scalar(x);
		v1.display();


		v2.scalar(y);
		v2.display();


	
	return 0;

}
OUTPUT:
v1 =  	1	2	3	4	5
v2 =  	1.1	2.2	3.3	4.5	5.6
Enter num to modify
3
Enter the index
2
	1	2	3	4	5
Enter num to modify
1.1
Enter the index
4
	1.1	2.2	3.3	4.5	1.1
Enter the scalar multiple
3
	3	6	9	12	15
Enter the scalar multiple
5
	5.5	11	16.5	22.5	28


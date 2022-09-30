#include<iostream>
using namespace std;
int main()
{
	int star,size;
	cout<<"Enter the size of the triangle: ";
	cin>>size;
	int space=size;
	for(int i=size;i>0;i--)
	{
		for(int j=i;j>0;j--)
		{
			cout<<"*";
		}
		space--;
		cout<<endl;
	}
}
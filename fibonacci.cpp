//fibonacci series is series in which number are add one after one

#include<iostream>

using namespace std;

int main()
{
	int n , a=0 , b=1,c;
	cout<<"enter the no of term: ";
	cin>>n;
	
	cout<<a<< " " <<b <<" ";
	for(int i=2; i<n; i++)
	{
		c = a + b;
		cout<<c<<" ";
		a = b;
		b = c;
	}
	cout<<endl;
}

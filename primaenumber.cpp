#include<iostream>

using namespace std;

int main()
{
	int n,i;
	cout<<"enter no to check prime no: ";
	cin>>n;
	
	for( i=2; i<n; i++)
	{
		cout<<i<<endl;
		if ((n%i)==0)
		{
			cout<<"not prime"<<endl;
			break;
		}
    }  
	 if(i==n)
	 {
	 	cout<<"is a prime no "<<endl;
	 }
	
	return 0;
}

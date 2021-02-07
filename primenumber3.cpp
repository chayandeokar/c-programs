#include<iostream>

using namespace std;

int main()
{
	int n,i;
	cout<<"enter no to check prime no: ";
	cin>>n;
	
	for( i=2; i*i<=n; i++) //we are taking under root here
	{
		cout<<i<<endl;
		if ((n%i)==0)
		{
			cout<<"not prime"<<endl;
			break;
		}
    }  
	 if((i*i)>n)//we aretaking under root over here
	 {
	 	cout<<"is a prime no "<<endl;
	 }
	
	return 0;
}

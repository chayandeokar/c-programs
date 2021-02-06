#include<iostream>

using namespace std;

int main()
{
	int n,i;
	cout<<"enter no to check prime no: ";
	cin>>n;
	
	for( i=2; i<n/2; i++) //we are dividing here n/2 so the loop will run half time
	{
		cout<<i<<endl;
		if ((n%i)==0)
		{
			cout<<"not prime"<<endl;
			break;
		}
    }  
	 if(i==n/2)//we are dividing here n/2 so the loop will run half time
	 {
	 	cout<<"is a prime no "<<endl;
	 }
	
	return 0;
}

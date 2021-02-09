#include<iostream>
#include<array>

using namespace std; 
int main()
{
	array<int,6> ar = {1,2,3,4,5,6} ; 
	cout<<"the array elementss are : ";
	for  (int i=0; i<6; i++)
	{
	
	
	cout<< ar.at(i) << " ";
}
	cout<<endl;
	return 0;
}

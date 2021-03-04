#include<iostream>
#include<vector>

using namespace std;

int main()
{

	vector<int>vec;
	vec.reserve(1000);
		for(int i=0; i<32; ++i)
	{
		vec.push_back(i);
		cout<<"  size  "<<vec.size() << /n <<"  capacity  "<<vec.capacity();
		
	     
		
	}
	return 0 ;
}

//call by refence

#include<iostream>

using namespace std;

void change(int &no) //here we are using & as call by reference
{
	no=no*no;
	cout<<" value in function : "<<no<<endl;
}

int main ()
 {
 int n;
 cout<<" enter value : ";
 cin>>n;
 change(n);
 cout<<" value in main : "<<n<<endl;
 return 0;
 
} 

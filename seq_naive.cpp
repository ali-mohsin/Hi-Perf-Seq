#include <iostream>
using namespace std;

int increment()
{
	int a = 0;
	a++;
	return a; 
}

int main()
{

	int a = increment();
	cout<<a<<endl;
}
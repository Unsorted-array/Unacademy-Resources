#include <iostream>
using namespace std;
int factorial(int n)
{
	int fact =1;
	while(n)
	{
		fact*=n;
		--n;
	}
	return fact;
}
//recursive 

int factorialR(int n)
{
	if(n<=1)
	{
		return 1;

	}
	return n*factorialR(n-1);
}
int main()
{
	int n;
	cin>>n;
	cout<<factorial(n)<<endl;
	cout<<factorialR(n);

}


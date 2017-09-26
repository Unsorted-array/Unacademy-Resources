#include <iostream>
using namespace std;
int mymax(int ar[],int n)
{
	//cout<<n<<endl;
	if(n==0)
	{
		return ar[n];
	}
	int RestMax=mymax(ar,n-1);
	if(RestMax>=ar[n])
	{
		return RestMax;
	}
	else
	{
	return ar[n];
	}
}
void InputArr(int ar[],int n)
{
	for(int i=0;i<n;i++)
	{
		cin>>ar[i];
	}
}
int main()
{

	int n;
	cin>>n;
	int ar[100];
	InputArr(ar,n);
	int mx=mymax(ar,n-1);
	cout<<mx<<endl;
}
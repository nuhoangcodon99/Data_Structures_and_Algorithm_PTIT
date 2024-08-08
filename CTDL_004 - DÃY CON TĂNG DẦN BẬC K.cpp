#include<iostream>
using namespace std;

int a,b,f[101]={},dem=0,test;
void Sinh(int i)
{
	for(int j = i+1;j<=a;j++)
	{
		if(f[j] > f[i])
		{
			test++;
			if(test==b)
				dem++;
			Sinh(j);
			test--;	
		}
	}
}
int main()
{
	cin>>a>>b;
	for(int i = 1;i<=a;i++)
		cin>>f[i];
	Sinh(0);
	cout<<dem;
}

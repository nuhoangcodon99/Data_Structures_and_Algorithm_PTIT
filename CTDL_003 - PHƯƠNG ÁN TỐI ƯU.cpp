#include<iostream>
#include<climits>
using namespace std;
int a,b,temp=0,v[100]={},w[100],g[100]={},pa[100]={},cmax=0,kl=0;
void Sinh(int i)
{
	for(int j = 0;j<=1;j++)
	{
		g[i]=j;
		temp+=v[i]*j;
		kl+=w[i]*j;
		if(i==a-1)
		{
			if(temp>cmax && kl<=b)
			{
				cmax=temp;
				for(int x = 0;x<a;x++)
					pa[x]=g[x];
			}
		}
		else
			if(b)
				Sinh(i+1);
		temp-=v[i]*j;
		kl-=w[i]*j;
	}
}
int main()
{
	cin>>a>>b;
	for(int i = 0;i<a;i++)
		cin>>v[i];
	for(int i = 0;i<a;i++)
		cin>>w[i];
	Sinh(0);
	cout<<cmax<<endl;
	for(int i = 0;i<a;i++)	
		cout<<pa[i]<<" "; 
}

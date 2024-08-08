#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int a;
		cin>>a;
		int f[a],dem=0;
		for(int i = 0;i<a;i++)
		{
			cin>>f[i];
			dem+=f[i];
		}
		int g[dem]={};
		if(dem%2==0)
		{
			for(int i = 0;i<a;i++)
				g[f[i]]=1;
			for(int i = 0;i<a;i++)
			{
				for(int j = dem;j>=f[i];j--)
				{
					if(g[j-f[i]])
						g[j]=1;
				}
			}
			if(g[dem/2])
				cout<<"YES";
			else
				cout<<"NO";
		}
		else
			cout<<"NO";
		cout<<endl;
	}
}

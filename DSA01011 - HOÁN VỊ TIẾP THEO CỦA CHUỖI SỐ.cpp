#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int a,b;
		string s;
		cin>>a>>s;
		b=s.length();
		s='0'+s;
		int idx=b,cmax=b;
		while(s[idx]<=s[idx-1] )
		{
			if(s[idx]>=s[cmax])
				cmax=idx;
			idx--;
		}
		if(idx==1)
		{
			cout<<a<<" BIGGEST\n";
		}
		else
		{
			for(int i = idx ;i<=b;i++)
			{
				if(s[i]>s[idx-1] && s[i] <=s[cmax])
					cmax=i;
			}
			swap(s[idx-1],s[cmax]);
			sort(s.begin()+idx,s.end());
			s.erase(s.begin());
			cout<<a<<" "<<s<<endl;
		}
	}
}

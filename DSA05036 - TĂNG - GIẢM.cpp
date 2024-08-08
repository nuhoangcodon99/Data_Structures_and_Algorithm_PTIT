#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int a;
        cin>>a;
        int dem=0,f[a];
        vector<pair<float,float>>ds(a);
        for(int i = 0;i<a;i++)
        {
            cin>>ds[i].first>>ds[i].second;
            f[i]=1;
        }
        for(int i = 0;i<a;i++)
        {
            for(int j = 0;j<i;j++)
            {
                if(ds[i].first>ds[j].first && ds[j].second>ds[i].second)
                    f[i]=max(f[i],f[j]+1);
            }
            dem=max(dem,f[i]);
        }
        cout<<dem<<endl;
    }
}

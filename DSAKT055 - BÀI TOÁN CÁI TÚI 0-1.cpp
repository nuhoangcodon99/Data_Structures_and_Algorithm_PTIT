#include<iostream>
#include<vector>
using namespace std;
struct ct
{
    int x,y;
};

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int a,b;
        cin>>a>>b;
        int f[a+1][b+1]={};
        vector<ct>ds(a+1);
        for(int i = 1;i<=a;i++)
            cin>>ds[i].x;
        for(int i = 1;i<=a;i++)
            cin>>ds[i].y;
        for(int i = 1;i<=a;i++)
        {
            for(int j = 1;j<=b;j++)
            {
                if(j<ds[i].x)
                    f[i][j]=f[i-1][j];
                else
                    f[i][j]=max(f[i-1][j],f[i-1][j-ds[i].x]+ds[i].y);
            }
        }
        cout<<f[a][b]<<endl;
    }
}

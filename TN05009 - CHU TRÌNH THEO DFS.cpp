#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int a,b,chuaxet[1001]={},truoc[1001];
vector<int>ds[1001],ce;
bool kt;
string kq;
void reset(int i)
{
    for(int j = 1;j<=a;j++)
    {
        chuaxet[j]=0;
        ds[j].clear();
    }
}
void DFS(int c,string s)
{
    if(kt)
        return;
    chuaxet[c]=1;
    for(int i : ds[c])
    {
        if(!chuaxet[i])
        {
            truoc[i]=c;
            DFS(i,s+to_string(i)+" ");
        }
        else if(truoc[c]!=i && i==1)
        {
            kt=true;
            kq=s;
        }
    }

}
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        reset(1);
        cin>>a>>b;
        while(b--)
        {
            int x,y;
            cin>>x>>y;
            ds[x].push_back(y);
            ds[y].push_back(x);
        }
        for(int i = 1;i<=a;i++)
            sort(ds[i].begin(),ds[i].end());
        ce.clear();
        kt=false;
        DFS(1,"1 ");
        if(!kt)
            cout<<"NO\n";
        else
        {
            cout<<kq<<1<<endl;
        }
    }
}

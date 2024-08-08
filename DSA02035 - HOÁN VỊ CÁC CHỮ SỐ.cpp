#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int a,b,f[100]={},chuaxet[100]={},cmin=INT_MAX;
vector<string>ds(100);
void Sinh(int i)
{
    for(int j = 0;j<b;j++)
    {
        if(!chuaxet[j])
        {
            f[i]=j;
            chuaxet[j]=1;
            if(i==b-1)
            {
                int test1=INT_MAX,test2=0;
                for(int x = 0;x<a;x++)
                {
                    int test3=0;
                    for(int y = 0;y<b;y++)
                    {
                        test3=test3*10+ds[x][f[y]]-'0';
                    }

                    test1=min(test1,test3);
                    test2=max(test2,test3);
                }
                if(test2-test1!=0)
                        cmin=min(cmin,test2-test1);
            }
            else
                Sinh(i+1);
            chuaxet[j]=0;
        }
    }
}
int main()
{
    cin>>a>>b;
    for(int i = 0;i<a;i++)
        cin>>ds[i];
    Sinh(0);
    cout<<cmin;
}

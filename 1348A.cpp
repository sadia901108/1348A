#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a=n/2;
        int res=pow(2,n);
        for(int i=1;i<a;i++)
        {
            res=res+pow(2,i);
        }
        int c=0;
        for(int i=a;i<n;i++)
        {
            c=c+pow(2,i);
        }
        int d=res-c;
        cout<<d<<endl;
    }

}

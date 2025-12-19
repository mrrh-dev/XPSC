#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
           
        }
        int cnt2 = 0;
        for(int i=0;i<n;i++)
        {
            if(v[i] == 2)
            {
                cnt2 ++;
            }
        }
        if(cnt2 % 8 == 0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
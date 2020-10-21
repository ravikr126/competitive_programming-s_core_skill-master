#include <iostream>
#include <map>
#include <vector>
#include <iterator>
using namespace std;
typedef long long ll;
int main()
{
    int n;
    while(cin>>n)
    {
        int array[n+1];
        map<ll,vector<ll>> m;
        for(int i=1;i<=n;i++)
        {
            cin>>array[i];
            m[array[i]].push_back(i);
        }
        map<ll,vector<ll>> ::iterator it;
        it=m.end();
        it--;
        vector<ll> v=it->second;
        ll index;
        if(v.size()==1)
            index=v[0];
        else
            index=v[2];
        for(ll i=1;i<=n;i++)
        {
            if(i==index)continue;
            cout<<array[i]<<" ";
        }
        cout<<endl;
    }
}

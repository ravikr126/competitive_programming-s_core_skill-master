#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
#include <algorithm>
#include <climits>
#include <deque>
#include <map>
#include <deque>
#include <iomanip>
#include <cmath>
#include <functional>
#include <set>
#include <list>
#define endl '\n'
using namespace std;
#define MOD 1000000007
#define ll long long
#define pb push_back
typedef pair<ll,ll> pll;
int main()
{
    /*
for reading from input.txt and writing on output.txt
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
*/
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll x,y,z,n1,n2;
    while(cin>>x>>y>>z){
        if(z==0) {
            cout<<"0\n";
            continue;
        }
        if((x-y)==0){
            if(z==x) cout<<"1\n";
            else cout<<"-1\n";
            continue;
        }
        if(z%(x-y)==0){
            n1 = z/(x-y) + 1;
            n1 = 2*(n1-1);
        }
        else
            n1 = 100000000;
        if((z-x)%(x-y)==0){
            n2 = (z-x)/(x-y) + 1;
            n2 = 2*n2-1;
        }
        else
            n2 = 100000000;
        if(n1<0) n1=100000000;
        if(n2<0) n2=100000000;
        if(n1<n2) cout<<n1;
        else if(n2<n1) cout<<n2;
        else cout<<"-1";
        cout<<"\n";
    }
    return 0;
}

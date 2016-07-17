/*
Baqir Khan
Aligarh Muslim University
III Year
*/

using namespace std;

#include<bits/stdc++.h>
#define rep(i,n) for(int i=0; i<(n); i++)
#define mem(x,val) memset((x),(val),sizeof(x));
#define vi vector<int>
#define all(x) x.begin(),x.end()
#define sz(x) ((int)x.size())
#define pb push_back
#define em(x) !x.empty()
#define MAX 100000
#define pii pair<int,int>
#define fc first
#define sc second
#define t() int t,f=1; cin>>t; while(t--)

typedef long long int ll;
typedef unsigned long long int  ull;

template<class T1> void deb(T1 e1) {
    cout << e1 << endl;
}

template<class T1,class T2> void deb(T1 e1, T2 e2) {
    cout << e1 << " " << e2 << endl;
}


int main()
{
    ios::sync_with_stdio(false);
    t() {
        ll n,temp;
        cin>>n>>temp;
        ll cur_sum =temp,sum=0;
        rep(i,n-1) {
            cin>>temp;
            sum += (i+1)*temp - cur_sum;
            cur_sum += temp;
        }
        deb(sum);
    }
    return 0;
}

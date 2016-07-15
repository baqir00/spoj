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

typedef long long int ll;
typedef unsigned long long ull;

template<class T1> void deb(T1 e1) {
    cout << e1 << endl;
}

template<class T1,class T2> void deb(T1 e1, T2 e2) {
    cout << e1 << " " << e2 << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--) {
        ull n,ans;
        cin>>n;
        ans = ((((8*(n%11))%11+10)%11)+1)%11;
        deb((ans==0)?0:(11-(ans%11)));
    }
    return 0;
}

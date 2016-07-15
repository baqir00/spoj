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
#define MAX 1000005
#define pii pair< int,int >

typedef long long int lld;
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
        ull n, k;
        cin>>n;
        k = floor((sqrt(4+16*n)-2)/2);
        if(k & 1)
            k--;
        ull t=k+2;
        ull res = ((((2+k)/2)-1)*((2+k)/2));
        if((n-res>(t/2)))
            cout<<t;
        else if((n-res<=(t/2)) && (n-res>0))
            cout<<t-1;
        else
            cout<<t-2;
        cout<<endl;
    }
    return 0;
}

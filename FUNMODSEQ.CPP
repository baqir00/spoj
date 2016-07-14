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

int gcd(int a,int m,int *x,int *y) {
    if(a==0) {
        *x=0;
        *y=1;
        return m;
    }
    int x1,y1;
    int g = gcd(m%a,a,&x1,&y1);
    *x = y1 - (m/a)*x1;
    *y = x1;
    return g;
}

int mod(int a,int m) {
    int x,y;
    int g = gcd(a,m,&x,&y);
    if(g!=1)
        return 0;
    return ((x%m)+m)%m;
}

int main()
{
    ios::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--) {
        lld a,p,n,k=1;
        cin>>a>>p>>n;
        int f= mod(a,p);
        if(f==0) {
            deb("-1");
            continue;
        }
        ull sum=a+f;
        if(n%2) {
            n--;
            sum = (sum*(n/2))+a;
        }
        else
            sum = (sum*(n/2));
        deb(sum);
    }
    return 0;
}

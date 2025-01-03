#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        long long count0=0, count1=0;
        for(int i=0;i<n;i++) {
            cin>>v[i];
            if(v[i]==0) count0++;
            else if(v[i]==1) count1++;
        }
        long long ans=count1;
        if(count0>0) ans*=1LL<<count0;
        cout<<ans<<endl;
    }
    return 0;
}

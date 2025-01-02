// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    cin>>v[i];
    int i=0;
    int ans=0;
    while(i<n && v[i]>=v[k-1] && v[i]>0){
        ans++;
        i++;
    }
    cout<<ans;
    return 0;
}

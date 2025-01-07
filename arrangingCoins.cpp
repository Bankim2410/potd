class Solution {
public:
    int arrangeCoins(int n) {
        int l=1, h=n;
        while(l<=h) {
            long long mid=l+(h-l)/2;
            long long sol=(mid*(mid+1))/2;
            if(sol==n) return mid;
            else if(sol<n) l=mid+1;
            else h=mid-1;
        }
        return h;
    }
};

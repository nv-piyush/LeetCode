class Solution {
public:
    int arrangeCoins(int n) {
        int i=1,cnt=0;
        while(n>=0){
            n-=i;
            cnt++;
            i++;
        }
        return cnt-1;
    }
};

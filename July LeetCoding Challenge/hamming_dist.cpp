#include<bits/stdc++.h>
class Solution {
public:
    int hammingDistance(int x, int y) {
        int xr = x ^ y;
        int cnt = 0;
        while (xr)
        {
            if (xr%2==1)
            {
                cnt++;
            }
            xr=xr/2;
        }
        return cnt;
    }
};

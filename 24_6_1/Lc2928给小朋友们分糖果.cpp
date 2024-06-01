class Solution {
public:
    int distributeCandies(int n, int limit) {
        int ans = 0;
        for(int i = 0; i <= limit; i++){
            if(n - i > 2 * limit) continue;
            for(int j = 0; j <= limit; j++){
                if(n - i - j > limit) continue;
                if(n - i - j >= 0)
                    ans += 1;
            }
        }
        return ans;
    }
};
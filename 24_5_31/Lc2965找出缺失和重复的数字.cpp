class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> ans(2);
        vector<short> cnt(2503);
        int n = 0;
        for(auto it = grid.begin(); it != grid.end(); it++){
            n++;
            for(auto its = (*it).begin(); its != (*it).end(); its++){
                cnt[*(its)]++;
            }
        }
        for(int i = 1; i <= n*n; i++){
            if(cnt[i] == 0){
                ans[1] = i;
            }
            else if(cnt[i] == 2){
                ans[0] = i;
            }
        }
        return ans;
    }
};
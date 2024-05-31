class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
         vector<int> temp(nums);
         vector<int> ans;
         bool flag = false;
         int a = 0 ,b = 0;
         sort(nums.begin(),nums.end());
         for(int i = 0; i < nums.size(); i++){
            int tar = target - nums[i];
            if(tar == nums[i]){
                if(nums[i + 1] == tar){
                    a = tar;
                    b = tar;
                    break;
                }else{
                    continue;
                }
            }
            int l = 0, r = nums.size() - 1;
            int m = (l + r) / 2;
            while(l <= r){
                m = (l + r) / 2;
                if(nums[m] == tar){
                    flag = true;
                    break;
                }
                if(nums[m] > tar){
                    r = m - 1;
                }
                if(nums[m] < tar){
                    l = m + 1;
                }
            }
            if(flag == true){
                a = nums[i];
                b = tar;
                break;
            }
         }
        for(int i = 0; i < temp.size() && ans.size() < 2; i++){
            if(temp[i] == a){
                ans.push_back(i);
                if(ans.size() >= 2) break;
            }
            if(temp[i] == b){
                if(a == b){
                    if(ans[0] == i){
                        continue;
                    }else{
                        ans.push_back(i);
                        if(ans.size() >= 2) break;
                    }
                }else{
                    ans.push_back(i);
                    if(ans.size() >= 2) break;
                }
            }
        }
        return ans;
    }
};
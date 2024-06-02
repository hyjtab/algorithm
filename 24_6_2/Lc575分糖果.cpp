class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_map<int,int> um;
        int n = candyType.size();
        for(int i = 0; i < n; i++){
            if(um.find(candyType[i]) != um.end()){
                um[candyType[i]]++;
            }else{
                um[candyType[i]] = 1;
            }
        }
        n /= 2;
        return (um.size() > n) ? n : um.size();
    }
};
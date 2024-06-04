class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        int k = 1, m = 0;
        vector<int> res(num_people);
        while(candies > k){
            res[m % num_people] += k;
            candies -= k;
            m++;
            k++;
        }
        if(candies > 0) res[m % num_people] += candies;
        return res;
    }
};
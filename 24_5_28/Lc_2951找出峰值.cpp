class Solution {
public:
    vector<int> findPeaks(vector<int>& mountain) {
        vector<int> peakIndex;
        for(int i = 1; i < mountain.size() - 1; i++){
            if(mountain[i] > mountain[i-1] && mountain[i] > mountain[i + 1]){
                peakIndex.push_back(i);
            }
        }
        return peakIndex;
    }
};
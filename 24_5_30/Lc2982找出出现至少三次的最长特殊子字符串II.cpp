class Solution {
public:
    int maximumLength(string s) {
        int s_num[26][3];
        int res = -1;
        for(int i = 0; i < s.length();){
            int cnt = 0;
            char cur = s[i];
            while(i < s.length() && s[i] == cur){
                cnt++;
                i++;
            }
            int index = s[i - 1] - 'a';
            if(cnt > s_num[index][0]){
                s_num[index][2] = s_num[index][1];
                s_num[index][1] = s_num[index][0];
                s_num[index][0] = cnt;
            }else if(cnt > s_num[index][1]){
                s_num[index][2] = s_num[index][1];
                s_num[index][1] = cnt;
            }else if(cnt > s_num[index][2]){
                s_num[index][2] = cnt;
            }
        }
        int maximum = -1;
        for(int i = 0; i < 26; i++){
            int t = max(s_num[i][0] - 2, min(s_num[i][0] - 1, s_num[i][1]));
            int temp = max(t,s_num[i][2]);
            maximum = max(maximum, temp);
        }
        if(maximum > 0) return maximum;
        else return res;
    }
};
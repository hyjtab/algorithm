class Solution {
public:
    int maximumLength(string s) {
        int res = -1;
        int curlen = 1;//当前子串长度
        int curc = s[0];
        for(int i = 0; i < s.length() - 1; i++){
            int cnt = 1;//子串出现次数
            for(int j = i; j < s.length() - 1; j++){
                bool flag = true;
                int upper = -(curlen - 2);
                for(int k = upper; k <= 1; k++){
                    if(s[j + k] != curc){
                        flag = false;
                        break;
                    }
                }
                if(flag){
                    cnt++;
                }
                if(cnt >= 3) break;
            }
            if(cnt >= 3 && res < curlen){
                res = curlen;
            }

            if(s[i] == s[i + 1]){
                curlen++; 
            }else{
                curlen = 1;
                curc = s[i + 1];
            }
        }
        return res;
    }
};
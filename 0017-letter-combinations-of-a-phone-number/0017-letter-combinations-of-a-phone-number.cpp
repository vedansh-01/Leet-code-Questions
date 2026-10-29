class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string>ans;
        int n = digits.length();
        unordered_map<int, vector<char>>mp;
        mp[2]={'a','b','c'};
        mp[3]={'d','e','f'};
        mp[4]={'g','h','i'};
        mp[5]={'j','k','l'};
        mp[6]={'m','n','o'};
        mp[7]={'p','q','r','s'};
        mp[8]={'t','u','v'};
        mp[9]={'w','x','y','z'};
        if(n==0) return ans;
        if(n==1){
            int d = digits[0]-'0';
            for(char ch : mp[d]){
                ans.push_back(string(1,ch));
            }
        }
        else if(n ==2){
            int d1 = digits[0] - '0';
            int d2 = digits[1] - '0';
            for (char ch1:mp[d1]){
                for(char ch2 : mp[d2]){
                    ans.push_back(string(1,ch1)+ch2);
                }
            }
        }
        else if (n ==3){
            int d1 = digits[0] - '0';
            int d2 = digits[1] - '0';
            int d3 = digits[2] - '0';
            for (char ch1:mp[d1]){
                for(char ch2 : mp[d2]){
                    for(char ch3 : mp[d3]){
                       ans.push_back(string(1,ch1)+ch2+ch3);
                    }
                }
            }
        }
        else if (n == 4) {
            int d1 = digits[0] - '0';
            int d2 = digits[1] - '0';
            int d3 = digits[2] - '0';
            int d4 = digits[3] - '0';

            for (char ch1 : mp[d1]) {
                for (char ch2 : mp[d2]) {
                    for (char ch3 : mp[d3]) {
                        for (char ch4 : mp[d4]) {
                            ans.push_back(string(1, ch1) + ch2 + ch3 + ch4);
                        }
                    }
                }
            }
        }
        return ans;
    }
};
class Solution {
public:
    int lengthOfLastWord(string s) {
        int size = s.size(), count=0, flag=0;
        for(int i=size-1; i>=0; i--){
            if(s[i] == ' ' && flag) break;
            if(s[i] != ' '){
                flag=1;
                count++;
            }
        }
        return count;
    }
};

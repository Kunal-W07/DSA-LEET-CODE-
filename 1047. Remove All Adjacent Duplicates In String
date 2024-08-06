class Solution {
public:
    string removeDuplicates(string s) {
        string ans = "";
        int n = s.length();

        for(int i=0; i<n; i++){
            char current = s[i];
            if(ans.empty()){
                ans.push_back(current);
            }
            else if(current==ans.back()){
                ans.pop_back();
            }
            else if(current!=ans.back()){
                ans.push_back(current);
            }
        }
        return ans;

    }
};

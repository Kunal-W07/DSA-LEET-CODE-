cclass Solution {
public:
    string removeDuplicates(string s) {
        string ans = "";
        int n = s.length();

        for(int i=0; i<n; i++){
            char currentstr = s[i];
            //step 1 if new string is empty then insert
            if(ans.empty()){
                ans.push_back(currentstr);
            }
            //step 2 if it is not empty and right most elementis same the remove it
             else if(currentstr == ans.back()){
                 ans.pop_back();
             }
             else if(currentstr != ans.back()){
                ans.push_back(currentstr);
             }
        }
        return ans;
    }
};

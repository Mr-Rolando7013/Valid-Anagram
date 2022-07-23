class Solution {
public:
    bool isAnagram(string s, string t) {
        //Wanted to use unordered_set, but failed at: "aacc" "ccac" use case.
        int length1 = s.length(), length2 = t.length();
        
        if (length1 == length2){
            
            sort(s.begin(), s.end());
            sort(t.begin(), t.end());
            
            if (s == t){
                return true;
            }
        }
        else {
            false;
        }
        return false;
        
        
    }
};


// 125. Valid Palindrome
// Two Pointers Approach
// Time Complexity: O(n)
// Space Complexity: O(1)


class Solution {
public:
    bool isPalindrome(string s) {
        if(s.empty())
        return true;
        int x = s.length();
        string s1;
        

        for(int i=0;i<s.length();i++){
            if(isalnum(s[i])){
            s1+=tolower(s[i]);
            }
        }
          int l=0;
        int r=s1.length()-1;
while(l<r){
    if(s1[l]!=s1[r])
    return false;
    l++;
    r--;
}
return true;
        
    }
};
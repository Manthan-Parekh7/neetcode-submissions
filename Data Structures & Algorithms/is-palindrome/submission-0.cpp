class Solution {
   public:
    bool isPalindrome(string s) {
        string filtered;

        for (char c : s) {
            if (isalnum(c)) {
                filtered += tolower(c);
            }
        }
        int n = filtered.size();
        for (int i = 0; i < n / 2; ++i) {
            if (filtered[i] != filtered[n - i - 1]) {
                return false;
            }
        }

        return true;
    }
};

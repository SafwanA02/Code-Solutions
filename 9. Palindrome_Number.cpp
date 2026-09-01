class Solution {
public:
    bool isPalindrome(int x) {

        if (x < 0){
            return 0;
        }
        
        vector<int> digits = {};
        
        do {
            digits.push_back(x%10);
            x /= 10;
        }while (x > 0);

        int j = digits.size() - 1;

        for (int i = 0; i < digits.size()/2; i++){
            if (digits[i] != digits[j]){
                return 0;
            }
            j -= 1;
        }

        return 1;
    }
};

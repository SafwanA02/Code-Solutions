class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int last_digit = digits.size()-1;
        
        if (digits[last_digit] != 9){
            digits[last_digit] += 1;
            return digits;
        }
        else{
            digits = check_for_nine(digits, last_digit);
            
            if (digits[0] == -1){
                digits[0] = 1;
                digits.push_back(0);
            }

            return digits;
        }

        return digits;

    }
    vector<int> check_for_nine(vector<int>& digits, int i){
        if ( i > 0){ //If it is not the first digit:
            digits[i] = 0;
            if (digits[i-1] == 9){
                digits = check_for_nine(digits, i-1);
            }
            else{
                digits[i-1] += 1;
            }
        }
        else{
            if (digits[i] == 9) {
                digits[i] = -1;
            }
            else{
                digits[i] += 1;
            }
        }

        return digits;

    }
};


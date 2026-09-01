class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int last_digit = 0;
        last_digit = digits.size()-1;
        if (digits[last_digit] != 9){
            digits[last_digit] += 1;
            return digits;
        }
        do{
            digits[last_digit] = 0
            if (digits[last_digit-1] == 9){
                digits[last_digit-1] = 0;
                last_digit -= 1;
            }


        }

        return digits;

    }
};

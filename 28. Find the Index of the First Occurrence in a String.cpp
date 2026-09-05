class Solution {
public:
    int strStr(string haystack, string needle) {
        int start = 0;
        int end = needle.size();

        if (haystack.size() < needle.size()){
            return -1;
        }

        while (start <= haystack.size()-end){
            std:cout << haystack.substr(start, end) << end << start<< std::endl;
            if (haystack.substr(start, end) == needle){
                return start;
            }
            else{
                start += 1;
            }
        }

        return -1;
    }
};

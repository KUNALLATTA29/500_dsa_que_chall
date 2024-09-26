class Solution {
public:
    int myAtoi(string s) {
        int number;
        stringstream ss(s);
        ss >> number;
        return number;
    }
};

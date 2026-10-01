#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }
       double original = x, last_digit, reverse = 0;
       for(int i = 0; x != 0; i++) {
        last_digit = x % 10;
        reverse = (reverse * 10) + last_digit;
        x = x / 10;
       }
       if(reverse == original) {
        return true;
       } else {
        return false;
       }
    }
};
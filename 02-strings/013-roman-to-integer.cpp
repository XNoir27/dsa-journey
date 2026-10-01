#include <iostream>
using namespace std;

class Solution {
    enum Roman {
        I = 1,
        V = 5,
        X = 10,
        L = 50,
        C = 100,
        D = 500,
        M = 1000
    };
    int chartoEnum(char c) {
        switch (c) {
            case 'I': return Roman::I;
            case 'V': return Roman::V;
            case 'X': return Roman::X;
            case 'L': return Roman::L;
            case 'C': return Roman::C;
            case 'D': return Roman::D;
            case 'M': return Roman::M;
            default:  return 0;
        }
    }
public:
    int romanToInt(string s) {
        int sum = 0;
        for(int i = 0; i < s.length(); i++) {
            if(i == 0) {
                sum += chartoEnum(s[i]);
            }
            else if(chartoEnum(s[i]) > chartoEnum(s[i - 1])) {
                sum = sum - (2*chartoEnum(s[i-1])) + chartoEnum(s[i]);
            }
            else {
                sum += chartoEnum(s[i]);
            }
        }
        return sum;
    }
};
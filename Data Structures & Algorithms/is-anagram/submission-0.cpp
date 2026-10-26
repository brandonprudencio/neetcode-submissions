#include <iostream>
#include <string>
#include <vector>
using namespace std;


class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }

        int letter_count = 26;

        vector<int> letter_frequency(letter_count, 0);

        for (char c : s){
            letter_frequency[(c - 'a')]++;
        }

         for (char d : t){
            letter_frequency[(d - 'a')]--;
        }

        for (int count : letter_frequency){
            if(count != 0){
                return false;
            }
        }

        return true;

    }
};

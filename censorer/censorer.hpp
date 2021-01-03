#include <iostream>
#include "../words/swearwords.hpp"

std::string censorWord(std::string word) { 
        for (int i=0; i < 9; i++) {
            int pos = word.find(words[i]);
            if (pos != std::string::npos) {
                word.replace(pos, words[pos].length(), "****");
                return word;
            }
        }
}

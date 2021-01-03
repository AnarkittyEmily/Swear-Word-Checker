#include <iostream>
#include "../words/swearwords.hpp"


bool detectWord(std::string word) {
    for (int i=0; i < 9; i++) {
        int pos = word.find(words[i]);
        if (pos != std::string::npos) {
            if (word.find(" ") != std::string::npos) {
                std::cout << "Found the word! It is in " << word << "\n";
            } else {
                std::cout << "Found the word! It is " << word << "\n";
            }
            return true;
        }
    }
    return NULL;
}
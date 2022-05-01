#include <iostream>
#include "ufo_functions.hpp"

int main() {
    const std::string codeword = "codecademy";
    std::string answer = "__________";
    int misses = 0;

    greet();

    while (answer.compare(codeword) == 0 && misses < 7) {
        display_misses(misses);

        misses++;
    }

    end_game(answer, codeword);
    

}

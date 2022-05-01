#include <iostream>
#include "ufo_functions.hpp"

int main() {
  const std::string codeword = "codecademy";
  std::string answer = "__________";
  int misses = 0;
  std::vector<char> incorrect;
  bool guess = false;
  char letter;

  greet();

  while (answer.compare(codeword) != 0 && misses < 7) {
    display_misses(misses);
    display_status(incorrect, answer);
    
    getUserInput(letter);

    for (size_t i = 0; i < codeword.length(); i++)
    {
        if (letter == codeword[i]) {
            answer[i] = letter;
            guess = true;
        }
    }

    if (guess) {
        std::cout << "Correct!" << std::endl;
    }
    else {
        std::cout << "Incorrect! The tractor beam pulls the person in further." << std::endl;
        incorrect.push_back(letter);
        misses++;
    }

    guess = false;
  }

  end_game(answer, codeword);
}

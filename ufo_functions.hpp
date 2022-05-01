#include <vector>

void greet();
void getUserInput(char &letter);
void display_status(const std::vector<char> &incorrect, const std::string &answer);
void display_misses(const int &misses);
void end_game(const std::string &answer, const std::string &codeword);

#include <iostream>
#include <string>

int main() {
  // Flush after every std::cout / std:cerr
  std::cout << std::unitbuf;
  std::cerr << std::unitbuf;

  while (true) {
  // TODO: Uncomment the code below to pass the first stage
    std::cout << "$ ";

    // Captures the user's command in the "command" variable
    std::string input;
    std::getline(std::cin, input);

    if (input == "exit") {
      break;
    } else {
      std::cout << input << ": command not found" << std::endl;\
    }
  }
}

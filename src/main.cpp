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
    } else if (input.substr(0, 5) == "type ") {
      std::string cmdInput = input.substr(5);

      if (cmdInput == "echo" || cmdInput == "exit" || cmdInput == "type") {
        std::cout << cmdInput << " is a shell builtin" << std::endl;
      } else {
        std::cout << cmdInput << ": not found" << std::endl;
      }
      
    } else if (input.substr(0, 5) == "echo ") {
      std::cout << input.substr(5) << std::endl;
    } else {
      std::cout << input << ": command not found" << std::endl;\
    }
  }
}

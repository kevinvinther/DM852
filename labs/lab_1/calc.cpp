#include <iostream>
#include <string>

/*
** Write a program that takes commands in the form of an operation
** followed by two operands, and outputs the result of each command
** For example:
** ```
** + 100 3.14
** * 4 5
** ```
** Would output
** ```
** 103.14
** 20
** ```
** Read the operation into a std::string and the two operands into
** doubles. Implement the operations called +, -, * and / with their
** obvious meanings.
** If an unknown operation is given, or the input is incorrectly
** formatted, you should write a nice error message to std::cerr and
** exit the program with a non-zero exit code.
** Hints:
** - When checking the input stream for errors, e.g. with if(!std::cin),
**   it will also look like an error when no more input is present
**   ("end-of-file"). You can check for that particular case with
**   if(std::cin.eof())
** - You can use `echo -e "+ 100 3.14\n*4 5" | ./calc` to easily
**   execute your program with some data on std::cin
** - You can also redirect input to be read from a file instead
**   `./calc < myInput.txt`
*/
int main() {
  std::string line;
  while (std::getline(std::cin, line)) {
    // Check that the input is correct, and get the three arguments
    char operation;
    double num1, num2;
    if (sscanf(line.c_str(), "%c %lf %lf", &operation, &num1, &num2) != 3) {
      std::cerr << "Invalid input: " << line << std::endl;
      return 1;
    }

    switch (operation) {
    case '+':
      std::cout << num1 + num2 << std::endl;
      break;
    case '-':
      std::cout << num1 - num2 << std::endl;
      break;
    case '*':
      std::cout << num1 * num2 << std::endl;
      break;
    case '/':
      std::cout << num1 / num2 << std::endl;
      break;
    default:
      std::cerr << "Unknown operation " << operation << std::endl;
      return 1;
    }
  }
  return 0;
}

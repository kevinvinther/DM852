#include <iostream>

/*
** Write a program to compute the sum $\sum^n_{i=0}i$ for a given integer n.
** - The program must accept a single `int` in `std::cin`and output the sum
**   on std::cout, followed by a line-ending
** - If the input is not an `int`, the program must return 1 as exit code.
** - If a negative integer is given as input, the program must return 2 as
**   exit code
** - If the input is an `int` you may assume that the result is representable
**   as an int
** - On error, you may print a nice error message, std::cerr
*/

/*
** ERROR CODES:
** 0: Success
** 1: Non-int input
** 2: Negative number
*/

int main() {
  std::cout << "Input an integer: ";
  int input; // Default initalization to 0
  std::cin >> input;
  if (std::cin.fail()) { // https://cplusplus.com/forum/beginner/207701/
    std::cin.clear();    // This corrects the stream
    std::cin.ignore();   // This skips the left over stream data
    std::cerr << "You cannot input anything other than an integer."
              << std::endl;
    return 1; // Return 1 as an exit code
  }
  if (input < 0) {
    std::cerr << "Input must be a non-negative number";
    return 2; // Negative number error code
  }
  int sum = 0; // For some reason, default initialization doesn't work here
  for (int i = 0; i <= input; i++) {
    sum += i;
  }
  std::cout << "The result is: " << sum << std::endl;
  return 0;
}

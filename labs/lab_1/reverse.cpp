#include <iostream>
#include <sstream>
#include <vector>

/*
 * Write a program that takes a sequence of ints and
 * outputs them in reverse order, one number per line.
 * User a std::vector, a dynamic array implementation
 * for storing the numbers internally.
 *
 * Hints:
 * - Use the `.push_back()` member function, the indexing
 *   operator (e.g. nums[idx]), and the .size() member
 *   function
 */

int main() {
  std::string line;
  std::vector<int> ints;
  int input;
  std::cout << "Input sequence of ints seperated by spaces: ";
  std::getline(std::cin, line);
  std::istringstream stream(line);
  while (stream >> input)
    ints.push_back(input);

  for (int i = ints.size(); i >= 1; i--) {
    std::cout << ints[i - 1] << " " << std::endl;
  }
  return 0;
}

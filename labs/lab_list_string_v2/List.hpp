#ifndef LIST_H_
#define LIST_H_

#include <string>

namespace DM852 {
class List {
public:
  class Node {
  public:
    std::string data; // The elemtn stored in this node
    Node *next;       // Next node or nullptr
    Node *prev;       // Prev node or nullptr
  };

  // Member Functions
  int size() const;
  bool empty() const;
  void push_back(const std::string &elem);
  Node *insert(Node *node, const std::string &elem);
  void clear();
  void pop_back();
  void erase(Node *node);
  std::string &front();
  const std::string &front() const;
  std::string &back;
  const std::string &back() const;
  Node *begin();
  const Node *begin() const;
  Node *end();
  const Node *end() const;
};
}; // namespace DM852

#endif // LIST_H_

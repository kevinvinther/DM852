#include "List.hpp"

/*
** Implement a doubly linked list as a type List
** in the namespace DM852. It should fulfil the
** following requirements:
** - It must store elements of type std::string
** - It must have a nested class Node, which must
**   have the following public member variables:
**   - std::string data; Is the element stored in
**     this node
**   - Node *next;
**     Must point to the Node storing the next
**     element, or be `nullptr` if it is the last
**   - Node *prev;
**     Must point to the Node storing the previous
**     element, or be `nullptr` if it is the first
** - It must be a Regular type, i.e., be
**   DefaultConstructible, Copyable, and
**   EqualityComparable.
** - It must additionally have the following member
**   functions. Some of them have pre-conditions
**   which you must document as a comment at the
**   function declaration in the header file.
**   Similarly, if a member function does not
**   run in constant time (ignoring memory
**   allocation), you must document the
**   computational complexity. If you have
**   considered an alternative implementation to
**   achieve a different computational complexity,
**   write a short note about it as well.
**    - int size() const;
**      Returns the number of elements stored.
**    - bool empty() const;
**      Returns true iff the container is empty
**      i.e. empty() == (size() == 0)
**    - void push_back(const std::string &elem)
**      Inserts a new element in the end
**    - Node *insert(Node *node, const std::string &elem)
**      Inserts a new element before the one stored in
**      node, and returns a pointer to the node for the
**      newly inserted element.
**    - void clear()
**      Erase all elements.
**    - void pop_back();
**      Erase the last element.
**    - std::string &front();
**      const std::string &front() const;
**      Two overloads for accessing the first element.
**    - std::string &back();
**      const std::string &back() const();
**      Two overloads for accessing the last element.
**    - Node *begin();
**      const Node *begin() const;
**      Two overloads for accessing the node storing the first element.
**      Returns nullptr if empty()
**    - Node *end();
**      const Node *end() const;
**      Two overlaods that returns nullptr.
*/

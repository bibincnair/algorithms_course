
#include <cstddef>
#include <unordered_map>
using std::unordered_map;

class Node
{
public:
  int val;
  Node *next;
  Node *random;

  Node(int _val)
  {
    val = _val;
    next = NULL;
    random = NULL;
  }
};

class Solution
{
public:
  Node *copyRandomList(Node *head)
  {
    if (head == NULL) { return head; }
    Node *head_copy = head;
    unordered_map<Node *, Node *> node_mapping;
    while (head_copy != NULL) {
      node_mapping[head_copy] = new Node(head_copy->val);
      head_copy = head_copy->next;
    }

    head_copy = head;
    while (head_copy != NULL) {
      Node *new_node = node_mapping[head_copy];
      new_node->next = (head_copy->next != NULL ? node_mapping[head_copy->next] : NULL);
      new_node->random = (head_copy->random != NULL ? node_mapping[head_copy->random] : NULL);
      head_copy = head_copy->next;
    }
    return node_mapping[head];
  }
};
namespace linked_list_cycle {


//  Definition for singly-linked list.
struct ListNode
{
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(nullptr) {}
};

class Solution
{
public:
  bool hasCycle(ListNode *head) {
    bool cycle = false;
    if(head == nullptr || head->next == nullptr){
        return cycle;
    }
    ListNode* slow = head;
    ListNode* fast = head;
    while(fast->next != nullptr && fast->next->next != nullptr ){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast){
            cycle = true;
            break;
        }
    }
    return cycle;
  }
};
}// namespace linked_list_cycle
namespace list_sum {
struct ListNode
{
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
  ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
  {
    int carry;
    constexpr int BASE = 10;
    ListNode *output = new ListNode((l1->val + l2->val) % 10);
    ListNode *output_head = output;
    carry = (l1->val + l2->val) / BASE;
    l1 = l1->next;
    l2 = l2->next;

    while (l1 != nullptr && l2 != nullptr) {

      int temp_sum = l1->val + l2->val + carry;
      output->next = new ListNode(temp_sum % BASE);
      carry = temp_sum / BASE;
      output = output->next;
      l1 = l1->next;
      l2 = l2->next;
    }

    while (l1 != nullptr) {
      int temp_sum = l1->val + carry;
      output->next = new ListNode(temp_sum % BASE);
      carry = temp_sum / BASE;
      output = output->next;
      l1 = l1->next;
    }

    while (l2 != nullptr) {
      int temp_sum = l2->val + carry;
      output->next = new ListNode(temp_sum % BASE);
      carry = temp_sum / BASE;
      output = output->next;
      l2 = l2->next;
    }

    if(carry != 0){
        output->next = new ListNode(carry);
    }

    return output_head;
  }
};
}// namespace list_sum
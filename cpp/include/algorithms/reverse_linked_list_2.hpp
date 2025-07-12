namespace reverse_linked_list {


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
  ListNode* reverseBetween(ListNode* head, int left, int right) {
        if((head == nullptr) || (left == right)){
            return head;
        }
        ListNode dummy_head(0, head);
        ListNode* pre_reverse = &dummy_head;
        for(int i = 0; i < left-1; i++){
            pre_reverse = pre_reverse->next;
        }
        ListNode* reverse_head = pre_reverse->next;
        ListNode* prev = nullptr;
        ListNode* curr = reverse_head;
        ListNode* next = nullptr;
        for(int i = 0; i < (right - left + 1); i++){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
    
        pre_reverse->next = prev;
        reverse_head->next = curr;

        return dummy_head.next;
  }
};
}// namespace reverse_linked_list
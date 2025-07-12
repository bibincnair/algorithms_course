#include "algorithms/reverse_linked_list_2.hpp"
#include <catch2/catch_all.hpp>
#include <vector>

using std::vector;
using namespace reverse_linked_list;

ListNode *createLinkedNode(vector<int> &input)
{
    if (input.empty()) return nullptr;
    ListNode *head = new ListNode(input[0]);
    ListNode *current = head;
    for (size_t i = 1; i < input.size(); ++i) {
        current->next = new ListNode(input[i]);
        current = current->next;
    }
    return head;
}

bool compareLinkedNodes(ListNode* input, std::vector<int>& reference){
                for(auto elem: reference){
                        if(input == nullptr || elem != input->val){
                                return false;
                        }
                        input = input->next;
                }
                return true;
}

TEST_CASE("Reverse linked list 2", "[reverseBetween]") { 
        vector<int> input = { 1, 4, 3, 2, 5 }; 
        vector<int> output = {1,4,3,2,5};
        ListNode* input_node = createLinkedNode(input);
        Solution sol;
        ListNode* reversed_node = sol.reverseBetween(input_node, 2, 4);
        REQUIRE(compareLinkedNodes(reversed_node, output));
}

// Additional tests

TEST_CASE("Reverse entire list", "[reverseBetween]") {
        vector<int> input = {1, 2, 3, 4, 5};
        vector<int> output = {5, 4, 3, 2, 1};
        ListNode* input_node = createLinkedNode(input);
        Solution sol;
        ListNode* reversed_node = sol.reverseBetween(input_node, 1, 5);
        REQUIRE(compareLinkedNodes(reversed_node, output));
}

TEST_CASE("Reverse single element", "[reverseBetween]") {
        vector<int> input = {1, 2, 3, 4, 5};
        vector<int> output = {1, 2, 3, 4, 5};
        ListNode* input_node = createLinkedNode(input);
        Solution sol;
        ListNode* reversed_node = sol.reverseBetween(input_node, 3, 3);
        REQUIRE(compareLinkedNodes(reversed_node, output));
}

TEST_CASE("Reverse head only", "[reverseBetween]") {
        vector<int> input = {1, 2, 3, 4, 5};
        vector<int> output = {1, 2, 3, 4, 5};
        ListNode* input_node = createLinkedNode(input);
        Solution sol;
        ListNode* reversed_node = sol.reverseBetween(input_node, 1, 1);
        REQUIRE(compareLinkedNodes(reversed_node, output));
}

TEST_CASE("Reverse tail only", "[reverseBetween]") {
        vector<int> input = {1, 2, 3, 4, 5};
        vector<int> output = {1, 2, 3, 4, 5};
        ListNode* input_node = createLinkedNode(input);
        Solution sol;
        ListNode* reversed_node = sol.reverseBetween(input_node, 5, 5);
        REQUIRE(compareLinkedNodes(reversed_node, output));
}

TEST_CASE("Reverse sublist in the middle", "[reverseBetween]") {
        vector<int> input = {1, 2, 3, 4, 5};
        vector<int> output = {1, 4, 3, 2, 5};
        ListNode* input_node = createLinkedNode(input);
        Solution sol;
        ListNode* reversed_node = sol.reverseBetween(input_node, 2, 4);
        REQUIRE(compareLinkedNodes(reversed_node, output));
}

TEST_CASE("Reverse two elements", "[reverseBetween]") {
        vector<int> input = {1, 2, 3, 4, 5};
        vector<int> output = {1, 3, 2, 4, 5};
        ListNode* input_node = createLinkedNode(input);
        Solution sol;
        ListNode* reversed_node = sol.reverseBetween(input_node, 2, 3);
        REQUIRE(compareLinkedNodes(reversed_node, output));
}

TEST_CASE("Reverse empty list", "[reverseBetween]") {
        vector<int> input = {};
        vector<int> output = {};
        ListNode* input_node = createLinkedNode(input);
        Solution sol;
        ListNode* reversed_node = sol.reverseBetween(input_node, 1, 1);
        REQUIRE(compareLinkedNodes(reversed_node, output));
}

TEST_CASE("Reverse linked list 2", "[reverseBetween]") { 
    vector<int> input = { 1, 4, 3, 2, 5 }; 
    vector <int> output = {1,4,3,2,5};
    ListNode* input_node = createLinkedNode(input);
    Solution sol;
    ListNode* reversed_node = sol.reverseBetween(input_node, 2, 4);
    REQUIRE(compareLinkedNodes(reversed_node, output));
}
#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        
        if (head == NULL) return NULL;

        ListNode * cur = head;

        while (cur && cur->next) {
            if(cur->next->val == cur->val)
                cur->next = (cur->next->next == NULL) ? NULL: cur->next->next;
            else
                cur = cur->next;
        }

        return head;
    }
};
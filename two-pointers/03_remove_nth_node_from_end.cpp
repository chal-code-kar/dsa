// https://www.educative.io/interview-prep/coding/remove-nth-node-from-end-of-list

class ListNode {
public:
    int val;
    ListNode* next;

    ListNode(int val = 0, ListNode* next = nullptr);
};

ListNode* RemoveNthLastNode(ListNode *head, int n) {
    ListNode* slow = head;
    ListNode* fast = head;

    for (int i = 0; i < n; ++i) fast = fast->next;

    if (fast == nullptr) return head->next;

    while (fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next;
    }

    slow->next = slow->next->next;

    return head;
}

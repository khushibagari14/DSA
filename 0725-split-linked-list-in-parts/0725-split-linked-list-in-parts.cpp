/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*> part(k, nullptr);

        int cnt = 0;
        ListNode* temp = head;

        while (temp != nullptr) {
            cnt++;
            temp = temp->next;
        }

        int n = cnt / k;
        int r = cnt % k;

        temp = head;

        for (int i = 0; i < k; i++) {
            part[i] = temp;
            int size = n + (r > 0 ? 1 : 0);
            r--;
            for (int j = 0; j < size && temp != nullptr; j++) {
                if (j == size - 1) {
                    ListNode* nextNode = temp->next;
                    temp->next = nullptr;
                    temp = nextNode;
                } else {
                    temp = temp->next;
                }
            }
        }

        return part;
    }
};
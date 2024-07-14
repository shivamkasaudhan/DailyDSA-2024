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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int>numSet(nums.begin(),nums.end());
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* curr = dummy;

        while(curr->next!= NULL){
            if(numSet.find(curr->next->val)!=numSet.end()){
                ListNode* remove = curr->next;
                curr->next = curr->next->next;
                delete remove;
            }else{
                curr= curr->next;

            }
        }
        ListNode* ans = dummy->next;
        delete dummy;
        return ans;
        
    }
};
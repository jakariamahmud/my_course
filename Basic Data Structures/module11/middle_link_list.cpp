class Solution {
public:
    int size(ListNode * head)
    {
        ListNode * tmp = head;
        int count=0;
        while(tmp!=NULL)
        {
            count++;
            tmp=tmp->next;
        }
        return count;
    }
    ListNode* middleNode(ListNode* head) {
        int sz = size(head);
        ListNode * tmp = head;
        for(int i=1;i<=sz/2;i++)
        {
            tmp = tmp->next;
        }
        return tmp;
    }
};
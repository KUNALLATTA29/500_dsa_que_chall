 ListNode* reverseList(ListNode* head) {
        if(head==NULL) return NULL;
        stack<int> stt;
        ListNode* temp=head;
        while(temp!=nullptr){
            stt.push(temp->val);
            temp=temp->next;
        }
        temp=head;
        while(temp!=nullptr){
            temp->val=stt.top();
            temp=temp->next;
            stt.pop();
        }
        return head;
    }

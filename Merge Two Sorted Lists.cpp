ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
         ListNode* temp1=list1;
        ListNode* temp2=list2;
        ListNode* c=new ListNode(100);
        ListNode* temp3=c;
        while(temp1!=NULL && temp2!=NULL){
            if(temp1->val<=temp2->val){
                temp3->next=temp1;
                temp1=temp1->next;
            }
            else{
                ListNode* t=new ListNode(temp2->val);
                temp3->next=t;
                temp2=temp2->next;
            }
            temp3=temp3->next;
        }
        if(temp1==NULL){
            temp3->next=temp2;
        }
        else{
            temp3->next=temp1;
        }
        return c->next; 
    }

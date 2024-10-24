bool isPalindrome(ListNode* head) {
         ListNode *t = head;
        string n ;
        stack<char> r;
        while(t != nullptr){
                n +=  to_string(t->val);
                t = t->next;
        }
        string rev;
        int i = 0;
        rev = n;
        while(rev[i] != '\0'){
            r.push(rev[i]);
            i++;
        }
        string ans;
        while(!r.empty()){
            ans += r.top();
            r.pop();
        }

        if(n == ans){
            return true;
        }
        
        return false;
    }

bool parseBoolExpr(string expression) {
        stack<char> stk;
        
        for (char c : expression) 
        {
            if (c == ',' || c == '(') continue;  
            
            if (c == 't' || c == 'f' || c == '!' || c == '&' || c == '|') 
            {
                stk.push(c);
            } 
            else if (c == ')') 
            {
                vector<bool> values;

                while (stk.top() == 't' || stk.top() == 'f') 
                {
                    values.push_back(stk.top() == 't');
                    stk.pop();
                }

                char op = stk.top();
                stk.pop(); 
                
                bool result = (op == '&') ? true : (op == '|') ? false : !values[0];

                if (op == '&') 
                {
                    for (bool val : values) 
                    {
                        result &= val;
                    }
                } 
                else if (op == '|') 
                {
                    for (bool val : values) 
                    {
                        result |= val;
                    }
                }

                stk.push(result ? 't' : 'f');
            }
        }

        return stk.top() == 't';
    }

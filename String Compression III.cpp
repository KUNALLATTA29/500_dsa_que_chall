string compressedString(string word) {
        string comp = "";
        int j;
        for(int i=0; i<word.length(); i++){
            char ch = word[i];
            int count = 0;
            for( j=i; j<word.length(); j++){
                if(count>8 || word[j]!=ch){
                    break;
                }
                else{
                    count++;
                }
            }
            string temp = to_string(count);
            comp+=temp;
            comp+=ch;
            i=j-1;
        }
        return comp;
    }

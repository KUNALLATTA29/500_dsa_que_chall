int lengthOfLastWord(string s) {
        int len =0;
        int start = s.length() -1;

        while(start>=0 && s[start]==' '){
            start--;
        }
        
        while(start>=0 && s[start]!=' '){
            len++;
            start--;
        }

        return len;
    }

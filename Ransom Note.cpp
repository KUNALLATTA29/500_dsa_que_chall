bool canConstruct(string ransomNote, string magazine) {
         map<char, int> KB;
        for(auto ch: magazine) KB[ch]++;

        for(auto ch: ransomNote)
            if(KB[ch] == 0)
                return false;
            else
                KB[ch]--;

        return true;
    }

int uniqueMorseRepresentations(vector<string>& words) {
        int i,a=0,n=words.size(),j=0;
        
        string b[]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        set<string>s;
        for(i=0;i<n;i++){
            string x="";
           for(j=0;j<words[i].size();j++){
              x=x+b[words[i][j]-'a'];
           }
           s.insert(x);
        }
        return s.size();
    }

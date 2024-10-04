int mostWordsFound(vector<string>& sentences) {
         vector<int> arr;
        for(int i=0;i<sentences.size();i++){
            int c=0;
            istringstream stream(sentences[i]);
            string word;
            while(stream >> word){
                c++;
            }
            arr.push_back(c);
        }
        sort(arr.begin(),arr.end(),greater<int>());
        return arr[0];
    }

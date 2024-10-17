int calPoints(vector<string>& operations) {
        vector<int> score;
        for(int i = 0; i < operations.size(); i++){
            if(operations[i] == "C"){
                score.pop_back();
            }
            else if(operations[i] == "D"){
                int temp = score.back();
                temp = temp * 2;
                score.push_back(temp);
            }
            else if(operations[i] == "+"){
                int temp2 = score[score.size() - 1] + score[score.size() - 2];
                score.push_back(temp2);
            }
            else{
                int temp3 = stoi(operations[i]);
                score.push_back(temp3);
            }
        }
        int sum = 0;
        for(int j = 0; j < score.size(); j++){
            sum += score[j];
        }
        return sum;
    }

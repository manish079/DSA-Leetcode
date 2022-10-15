class Solution {
public:
     int numDifferentIntegers(string word) {
        string temp = "";
        set<string> s;
        word += ' ';
        for(int i = 0; i < word.size(); ++i) {
            if(word[i] >= '0' && word[i] <= '9') {
                temp += word[i];
            } else {
                if(temp.size() != 0) {
                    int count = 0;
                    for(int j = 0; j < temp.size(); ++j) {
                        if(temp[j] == '0') {
                            count++;
                        } else {
                            break;
                        }
                    }
                    temp.erase(0,count);
                    s.insert(temp);
                    temp = "";
                }
            }
        }
        return s.size();
    }
};
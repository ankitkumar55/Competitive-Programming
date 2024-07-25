class Solution {
public:
    string solveEquation(string equation) {
        stringstream ss(equation);
    string temp;
    vector<int> result;
    while(getline(ss,temp,'=')){
        int sign = 1;
        string numberString="";
        int number = 0;
        int numOfX = 0;
        for(int i = 0; i < temp.size();i++){
            if(temp[i]=='+'||temp[i]=='-'){
                if(!numberString.empty()){
                    number+=stoi(numberString)*sign;
                    numberString = "";
                }
                sign = temp[i]=='+' ? 1 : -1;
                continue;
            }
            if(temp[i]=='x'){
                numOfX+= numberString.empty() ? 1*sign :1*sign*stoi(numberString);
                numberString = "";
            }else{
                numberString+=temp[i];
            }
        }
        if(!numberString.empty()) number+=stoi(numberString)*sign;
        result.push_back(numOfX);
        result.push_back(number);
    }
    if(result[0]-result[2]==0 && result[1]-result[3]==0) return "Infinite solutions";
    else if(result[0]-result[2]==0 && result[1]-result[3]!=0) return "No solution";
    else return "x=" + to_string((result[1]-result[3])/(result[2]-result[0]));
    }
};

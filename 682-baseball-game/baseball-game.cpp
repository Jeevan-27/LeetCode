class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> record;

        for(int i=0;i<operations.size();i++){
            if(operations[i]=="C"){
                record.pop();
            }
            else if(operations[i]=="+"){
                int n1=0,n2=0;
                n1=record.top();
                record.pop();
                n2=record.top();
                record.push(n1);
                record.push(n1+n2);
            }
            else if(operations[i]=="D"){
                record.push(record.top()*2);
            }
            else{
                record.push(stoi(operations[i]));
            }
        }

        int sum=0;
        while(record.size()!=0){
            sum+=record.top();
            record.pop();
        }

        return sum;
    }
};
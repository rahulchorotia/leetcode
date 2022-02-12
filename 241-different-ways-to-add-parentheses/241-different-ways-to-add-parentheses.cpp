class Solution {
public:
    vector<int> solve(vector<string>exp,int i,int j) 
    {
     vector<int>ans;
        if(i>j)
            return ans;
        if(i==j){
            ans.push_back(stoi(exp[i]));
            return ans; 
        }
        for(int k=i+1;k<j;k+=2){
            vector<int>left=solve(exp,i,k-1);
            vector<int>right=solve(exp,k+1,j);
            if(exp[k]=="+"){
                for(auto &x:left){
                    for(auto &y:right){
                        ans.push_back(x+y);
                    }
                }
            }
            if(exp[k]=="-"){
                for(auto &x:left){
                    for(auto &y:right){
                        ans.push_back(x-y);
                    }
                }
            }
            if(exp[k]=="*"){
                for(auto &x:left){
                    for(auto &y:right){
                        ans.push_back(x*y);
                    }
                }
            }
        }
       
        return ans;
    }
    vector<int> diffWaysToCompute(string s) 
    {
        
        vector<int>ans;
        vector<string>exp;
        for(int i=0;i<s.length();){
            string temp="";
            if(s[i]=='-'||s[i]=='+'||s[i]=='*')
            {
                temp+=s[i];
                i++;
                exp.push_back(temp);
                continue;
            }
            while(s[i]!='-'&&s[i]!='+'&&s[i]!='*'&&i<s.length()){
                temp+=s[i++];
            }
           
            exp.push_back(temp);
        }
        int i=0;
        int j=exp.size()-1;
        if(j==0){
            ans.push_back(stoi(exp[j]));
            return ans;
        }
        for(int k=i+1;k<j;k+=2){
            vector<int>left=solve(exp,i,k-1);
            vector<int>right=solve(exp,k+1,j);
            if(exp[k]=="+"){
                for(auto &x:left){
                    for(auto &y:right){
                        ans.push_back(x+y);
                    }
                }
            }
            if(exp[k]=="-"){
                for(auto &x:left){
                    for(auto &y:right){
                        ans.push_back(x-y);
                    }
                }
            }
            if(exp[k]=="*"){
                for(auto &x:left){
                    for(auto &y:right){
                        ans.push_back(x*y);
                    }
                }
            }
        }
       
        return ans;
    }
};
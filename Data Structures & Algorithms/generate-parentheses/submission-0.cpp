class Solution {
private:
    void generateParenthesis(int open,int close,int& n,vector<string> &s,string &current){
        if(open==n && close==n){
            s.push_back(current);
            return;
        }

        if(open<n){
            current.push_back('(');
            generateParenthesis(open+1,close,n,s,current);
            current.pop_back();
        }

        if(close<open){
            current.push_back(')');
            generateParenthesis(open,close+1,n,s,current);
            current.pop_back();
        }
    }
public:
    vector<string> generateParenthesis(int n) {
        vector<string> s;
        string current="";
        generateParenthesis(0,0,n,s,current);
        return s;
    }
};

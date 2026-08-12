class Solution {
public:
    bool isValid(string s) {
        stack<char> brackets;
        for(char b: s){
            if(b == '(' ||  b == '{' || b == '['){
                brackets.push(b);
            }
            else if(b == ')' ||  b == '}' || b == ']'){
                if(brackets.empty()){
                    return false;
                }
                char top = brackets.top();
                brackets.pop();
                 if ((b == ')' && top != '(') || (b == '}' && top != '{') || (b == ']' && top != '['))
                {
                    return false;
                }
            }
        } 
        return brackets.empty();
        
    }
};
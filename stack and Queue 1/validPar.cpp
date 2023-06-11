/*using stack
time:O(N)
space: O(N)*/


/*CODE*/

bool isValidParenthesis(string s)
{
    // Write your code here.
    stack<char> st;
    int n = s.length();

    for(int i=0;i<n;i++){
        if(s[i] =='[' || s[i] == '{' || s[i]  == '('){
            st.push(s[i]);
        }

        else {
             if(st.size()==0) return false ;
             
             char x = st.top();
             st.pop();
             if ((x == '[' && s[i] == ']') || (x == '{' && s[i] == '}') ||
                 (x == '(' && s[i] == ')')) continue;

                 else return false ;
        }
        
    }

    return st.empty() ;
}
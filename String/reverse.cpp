/*Using stack
time: O(N)
space:O(N)
*/

/*CODE*/

#include <bits/stdc++.h> 

string reverseString(string &str){
	// Write your code here.
	str += ' ';
	stack<string> s;
	
	for(int i=0;i<str.length();i++){
	string temp="";
	while(str[i] != ' ' && i< str.length()){
		temp += str[i++];
	}	
	
	if(!temp.empty()){
		s.push(temp);
	}
		
	}	

	string ans ;
	while(s.empty()!=1){
			ans +=s.top()+" ";
		    s.pop();
	}

	return ans ;
}


/*Using vector*/

#include <bits/stdc++.h> 

string reverseString(string &str){
	// Write your code here.
	str +=" ";
	vector<string> ans ;
	

	for(int i=0;i<str.length();i++){
		string s ="";
	while(str[i]!=' ' && i< str.length()){
		s += str[i++];
	}

	if(!s.empty()){
		ans.push_back(s);
	}	
	}
  reverse(ans.begin(),ans.end());
string v="";
  for(int i=0;i<ans.size();i++){ 
      v += ans[i] +' ';
  }

  return v ;


}
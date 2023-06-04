/*Question 1 :Set Matrix Zeros

solution:*/


void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
	map<int,int> mpC;
	map<int,int> mpR;
	int n= matrix.size(), m=matrix[0].size();

	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(matrix[i][j]==0){
				mpR[i]++;
				mpC[j]++;
			}
		}
	}

	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(mpR[i]!=0 || mpC[j]!=0){
				matrix[i][j]=0;
			}
		}
	}
}

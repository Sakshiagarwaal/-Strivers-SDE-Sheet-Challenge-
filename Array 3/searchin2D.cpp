/* Brute force 
time: O(m*n)
space:O(1)
*/

/*CODE*/


bool searchMatrix(vector<vector<int>>& mat, int target) {
        
    int n = mat.size(), m= mat[0].size();
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(mat[i][j]==target) return true ;
        }
    }

    return false ;
}


/* Binary search  
time: O(log(m*n))
space:O(1)
*/

/*CODE*/

bool searchMatrix(vector<vector<int>>& mat, int target) {
        int n = mat.size(), m= mat[0].size();
        
        int low =0, high =(m*n)-1;
        
        while(low<=high){
            int mid = (low+high)/2;
             if(mat[mid/m][mid%m]== target){
                return true ;
            }
            
            else  if(mat[mid/m][mid%m] > target){
                high = mid-1;
            }
            
            else {
                low=mid+1;
            }
        }

      return false ;  
}
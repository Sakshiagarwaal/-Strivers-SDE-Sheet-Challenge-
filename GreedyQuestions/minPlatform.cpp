/*time :O(nlogn)+O(n)~ O(nlogn)
space: O(1)
*/


/*CODE*/
int calculateMinPatforms(int at[], int dt[], int n) {
    // Write your code here.
   
   sort(at,at+n);
   sort(dt,dt+n);

int cnt =1,maxAns = 1,i=1,j=0;
while(i<n &&j<n){
    if(dt[j]>=at[i]){
        cnt++;
        i++;
    }

    else {
        cnt--;
        j++;
    }

    maxAns = max(maxAns,cnt);
}

return maxAns ;
   
}
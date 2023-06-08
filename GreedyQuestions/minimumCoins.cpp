/*time: O(amount)
space: O(n) array created
*/

/*CODE*/

#include <bits/stdc++.h> 
int findMinimumCoins(int amount) 
{
    // Write your code here
    int coin[] = {1,2,5,10,20,50,100,500,1000};

    int cnt = 0;
// cout<< coin[1]<< "coin[8]"<< endl;
   for(int i=8;i>=0;i--){
       while(amount>=coin[i]){
           cnt++;
           amount -= coin[i];
       }
   }

    return cnt;
}

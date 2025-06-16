
#include<bits/stdc++.h>


/*Sample Input 1 :
6 4
0 3 4 7 10 9


Sample Output 1 :
3


Explanation to Sample Input 1 :
The maximum possible minimum distance between any two cows will be 3 when 4 cows are placed at positions {0, 3, 7, 10}. Here distance between cows are 3, 4 and 3 respectively.


Sample Input 2 :
5 2
4 2 1 3 6


Sample Output 2 :
5


Expected time complexity:
Can you solve this in O(n * log(n)) time complexity?


Constraints :
2 <= 'n' <= 10 ^ 5
2 <= 'k' <= n
0 <= 'arr[i]' <= 10 ^ 9
Time Limit: 1 sec.
*/


bool ispossible(vector<int> &stalls, int k,int mid){
    int cows=1;
    int lastpos=stalls[0];

    for(int i=0;i<stalls.size();i++){
        if(stalls[i]-lastpos>=mid){
           
           cows++;
           if(cows==k){
               return true;
           }
           lastpos=stalls[i];
        }
    }
    return false;
}



int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(),stalls.end());
    int s=0;
    int maxi=-1;
    for(int i=0;i<stalls.size();i++){
       maxi= max(maxi,stalls[i]);
    }
    int e= maxi;
    int ans=-1;
    int mid= s+(e-s)/2;

    while(s<=e){
        if(ispossible(stalls,k,mid)){
            ans=mid;
            s=mid+1;
        }
        else{
            
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;

}
int main(){
   int arr[]={0, 3, 4, 7, 10 ,9};
   int k=4;
      
cout<< aggressiveCows(arr,k);


  return 0;
}

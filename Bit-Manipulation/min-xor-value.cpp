/*
problem description : Given an integer array A of N integers
, find the pair of integers in the array which have minimum XOR value. Report the minimum XOR value.


idea is to sort the array and then find minimum among nearest value. 


*/

int findMinXor(vector<int> &A) {
    int ans = INT_MAX;
    sort(A.begin(), A.end());
    for(int i=0; i<A.size()-1; i++){
        ans = min(ans, A[i]^A[i+1]);
    }
    return ans;
}

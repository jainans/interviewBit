/*
problem description - Given an array of integers, every element appears thrice except for one which occurs once.

Find that element which does not appear thrice.

approach-  different than twice occuring problem, hear solve it in 32*n time complexity. go through bit 0 to bit 31 and count number of set bits 
at each position.
if at some position number of set bits%3==1 then add 2^pos to ans.

*/

int singleNumber(const vector<int> &A) {
    int n = A.size();
     int p = 1;
     int ans=0;
      int num;
    for(int i=0; i<32; i++){
        num=0;
        for(int j=0; j<n; j++){
            if(A[j]&p != 0)
            num++;
        }
        if(num%3 !=0)
        ans+=p;
        p*=2;

    }
    return ans;
}

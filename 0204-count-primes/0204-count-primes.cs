public class Solution {
    public int CountPrimes(int n) {
        bool[] prime=new bool[n+1];
        for(int i=0;i<n;i++){
            prime[i]=true;
        }

        for(int p=2;p*p<=n;p++){
            if(prime[p]){
                for(int i=p*p;i<=n;i=i+p){
                    prime[i]=false;
                }
            }
        }

        int cnt=0;
        for(int i=2;i<=n;i++){
            if(prime[i]){
                cnt++;
            }
        }
        return cnt;
    }
}
class Solution {
public:
    //if its prime then +1 always non prime...
    // if non prime... then nearest prime dis++
    // so we will seive ryt?
    bool isPrime(long long n) {
    if (n <= 1) return false;  
    if (n == 2) return true;       
    if (n % 2 == 0) return false; 

    for (long long i = 3; i * i <= n; i += 2) {
        if (n % i == 0)
            return false;
    }
    return true;
}
    int minOperations(vector<int>& a) {
        int n=a.size();
        int c=0;
        for(int i=0;i<n;i++)
            {
                if(i%2==0) //should be prime ryt?
                {
                    if(!isPrime(a[i])){
                        //now nearest prime after a[i]..
                        int x=a[i];
                       
                            int val=x+1;
                            while(1){
                                if(isPrime(val)){
                                    c+=val-x;
                                    break;
                                }
                                val++;
                            }
                        
                        
                    }
                }
                else{
                    if(isPrime(a[i])){
                        if(a[i]==2)c+=2;
                        else c++;

                        //cout<<c<<endl;
                    }
                }
            }
        return c;
    }
};
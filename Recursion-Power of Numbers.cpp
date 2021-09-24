 long long power(int N,int R)
    {
           if (R==0)
        return 1;
        if (R==1)
        return N;
        
        if (R%2==1){
        //R=R-1;
        long long store= power(N , R/2);
        long long ans= ((store*store%1000000007)*N)%1000000007;
        return ans;
            
        }
        else {
        long long store= power(N , R/2);
        long long ans = (store *store)%   1000000007 ;
        return ans;
        }
        
        
        
    }
    
  
    

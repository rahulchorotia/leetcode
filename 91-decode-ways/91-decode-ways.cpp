class Solution {
public:long long count=0;
	int f=0;
	  vector<long long>dp;
	
	void solve(string &str,int s,int e){
	    if(f)return;
	    if(dp[s]!=-1){
	        count+=dp[s];
	        
	        return;
	    }
        
        if(s>e){   count++;return;}
        if(str[s]=='0')return;
	    if((e-s+1)>=2){
	       
	        string ss="";
            ss+=str[s];
            ss+=str[s+1];
            if(stoi(ss)==0){
                 count=0;
                        f=1;
                        return;
            }
            if(stoi(ss)<27)
                {
                    if(ss!="10"&&ss!="20")
                        solve(str,s+1,e);
                    solve(str,s+2,e);
                    dp[s]=count;
                }
            else{
                if(str[s+1]=='0')
                    {
                        count=0;
                        f=1;
                        return;
                    }
                   solve(str,s+1,e); 
                    dp[s]=count;
            }
	    }
	    else{
	        solve(str,s+1,e);
	         dp[s]=count;
	    }
	    
	   
	}
    int numDecodings(string str) 
    {
        if(str=="10"||str=="20")
            return 1;
     		    if(str[0]=='0')
		    return 0;
		    
		    for(int i=0;i<str.length()+1;i++){
		        dp.push_back(-1);
		    }
		    solve(str,0,str.size()-1);
		  //  cout<<"endl";
		  //  for(auto&x:dp){
		  //      cout<<" // "<<x<<" ";
		  //  }
		    long long tcount=count;
		    count=0;
		    return tcount;
    }
};
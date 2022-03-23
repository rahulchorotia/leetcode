// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int>ans;
    vector<vector<int> > visited;
    bool check(int &r, int &c, int i, int j,int dir){
        
        int nexti=i;
        int nextj=j;
        
        if(dir==0){
                nexti=i;
                nextj=j+1;
            }
            else if(dir==1){
                nexti=i+1;
                nextj=j;
                
            }
            else if(dir==2){
                nexti=i;
                nextj=j-1;
            }
            else if(dir==3){
                nexti=i-1;
                nextj=j;
            }
            if(nexti>=r||nextj>=c||nexti<0||nextj<0)
            return 0;
        //cout<<nexti<<" "<<nextj<<endl;

            if(visited[nexti][nextj])
                return 0;
        return 1;
    }
    void solve(vector<vector<int> > &m, int &r, int &c,int i,int j,int dir){
        if( i>=r || j>=c || i<0 ||j<0)
            return;
        
        ans.push_back( m[i][j] );
        visited[i][j] = 1;
        
        
        if( check(r,c,i,j,dir)){
            if(dir==0){
              //  cout<<i<<" "<<j<<endl;
                solve(m,r,c,i,j+1,0);
            }
            else if(dir==1){
                solve(m,r,c,i+1,j,1);
            }
            else if(dir==2){
                solve(m,r,c,i,j-1,2);
            }
            else if(dir==3){
                solve(m,r,c,i-1,j,3);
            }
        }
        else{
            if(dir==0){
                if(check(r,c,i,j,1))
                solve(m,r,c,i+1,j,1);
            }
            else if(dir==1){
                if(check(r,c,i,j,2))
                solve(m,r,c,i,j-1,2);
            }
            else if(dir==2){
                if(check(r,c,i,j,3))
                solve(m,r,c,i-1,j,3);
            }
            else if(dir==3){
                if(check(r,c,i,j,0))
                solve(m,r,c,i,j+1,0);
            }
            
        }
    
    }
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        // code here
        visited.resize(r,vector<int>(c,0));
       solve(matrix,r,c,0,0,0);
       
        return ans;
        
    }

};

// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends
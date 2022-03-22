class Solution {
public:
    int findrw(vector<vector<int>>& m,int &t){
        int up = 0;
        int down = m.size()-1;
        while(up<down){
            int mid = up+ (down-up)/2;
            if(m[mid][0] > t){
                down=mid-1;
            }
            else if(m[mid][0] ==t)
                return mid;
            else{
                
                    if(mid+1<m.size()){
                        if(m[mid+1][0]>t){
                            return mid;
                        }
                        else{
                            up=mid+1;
                        }
                    }
                    else{
                        return mid;
                    }
               
            }
        }
        return up;
        
    }
    int solve(vector<vector<int>>& m, int &t,int &rw,int &l,int &r){
        if(l>=r)
        {
            if(l==r){
                if(m[rw][l]==t)
                    return 1;
                return 0;
            }
            return 0;
        }
        int mid = l+(r-l)/2;
        if(m[rw][mid]>t){
            mid--;
            return solve(m,t,rw,l,mid);
        }
        else if(m[rw][mid] == t)
        {
            return 1;
        }
        else{
            mid++;
            return solve(m,t,rw,mid,r);
        }
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rw=findrw(matrix,target);
        //cout<<rw;
        int l=0;
        int r=matrix[0].size()-1;
        return solve(matrix,target,rw,l,r);
        
    }
};
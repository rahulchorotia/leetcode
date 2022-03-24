// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
public:
    string chooseandswap(string a){
        // Code Here
        unordered_map<char,int>mp;
        string b=a;
        int indx=-1;
        for(int i=0;i<a.size()-1;i++){
            if(a[i]>a[i+1])
            {
                indx=i+1;
                mp[a[i]]++;
                break;
            }
            mp[a[i]]++;
        }
        if(indx == -1)
            return a;
        int min=-1;
        bool flag = true;
        for(int i= indx; i<a.size();i++){
            if(!mp[a[i]] && flag)
            {    
                min = i;
                flag = false;
            }
            if(flag == false && !mp[a[i]] && a[i]<a[min])
             {   
                 min=i;
             }
        }
        if(min == -1)
            return a;
        int max=-1;
        for(int i=0;i<min;i++){
            if(a[i]>a[min]){
                max=i;
                break;
            }
        }
        if(max == -1)
            return a;
        char f1 = a[max];
        char f2 = a[min];
        for(int i=0;i<a.size();i++){
            if(a[i]==f1)
                a[i] = f2;
            else if(a[i] == f2)
                a[i] = f1;
        }
        return a;
    }
    
};


// { Driver Code Starts.

int main()
{
    Solution obj;
	int t;
	cin >> t;
	while(t--)
	{	
	    string a;
		cin >> a;
		cout << obj.chooseandswap(a) << endl;
	}
	return 0;
}
  // } Driver Code Ends
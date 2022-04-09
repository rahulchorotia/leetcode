// { Driver Code Starts
// C++ program to check if two strings are isomorphic
#include<iostream>
#include<string.h>

using namespace std;
#define MAX_CHARS 256

 // } Driver Code Ends
#include<bits/stdc++.h>
class Solution
{
    public:
    //Function to check if two strings are isomorphic.
 
    bool areIsomorphic(string str1, string str2)
    {
        
        // Your code here
       
        map<char,int>mp1;
        map<char,int>mp2;
        map<char,char>check;
        int n1=str1.length();
        int n2=str2.length();
        if(n1 != n2)    return 0;
        for(int i=0; i<n1;i++){
            if(mp1[str1[i]] ==0 && mp2[str2[i]] == 0)
            {
                mp1[str1[i]]++;
                       mp2[str2[i]]++;
                       check.insert({str1[i],str2[i]});
                       continue;
            }
            if(mp1[str1[i]] == mp2[str2[i]] ){
                if( !check[str1[i]] )
                {
                       mp1[str1[i]]++;
                       mp2[str2[i]]++;
                       check.insert({str1[i],str2[i]});
                }
               else if( check[str1[i]] == str2[i] )
               {
                    mp1[str1[i]]++;
                       mp2[str2[i]]++;
                       check.insert({str1[i],str2[i]});
               }
               else return 0;
            }
            else
            return 0;
        }
        
        return 1;
        
    }
};

// { Driver Code Starts.

// Driver program
int main()
{
    int t;
    cin>>t;
    string s1,s2;
    while (t--) {
        cin>>s1;
        cin>>s2;
        Solution obj;
        cout<<obj.areIsomorphic(s1,s2)<<endl;
    }
    
    return 0;
}  // } Driver Code Ends
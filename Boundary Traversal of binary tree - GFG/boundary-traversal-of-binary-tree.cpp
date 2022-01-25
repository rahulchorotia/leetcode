// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define MAX_HEIGHT 100000

// Tree Node
struct Node
{
    int data;
    Node* left;
    Node* right;
};

// Utility function to create a new Tree Node
Node* newNode(int val)
{
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}


// Function to Build Tree
Node* buildTree(string str)
{
    // Corner Case
    if(str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for(string str; iss >> str; )
        ip.push_back(str);

    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));

    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while(!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if(currVal != "N") {

            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if(i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if(currVal != "N") {

            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}









 // } Driver Code Ends
/* A binary tree Node
struct Node
{
    int data;
    Node* left, * right;
}; */

class Solution {
public:
    void leftt(Node *r,vector<int>&ans){
        if(!r)
            return;
        if(!r->left&&!r->right)
            return;
        ans.push_back(r->data);
        if(r->left)
            leftt(r->left,ans);
        else if(r->right)
            leftt(r->right,ans);
    }
    void leaf(Node*r,vector<int>&ans){
        if(!r)
            return ;
        if(!r->left && !r->right)
            {
                ans.push_back(r->data);
                return;
            }
        if(r->left)
            leaf(r->left,ans);
        if(r->right)
            leaf(r->right,ans);
    }
    void rightt(Node *r,vector<int>&ans){
        if(!r)
            return ;
            stack<int>st;
        while(r){
            if(!r->left&&!r->right)
                break;
            st.push(r->data);
            if(r->right)
                r=r->right;
            else if(r->left)
                r=r->left;
                
        }
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
    }
    vector <int> boundary(Node *root)
    {
        vector<int>ans;
        if(!root)
            return ans;
        ans.push_back(root->data);
        leftt(root->left,ans);
        leaf(root,ans);
        rightt(root->right,ans);
        return ans;
    }
};

// { Driver Code Starts.

/* Driver program to test size function*/

int main() {
    int t;
    string tc;
    getline(cin, tc);
    t=stoi(tc);
    while(t--)
    {
        string s ,ch;
        getline(cin, s);
        Node* root = buildTree(s);
        Solution ob;
        vector <int> res = ob.boundary(root);
        for (int i : res) cout << i << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends
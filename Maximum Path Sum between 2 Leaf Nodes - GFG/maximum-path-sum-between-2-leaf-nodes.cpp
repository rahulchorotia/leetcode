// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// Tree Node
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

// Function to Build Tree
Node *buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N') return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;) ip.push_back(str);

    // Create the root of the tree
    Node *root = new Node(stoi(ip[0]));

    // Push the root to the queue
    queue<Node *> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node *currNode = queue.front();
        queue.pop();

        // Get the current Node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current Node
            currNode->left = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size()) break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current Node
            currNode->right = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


 // } Driver Code Ends
/*
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
public:
int findMaxSumPath(Node* root, int &max_sum)
{
    // base case: empty tree
    if (root == nullptr) {
        return 0;
    }
 
    // find the maximum sum node-to-leaf path starting from the left child
    int left = findMaxSumPath(root->left, max_sum);
 
    // find the maximum sum node-to-leaf path starting from the right child
    int right = findMaxSumPath(root->right, max_sum);
 
    // it is important to return the maximum sum node-to-leaf path starting from the
    // current node
 
    // case 1: left child is null
    if (root->left == nullptr) {
        return right + root->data;
    }
 
    // case 2: right child is null
    if (root->right == nullptr) {
        return left + root->data;
    }
 
    // find the maximum sum path "through" the current node
    int cur_sum = left + right + root->data;
 
    // update the maximum sum path found so far (Note that maximum sum path
    // "excluding" the current node in the subtree rooted at the current node
    // is already updated as we are doing postorder traversal)
 
    max_sum = max(cur_sum, max_sum);
 
    // case 3: both left and right child exists
    return max(left, right) + root->data;
}
    int maxPathSum(Node* root)
    {
         if(!root)
            return 0;
        int maxi=INT_MIN;
            int x=findMaxSumPath(root,maxi);   
        return maxi==INT_MIN?x:maxi;
    }
};

// { Driver Code Starts.

int main() {
    int tc;
    scanf("%d ", &tc);
    while (tc--) {
        string treeString;
        getline(cin, treeString);
        Node *root = buildTree(treeString);
        Solution ob;
        cout << ob.maxPathSum(root) << "\n";
    }
    return 0;
}  // } Driver Code Ends
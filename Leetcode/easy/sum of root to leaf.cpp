#include<bits/stdc++.h>
using namespace std;

int dfs(TreeNode* root, int sum){
    if(root == nullptr) return 0;
    sum = (sum << 1) + root -> val;

    if(root -> left == nullptr && root -> right == nullptr) return sum;
    return dfs(root -> left, sum) + dfs(root -> right, sum);

}

int sumRootToLeaf(TreeNode* root) {
    return dfs(root, 0);
}

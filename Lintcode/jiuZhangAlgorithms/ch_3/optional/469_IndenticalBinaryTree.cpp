/*
Check if two binary trees are identical. 
Identical means the two binary trees have the same structure and every identical position has the same value.

Example
    1             1
   / \           / \
  2   2   and   2   2
 /             /
4             4
are identical.

    1             1
   / \           / \
  2   3   and   2   3
 /               \
4                 4
are not identical.

*/


#include <iostream>
using namespace std;

/*
recursive
*/

/**
 * Definition of TreeNode:
 * class TreeNode {
 * public:
 *     int val;
 *     TreeNode *left, *right;
 *     TreeNode(int val) {
 *         this->val = val;
 *         this->left = this->right = NULL;
 *     }
 * }
 */

class Solution {
public:
    /**
     * @aaram a, b, the root of binary trees.
     * @return true if they are identical, or false.
     */
    bool isIdentical(TreeNode* a, TreeNode* b) {
        if(a == NULL && b == NULL)
            return true;
        
        //(a or b == NULL)
        if(a == NULL)
            return false;
        if(b == NULL)
            return false;
        
        if(a->val == b->val){
            return isIdentical(a->right,b->right) && isIdentical(a->left,b->left);
        }else{
            return false;
        }
    }
};

int main(){

	return 0;
}
/* 
    $Revision: 56 $
    $Date: 2005-11-20 19:50:54 +0100 (nie, 20 lis 2005) $
    $URL: http://manta.univ.gda.pl/svn/wb/labs/c/541-BST-Rozw/tree03.c $
 */

#include "BT.h"

/*        
            4                                   4
           / \                                 / \
          2   5             ----->            5   2
         / \                                     / \
        1   3                                   3   1
*/

struct node* buildTree() {
  struct node* root=new_node(5);  
  root->left=new_node(2);
  root->right=new_node(4);
  root->left->right=new_node(1);
  return root;
}

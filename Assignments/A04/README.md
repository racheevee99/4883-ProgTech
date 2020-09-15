## Assignment 4 - Binary Trees 
### Rachel Vetter
### Description:

- Find 2 problems that deal with Binary Search Trees in some way that are part of the onlinejudge set of problems.
- Find multiple ways of implementing a Binary Search Trees in whichever language you are using. You should understand the implications of each method.

### Files

|   #   | File                       | Description                                                |
| :---: | -------------------------- | ---------------------------------------------------------- |
|   1   | [459.pdf](./459.pdf)       | UVa Problem 1 PDF - 459 Graph Connectivity                 |
|   2   | [318.pdf](./318.pdf)       | UVa Problem 2 PDF - 318 Domino Effect                      |

## Example implementation of a Binary Search Tree(BST)

- This code initializes a BST using a class with methods including a default and parameterized constructr, an insert method and a traversal method.
- For this BST, it uses dynamic memory allocation.
- Insertion is performed recursively.
- Simple, but clear and easy to use.

''' cpp

// C++ program to demonstrate insertion 
// in a BST recursively. 
#include <iostream> 
using namespace std; 
  
class BST 
{ 
    int data; 
    BST *left, *right; 
  
    public: 
      
    // Default constructor. 
    BST(); 
      
    // Parameterized constructor. 
    BST(int); 
      
    // Insert function. 
    BST* Insert(BST *, int); 
      
    // Inorder traversal. 
    void Inorder(BST *); 
}; 
  
// Default Constructor definition. 
BST :: BST() : data(0), left(NULL), right(NULL){} 
  
// Parameterized Constructor definition. 
BST :: BST(int value) 
{ 
    data = value; 
    left = right = NULL; 
} 
  
// Insert function definition. 
BST* BST :: Insert(BST *root, int value) 
{ 
    if(!root) 
    { 
        // Insert the first node, if root is NULL. 
        return new BST(value); 
    } 
  
    // Insert data. 
    if(value > root->data) 
    { 
        // Insert right node data, if the 'value' 
        // to be inserted is greater than 'root' node data. 
          
        // Process right nodes. 
        root->right = Insert(root->right, value); 
    } 
    else
    { 
        // Insert left node data, if the 'value'  
        // to be inserted is greater than 'root' node data. 
          
        // Process left nodes. 
        root->left = Insert(root->left, value); 
    } 
      
    // Return 'root' node, after insertion. 
    return root; 
} 
  
// Inorder traversal function. 
// This gives data in sorted order. 
void BST :: Inorder(BST *root) 
{ 
    if(!root) 
    { 
        return; 
    } 
    Inorder(root->left); 
    cout << root->data << endl; 
    Inorder(root->right); 
} 
  
// Driver code 
int main() 
{ 
    BST b, *root = NULL; 
    root = b.Insert(root, 50); 
    b.Insert(root, 30); 
    b.Insert(root, 20); 
    b.Insert(root, 40); 
    b.Insert(root, 70); 
    b.Insert(root, 60); 
    b.Insert(root, 80); 
  
    b.Inorder(root); 
    return 0; 
} 
  
// This code is contributed by pkthapa

'''

### Sources

- https://www.geeksforgeeks.org/binary-search-tree-set-1-search-and-insertion/


## 122 - Trees on the Level
### Rachel Vetter 
### Description:

Trees are fundamental in many branches of computer science (Pun definitely intended). Current state-of-the art parallel computers such as Thinking Machines’ CM-5 are based onfat trees. Quad- andoctal-trees are fundamental to many algorithms in computer graphics.This problem involves building and traversing binary trees.Given a sequence of binary trees, you are to write a programthat prints a level-order traversal of each tree. In this problemeach node of a binary tree contains a positive integer and allbinary trees have have fewer than 256 nodes.In alevel-ordertraversal of a tree, the data in all nodes at agiven level are printed in left-to-right order and all nodes at levelkare printed before all nodes at levelk+ 1.For example, a level order traversal of the tree on the right is:5, 4, 8, 11, 13, 4, 7, 2, 1.In this problem a binary tree is specified by a sequence ofpairs ‘(n,s)’ wherenis the value at the node whose path fromthe root is given by the strings. A path is given be a sequence of ‘L’s and ‘R’s where ‘L’ indicates aleft branch and ‘R’ indicates a right branch. In the tree diagrammed above, the node containing 13 isspecified by(13,RL), and the node containing 2 is specified by(2,LLR). The root node is specified by(5,)where the empty string indicates the path from the root to itself. A binary tree is considered tobecompletely specifiedif every node on all root-to-node paths in the tree is given a value exactly once.

### Files

|   #   | File                       | Description                                                |
| :---: | -------------------------- | ---------------------------------------------------------- |
|   1   | [main.cpp](./main.cpp)     | Solution file                                              |
|   2   | [input](./input.txt)       | Test input file from problem statement                     |
|   3   | [input2](./input2.txt)     | Larger test input from udebug                              |
|   4   | [122.pdf](./122.pdf)   | UVa problem PDF                                            |


### Instructions

- This project was compiled using C++ 11 

### Sources

 - Maps 
    - http://www.cplusplus.com/reference/map/map/
 - Unordered maps
    - http://www.cplusplus.com/reference/unordered_map/unordered_map/

I used this sources to refresh me on syntax and functionality.

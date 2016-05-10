//Problem 18: Find the maximum value path of the below triangle (path from top to bottom, moving to only adjecent cells, that maximizes the sum of numbers touched)

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include "math.h"
#include <map>
#include <vector>
using namespace std;




//Let's try this with trees
struct TreeNode{
  int num;
  int count;
  TreeNode* left;
  TreeNode* right;
};

/*
class testTree{
 private:
  testTree* left;
  testTree* right;
  int num;
  int count;
 public:
  testTree(int theNum){
    num = theNum;
    left = NULL;
    right = NULL;
    count = 1;
  }

  void setLeft(testTree l){
    left = l;
    count++;
  }
  void setRight(testTree r){
    right = r;
    count++;
  }
  int getCount(){return count;}
  void insert(testTree theTree){
    if(left == NULL) setLeft(theTree);
    else if(right == NULL) setRight(theTree);
    else{
      if(left.getCount() <= right.getCount()){
        left.insert(theTree);
        count++;
      }
      else{
        right.insert(theTree);
        count++;
      }
    }
  }
  
};
*/
vector< vector<int> > readFile(string theFileName);
int pathSum(TreeNode* root);
TreeNode* insert(TreeNode* tree, int num);
TreeNode* getNewNode(int num);

int main(){
   string theFile = "Problem18.txt";
   vector< vector<int> > theTriangle = readFile(theFile);
   TreeNode* tree = NULL;
   tree = insert(tree, theTriangle[0][0]);
   cout << "Tree num = " << tree->num << "\n";
   for(int i = 1; i < 15; i++){
     for(int j = 0; j < theTriangle[i].size()-1; j++){
       cout << "Inserting " << theTriangle[i][j] << " into left\n";
       tree = insert(tree, theTriangle[i][j]);
       cout << "Inserting " << theTriangle[i][j+1] << " into right\n";
       tree = insert(tree, theTriangle[i][j+1]);
     }
     cout << "NEW LINE\n";
   }

   cout << "Tree root = " << tree->num << "\n";
   cout << "Row 1 = " << tree->left->num << " " << tree->right->num << "\n";
   cout << "Row 2 = " << tree->left->left->num << "\n"; cout << tree->left->right->num << "\n"; cout << tree->right->left->num << "\n"; cout << tree->right->right->num << "\n";

   cout << "Path sum = " << pathSum(tree) << "\n";

    
   for(int i = 13; i >=0; i--){
     for(int j = 0; j < theTriangle[i].size(); j++){
       theTriangle[i][j] = theTriangle[i][j] + max(theTriangle[i+1][j], theTriangle[i+1][j+1]);
     }
   }
   cout << "I Hate you and the answer is " << theTriangle[0][0] << "\n";
   return 0;

}

vector< vector<int> > readFile(string theFileName){
  
  ifstream triangleFile(theFileName);
  
  string word;
  string line;
  vector< vector<int> > triangle; 
  vector<int> triangleLine;
  if(triangleFile.is_open()){
    while(getline(triangleFile, line)){
      istringstream iss(line);
      while(iss >> word){
        triangleLine.push_back(stoi(word));
      }
      triangle.push_back(triangleLine);
      triangleLine.clear();
    }
  }
  return triangle;
}

TreeNode* insert(TreeNode* tree, int num){
  if(tree == NULL){
    tree = getNewNode(num);
  }
  else if(num <= tree->num) tree->left = insert(tree->left, num);
  else if(num > tree->num) tree->right = insert(tree->right, num);
  else{
    cout << "FULL TREE\n";
  }   
  return tree;
}

TreeNode* getNewNode(int num){
  TreeNode* newNode = new TreeNode();
  newNode->num = num;
  newNode->left = newNode->right = NULL;
  return newNode;
}

int pathSum(TreeNode* root){
  if(root == NULL) return 0;
  else if(root->left == NULL || root->right == NULL) return root->num;
  else return root->num + max(pathSum(root->left), pathSum(root->right));
}






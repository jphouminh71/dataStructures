
#include <iostream>
#include "BST.hpp"
using namespace std;

int main (int argc, char* argv[]){
  BST tree(5);


  tree.addNode(3); //left child to 5
  tree.addNode(9); //right child to 5


  tree.addNode(1); //left child to 3
  tree.addNode(4); //right child to 3


  tree.addNode(6); //left child to 9


  tree.addNode(2); //left child to 4
  insert(tmp,4);


  tree.printTree();
  cout << endl << "There are " << tree.getSize() << " nodes in the tree" << endl;
  cout << "The minimum value node is:  " << tree.getMinValue() << endl;
  cout << "There max depth is: " << tree.getMaxDepth() << endl;


  tree.deleteNode(2);
  std::cout << "Remaining Tree :" << endl;
  tree.printTree();

  tree.deleteNode(9);
  std::cout << "Remaining Tree :" << endl;
  tree.printTree();

  tree.deleteNode(2);
  std::cout << "Remaining Tree :" << endl;
  tree.printTree();

  tree.deleteNode(5);
  std::cout << "Remaining Tree :" << endl;
  tree.printTree();

  tree.deleteNode(1);
  std::cout << "Remaining Tree :" << endl;
  tree.printTree();

  tree.deleteNode(3);
  std::cout << "Remaining Tree :" << endl;
  tree.printTree();

  tree.deleteNode(6);
  std::cout << "Remaining Tree :" << endl;
  tree.printTree();

  tree.deleteNode(4);
  std::cout << "Remaining Tree :" << endl;
  tree.printTree();
}

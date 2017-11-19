#include <iostream>
using namespace std;

class bst
{
     class node
     {
     public:
          int data;
          node* left;
          node* right;
          node()
          {
               data = 0;
               left = nullptr;
               right = nullptr;
          }
     };
public:
     node* root = nullptr;  //pointer to root

     node* createNewNode(int d)
     {
          node* newptr = new node;
          newptr->data = d;
          return newptr;
     }

     void insert()
     {

     }
};

int main()
{
     bst tree;

     return 0;
}

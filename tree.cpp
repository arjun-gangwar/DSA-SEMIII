#include <iostream>
#include "queue.h"  //user defined queue library
#include "stack.h"  //user definde stack library
using namespace std;

class bst
{
     class node
     {
     public:
          int data;
          node* left;
          node* right;
          node()  //constructor for node class
          {
               data = 0;
               left = nullptr;
               right = nullptr;
          }
     };
public:
     node* root; //pointer to root
     bst()  //constructor for bst class
     {
          root = nullptr;
     }

     node* createNewNode(int d) //function to allocate memory for new node
     {
          node* newptr = new node;
          newptr->data = d;
          return newptr;
     }

     void insert() //insertion without reccursion
     {
          int x;
          cout<<"Enter data: ";
          cin>>x;
          node *newptr, *ptr;
          newptr = createNewNode(x);  //creating new node
          ptr = root;
          if(root == nullptr)
               root = newptr;
          else
          {
               while(1)
               {
                    if(x <= ptr->data)
                    {
                         if(ptr->left == nullptr)
                         {
                              ptr->left = newptr;
                              break;
                         }
                         else
                              ptr = ptr->left;
                    }
                    else
                    {
                         if(ptr->right == nullptr)
                         {
                              ptr->right = newptr;
                              break;
                         }
                         else
                              ptr = ptr->right;
                    }
               }
          }
     }

     void minMax()  //function to find the min and max elements of the tree
     {
          node *ptr;
          ptr = root;
          if(root == nullptr)
               cout<<"ERROR: tree is empty"<<endl;
          while(ptr->left != nullptr)
          {
               ptr = ptr->left;
          }
          cout<<"minimum element in the tree is: "<<ptr->data<<endl;
          ptr = root;
          while(ptr->right != nullptr)
          {
               ptr = ptr->right;
          }
          cout<<"maximum element in the tree is: "<<ptr->data<<endl;
     }

     void levelOrder()
     {

     }
};

int main()
{
     bst t1;
     t1.insert();
     t1.insert();
     t1.insert();
     t1.insert();
     t1.insert();
     t1.insert();
     t1.minMax();
     bst t2;
     t2.insert();
     t2.insert();
     t2.insert();
     t2.insert();
     t2.insert();
     t2.insert();
     t2.minMax();
     return 0;
}

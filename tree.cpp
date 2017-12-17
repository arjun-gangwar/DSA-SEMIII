#include <iostream>
#include "queue.h"  //user defined queue library
#include "stack.h"  //user definde stack library
using namespace std;

class bst
{
     class node
     {
     public:
          char data;
          node* left;
          node* right;
          node()  //constructor for node class
          {
               data = ' ';
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

     node* createNewNode(char d) //function to allocate memory for new node
     {
          node* newptr = new node;
          newptr->data = d;
          return newptr;
     }

     void insert() //insertion without reccursion
     {
          char x;
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
          if(root == nullptr)
               cout<<"ERROR: tree is empty"<<endl;
          queue<node*> q;  //a queue of type node pointers
          q.inNode(root);
          //while there is atleast one discoverable inNode
          while(!q.isEmpty())
          {
               node* ptr = q.getFront();
               cout<<ptr->data<<" ";
               if(ptr->left != nullptr)
                    q.inNode(ptr->left);
               if(ptr->right != nullptr)
                    q.inNode(ptr->right);
               q.delNode();
          }
          cout<<endl;
     }

     void inorder(node* ptr)
     {
          if(ptr == nullptr)
               return;
          else
          {
               inorder(ptr->left);
               cout<<ptr->data<<" ";
               inorder(ptr->right);
          }
     }

     void preorder(node* ptr)
     {
          if(ptr == nullptr)
               return;
          else
          {
               cout<<ptr->data<<" ";
               preorder(ptr->left);
               preorder(ptr->right);
          }
     }

     void postorder(node* ptr)
     {
          if(ptr == nullptr)
               return;
          else
          {
               postorder(ptr->left);
               postorder(ptr->right);
               cout<<ptr->data<<" ";
          }
     }
};

int main()
{
     bst t1;  //bst object
     for(int i=0; i<11; i++)
     {
          t1.insert();
     }
     cout<<"Levelorder: ";
     t1.levelOrder();
     cout<<"Inorder: ";
     t1.inorder(t1.root);
     cout<<endl;
     cout<<"Preorder: ";
     t1.preorder(t1.root);
     cout<<endl;
     cout<<"Postorder: ";
     t1.postorder(t1.root);
     cout<<endl;
     t1.minMax();
     return 0;
}

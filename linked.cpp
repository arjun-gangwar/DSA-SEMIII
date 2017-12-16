#include <iostream>
using namespace std;

template<class T>
class linkedList
{
     class node
     {
     public:
          T data;
          node *next;
          node()
          {
               next = nullptr;
          }
     };
public:
     node *front, *rear;
     linkedList()
     {
          front = nullptr;
          rear = nullptr;
     }

     node* createNewNode(T d)
     {
          node* newptr = new node;
          newptr->data = d;
          return newptr;
     }

     void insert_back()
     {

     }

     void insert_front()
     {

     }

     void delete_front()
     {

     }

     void delete_back()
     {

     }

     void print()
     {
          
     }
}

int main()
{

     return 0;
}

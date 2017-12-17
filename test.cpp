#include <iostream>
using namespace std;

class queue
{
     class node
     {
     public:
          int data;
          node *next;
          node()
          {
               next = nullptr;
          }
     };
public:
     node *front, *rear;
     queue()
     {
          front = nullptr;
          rear = nullptr;
     }

     node* createNewNode(int d)
     {
          node* newptr = new node;
          newptr->data = d;
          return newptr;
     }

     void inNode(int x)
     {
          node *newptr = nullptr;
          newptr = createNewNode(x);
          if(front == nullptr)
               front = rear = newptr;
          else
          {
               rear->next = newptr;
               rear = newptr;
          }
     }

     void delNode()
     {
          node *ptr = nullptr;
          if(front == nullptr)
               cout<<"ERROR: the queue is empty"<<endl;
          else
          {
               ptr = front;
               front = front->next;
               delete ptr;
          }
     }

     int getFront()
     {
          return front;
     }

     bool isEmpty()
     {
          if(front == nullptr)
               return true;
          else
               return false;
     }

     void print()
     {
          node *ptr = front;
          while(ptr != nullptr)
          {
               cout<<ptr->data<<" <-- ";
               ptr = ptr->next;
          }
          cout<<endl;
     }
};

int main()
{
     
     return 0;
}

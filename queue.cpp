#include <iostream>
using namespace std;

template<class T>
class queue
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
     queue()
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

     void inNode()
     {
          T x;
          node *newptr = nullptr;
          cout<<"Enter data: ";
          cin>>x;
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
     queue<char> q;
     q.inNode();
     q.inNode();
     q.inNode();
     q.inNode();
     q.inNode();
     q.print();
     q.delNode();
     q.print();
     q.delNode();
     return 0;
}

#include <iostream>
using namespace std;

template<class T>
class stack
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
     node *top;
     stack()
     {
          top = nullptr;
     }

     node* createNewNode(T d)
     {
          node* newptr = new node;
          newptr->data = d;
          return newptr;
     }

     void push()
     {
          T x;
          node *newptr = nullptr;
          cout<<"Enter data: ";
          cin>>x;
          newptr = createNewNode(x);
          if(top == nullptr)
               top = newptr;
          else
          {
               newptr->next = top;
               top = newptr;
          }
     }

     void pop()
     {
          node *ptr = nullptr;
          ptr = top;
          if(top == nullptr)
               cout<<"ERROR: empty stack"<<endl;
          else
          {
               top = top->next;
               cout<<"popped "<<ptr->data<<endl;
               delete ptr;
          }
     }
     
     void printTop()
     {
          cout<<"Top element: "<<top->data<<endl;
     }

     void print()
     {
          node *ptr = top;
          while(ptr != nullptr)
          {
               cout<<ptr->data<<" --> ";
               ptr = ptr->next;
          }
          cout<<endl;
     }
};

int main()
{
     stack<char> s;
     s.push();
     s.push();
     s.push();
     s.push();
     s.push();
     s.push();
     s.print();
     s.pop();
     s.pop();
     s.print();
     s.pop();
     s.pop();
     s.print();
     return 0;
}

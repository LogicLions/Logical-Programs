#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node* next;
};

typedef struct node NODE;
typedef struct node* PNODE;

class Stack
{
    private:
        PNODE TOP;
        int count;
    public:
        Stack()
        {
            TOP = NULL;
            count = 0;
        }

        void Push(int data)
        {
            PNODE temp=new NODE;
            temp->data = data;
            temp->next = NULL;

            if(TOP == NULL)
            {
                TOP = temp;
            }
            else
            {
                temp->next = TOP;
                TOP = temp;
            }

            count++;
        }

        void Pop()
        {
            if(TOP == NULL)
            {
                cout<<"Stack is already empty."<<endl;
            }
            else
            {
                PNODE temp = TOP;
                TOP = TOP->next;
                cout<<"Popped element is :"<<temp->data<<endl;
                delete temp;
            }
            
            count--;
        }

        void Display()
        {
            PNODE temp;
            temp = TOP;
            cout<<"Stack :"<<endl;
            while(temp != NULL)
            {                
                cout<<temp->data<<endl;
                temp=temp->next;
            }
        }

        int GetTop()
        {
            if(TOP == NULL)
            {
                cout<<"Stack is empty."<<endl;
            }
            else
            {
                cout<<"TOP Element is: "<<TOP->data<<endl;
            }
        }

        int GetCount()
        {
            cout<<"Count :"<<count<<endl;
        }
};

int main()
{
    Stack stack;
    stack.Push(10);
    stack.Push(20);
    stack.Push(30);
    stack.Push(40);

    stack.GetCount();
    stack.Display();

    stack.Pop();
    stack.Display();

    stack.Pop();
    stack.Display();

    return 0;
}
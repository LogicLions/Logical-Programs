#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node *PNODE;

class Stack
{
    private:
        PNODE TOP;
        int iCount;

    public:
        Stack();
        void display();
        int GetCount();
        void Push(int no);
        void Pop();
        int GeTop();
        bool isEmpty();
};

Stack :: Stack()
{
    TOP=NULL;
    iCount = 0;
}

void Stack :: Push(int no)
{
    PNODE temp = NULL;
    temp = new NODE;

    

}

int Stack :: GetCount()
{
    return iCount;
}

int main()
{
    return 0;
}


#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class Stack
{
    Node *top;
    int size;

public:
    Stack()
    {
        top = NULL;
        size = 0;
    }
    void push(int val)
    {
        Node *temp = new Node(val);
        temp->next = top;
        top = temp;
        size++;
    }
    void pop()
    {
        if (size == 0)
        {
            cout << "\nstack underflow\n";
            return;
        }
        else
        {
            Node *temp = top;
            top = top->next;
            delete temp;
            size--;
        }
    }
    int peek()
    {
        if (size == 0)
        {
            cout << "\nstack underflow\n";
            return -1;
        }
        else
        {
            return top->data;
        }
    }
    bool isEmpty()
    {
        if (size == 0)
        {
            return true;
        }
        else
            return false;
    }
    int isSize()
    {
        return size;
    }
};

int main()
{
    Stack s;
    s.push(5);
    cout<<s.peek();
    cout<<"\n"<<s.isSize(); 
    return 0;
}
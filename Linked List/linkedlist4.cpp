#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

Node *Head;

void insertatbegin(int x)
{
    if (Head == NULL)
    {
        Head = new Node(x);
    }
    else
    {
        Node *temp = new Node(x);
        temp->next = Head;
        Head = temp;
    }
}
void displaylist()
{
    Node *temp = Head;
    while (temp != NULL)
    {
        if (Head == NULL)
        {
            return;
        }
        else
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
}
int main()
{
    int x;
    cout << "\nEnter the elements of linked list :: " << endl;
    while (true)
    {
        cin >> x;
        if (cin.fail())
        {
            displaylist();
            break;
        }
        insertatbegin(x);
    }

    return 0;
}
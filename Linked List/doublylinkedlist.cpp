#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int x, Node *radd, Node *ladd)
    {
        data = x;
        next = radd;
        prev = ladd;
    }

    Node(int x)
    {
        data = x;
        next = NULL;
        prev = NULL;
    }
};
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;
    Node *head = NULL, *temp = NULL, *back = NULL;
    for (int i = 0; i < size; i++)
    {
        if (head == NULL)
        {
            head = new Node(arr[i]);
            back = head;
        }
        else
        {
            temp = new Node(arr[i], NULL, back);
            back->next = temp;
            back = back->next;
        }
    }
    Node *current = head;
    while (current->next != NULL)
    {
        cout << current->data << " ";
        current = current->next;
    }
    cout << current->data;
    while (current != NULL)
    {
        cout << "\n"
             << current->data << " ";
        current = current->prev;
    }
    delete current, back;
    return 0;
}
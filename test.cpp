#include <iostream>
#include <climits>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

void append(Node **head_ref, int new_data)
{
    Node *new_node = new Node();
    Node *last = *head_ref;
    new_node->data = new_data;

    new_node->next = NULL;
    if (*head_ref == NULL)
    {
        *head_ref = new_node;
        return;
    }
    while (last->next != NULL)
    {
        last = last->next;
    }
    last->next = new_node;
    return;
}

void deleteNode(Node **head_ref, int key)
{

    Node *temp = *head_ref;
    Node *prev = NULL;

    if (temp != NULL && temp->data == key)
    {

        *head_ref = temp->next;

        delete temp;
        return;
    }

    else
    {
        while (temp != NULL && temp->data != key)
        {
            prev = temp;
            temp = temp->next;
        }
        if (temp == NULL)
            return;
        prev->next = temp->next;
        delete temp;
    }
}

void printList(Node *node)
{
    while (node != NULL)
    {
        cout << node->data << " ";
        node = node->next;
    }
}

int main()
{
    int flag = true, c, ele, count = 0;
    Node *head = NULL;

    while (flag)
    {
        cout << "Enter 1 to insert x in the set s\nEnter 2 to remove the bottom half\nEnter 3 to print the linkedlist\nEnter any other number to exit";
        cin >> c;

        switch (c)
        {
        case 1:
            cout << "Enter the number :- \n";
            cin >> ele;
            append(&head, ele);
            break;
        case 2:
            Node *last = head;
            Node *temp = head;
            int min = INT_MAX;
            while (last->next != NULL)
            {
                count++;
                last = last->next;
            }

            for (int i = 0; i < (count / 2); i++)
            {
                while (temp->next != NULL)
                {
                    count++;
                    if (temp->data < min)
                    {
                        min = temp->data;
                    }
                    temp = temp->next;
                }
                deleteNode(&head, min);
            }
            break;

        case 3:
            printList(head);
            break;

        default:
            flag = false;
            break;
        }
    }
    return 0;
}
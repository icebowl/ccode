#include<iostream>

using namespace std;

struct node
{
    int data;
    node* next;
};

void pushList(struct node **head_ref, int element)
{
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data = element;
    temp->next = *head_ref;
    *head_ref = temp;
}

void printList(struct node* node)
{
    while (node != NULL)
    {
        cout << node->data << endl;
        node = node->next;
    }
}

struct node* thirdLastElement(struct node *head)
{
    struct node *slow = head;
    struct node *fast = head;

    if (head == NULL || head->next == NULL)
    {
        cout << " Required Nodes Are Not Present ";
        return 0;
    }


    fast = fast->next->next->next;

    while (fast != NULL)
    {
        slow = slow->next;
        fast = fast->next;
    }

    return(slow->data);
}

int main()
{
    struct node* head = NULL;
    int n;

    cout << " Enter the number of elements " << endl;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        pushList(&head, i);
    }

    cout << " the list formed is :" << endl;
    printList(head);

    //cout << " the third last element is : " << thirdLastElement(head) << endl;

    return 0;
}

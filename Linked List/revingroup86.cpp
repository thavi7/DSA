#include <iostream>
#include <climits>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int value)
    {
        data = value;
        next = NULL;
    }
};

node *creatlinklist(int arr[], int i, int n)
{
    if (i == n)
    {
        return NULL;
    }
    node *temp = new node(arr[i]);
    temp->next = creatlinklist(arr, i + 1, n);
    return temp;
}

node *ingroup(node *head, int k)
{
    node *first = new node(0);
    first->next = head;
    head = first;

    node *second, *pre, *fut, *curr;
    int x;

    while (first->next)
    {
        x = k;
        second = first->next;
        pre = first;
        curr = first->next;
        while (x && curr)
        {
            fut = curr->next;
            curr->next = pre;
            pre = curr;
            curr = fut;
            x--;
        }

        first->next = pre;
        second->next = curr;
        first = second;
    }
    
        first = head;
        head = head->next;
        delete first;
        return head;
}

int main()
{

    int arr[] = {2, 3, 4, 6, 8, 7, 5, 9, 11, 17};
    node *head = NULL;
    head = creatlinklist(arr, 0, 10);

    head = ingroup(head, 4);

    node *print = head;
    while (print)
    {
        cout << print->data << " ";
        print = print->next;
    }
    return 0;
}
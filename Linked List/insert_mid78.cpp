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

int main()
{

    int arr[] = {2, 4, 6, 8};
    int x = 2, value = 30;

    node *head = NULL;

    head = creatlinklist(arr, 0, 4);

    node *temp = head;
    x--;
    while (x--)
    {
        temp = temp->next;
    }
    node *temp2 = new node(value);
    temp2->next = temp->next;
    temp->next = temp2;

    node *print = head;
    while (print)
    {
        cout << print->data << " ";
        print = print->next;
    }

    return 0;
}
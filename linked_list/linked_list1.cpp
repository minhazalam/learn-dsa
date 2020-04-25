// Implementation of the linked list which comprises of the operations like
// 1. defining a Node
// 2. creating a Node
// 3. traversing 
// 4. displaying node's data

#include <bits/stdc++.h>
using namespace std;

// define Node
struct Node
{
    int data;
    struct Node * next;
};
// 1 iterative method
// displays the data of the nodes
void display(struct Node *p)
{
    // traverse through the linked list
    // as long as we reach the last node
    while (p != NULL)
    {
        printf("%d \n", p->data);
        p = p -> next;
    }
}

// 2 recurssive method
// display function

void dispay_rec(struct Node * p)
{
    // base condition for cont..
    if(p != NULL)
    {
        cout<< p->data << endl;
        dispay_rec(p->next);
    }
}

int main()
{
    struct Node *first = NULL;

    // add node
    // allocate memory in heap
    first = (struct Node *) malloc(sizeof(struct Node));

    // store data
    first -> data = 10;

    // next does not point to any of the bext node
    first -> next = NULL; 

    display(first); // called

    cout << "*************** break *******************\n";

    dispay_rec(first);

    /* if(first->next == NULL)
    {
        cout << "last node\n";
    } */

    return 0;

}
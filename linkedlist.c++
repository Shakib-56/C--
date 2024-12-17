#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int value;
        Node *Next;
};

void printList(Node*n){

    while(n != NULL){
        cout << n->value << endl;
        n = n->Next;
    }

}
//Insert an element in linked list

// void InsertAtTheFront(Node**head,int newValue){
//     //Prepare a New Node
//     Node *newNode = new Node();
//     newNode->value = newValue;
//     //Put it in front of current head
//     newNode->Next = *head;
//     //Move head of the list to point to the newNode
//     *head = newNode;
// }

//Insert an element at the end
void InsertAtTheEnd(Node**head,int newValue){

    //Prepare a newNode
    Node *newNode = new Node();
    newNode->value = newValue;
    newNode->Next = NULL;

    //If linked list is empty,newNode will be a head node
    if(*head == NULL){
        *head = newNode;
        return;
    }

    //Find the last node
    Node *last = *head;
    while(last->Next !=NULL){
        last=last->Next;
    }

    //Insert newNode after last node (at the end)
    last->Next = newNode;
}

int main(){
    Node *head = new Node();
    Node *second = new Node();
    Node *third = new Node();

    head->value = 2;
    head->Next = second;
    second->value = 3;
    second->Next= third;
    third->value = 4;
    third->Next = NULL;
    // InsertAtTheFront(&head, -1);
    InsertAtTheEnd(&head, 5);
     InsertAtTheEnd(&head, 6);
    printList(head);
}
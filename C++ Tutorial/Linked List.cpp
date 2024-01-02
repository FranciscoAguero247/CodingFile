#include <iostream>
using namespace std;


class Node{
public:
    int Value;
    Node* Next;
};

void printlist(Node* n){
   while(n!=NULL){
        cout << n->Value << endl;
        n = n->Next;
    }
}
void insertAtTheFront(Node**head, int newValue){
    //1. Prepare a newNode
    Node * newNode = new Node();
    newNode->Value = newValue;
    //2. Put it in front of current head
    newNode->Next = *head;
    //3. Move head of the list to point to the newNode
    *head = newNode;

}

void insertatTheEnd(Node**head, int newValue){
     //1. Prepare a newNode
     Node* newNode = new Node();
     newNode->Value = newValue;
     newNode->Next = NULL;
     //2. If Linked list is empty, newNode will be a head node
    if(*head == NULL){
        *head = newNode;
        return;
    }
    //3. Find the last node
    Node* last = *head;
    while(last->Next!=NULL){
        last = last->Next;
    }
    //4. Insert newNode after last node(at the end)
    last->Next = newNode;
}

void insertAfter(Node*prevoius, int newVale){
    //1. Check if prevoius node is NULL
    if(prevoius == NULL){
        cout << "Previous cannot be NULL";
    }
    //2. Prepare a newNode
    Node* newNode = new Node();
    newNode->Value = newVale;
    //3. Insert newNode after previous
    newNode->Next = prevoius->Next;
    prevoius->Next = newNode;
}

int main(){
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    head->Value = 1;//-> access the value in the class node without the use of .
    head->Next = second;

    second->Value = 2;
    second->Next = third;

    third->Value = 3;
    third->Next = NULL;


    //insertAtTheFront(&head, -1);
    //insertatTheEnd(&head, 4);
    //insertatTheEnd(&head, 5);

    insertAfter(head, -1);
    insertAfter(second, -2);
    printlist(head);

    return 0;
}

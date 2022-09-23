#include "iostream"
using namespace std;

// Creating a node and declaring node head as global also assigning it with nullptr.
// call operation.For Pop operation
//    POP-> take a value as its parameter. creating a newnode/temp . assigning parameter value to newnodes value and referencing it with
//          the head . head = newnode.
//
//    PUSH -> creating a temp node.If the head is null then print null or else free the storage.

struct node {
    int data;
    struct node *next;
};

struct node *head = nullptr;

void push(int value){
    struct node *newnode;
    newnode = static_cast<node *>(malloc(sizeof(struct node)));

    newnode ->data = value;
    newnode ->next = head;

    head =newnode;
}

void pop(){
    struct node *temp;

    if(head==nullptr){
        printf("Stack is empty");
    }else{
        temp =head;
        head =head->next;

        free(temp);
    }
}

int main(){
    push(10);
    push(12);
    push(11);
    pop();

    struct node *temp = head;
    while(temp!= nullptr){
        printf(" %d ", temp->data);
        temp =temp->next;
    }

}

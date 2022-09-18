#include "iostream"
using namespace std;

// Question : print the reverse linked list [Dont't make the Linked List Reverse.]

//Creating a node
struct node{
    int data;
    struct node *next;
};

//Initializing the nodes
struct node *one, *two,*three, *four;


void print_in_reverse(struct node *head){
    //close the loop when head ==null
    if(head == nullptr){
        return;
    }
    // Recursive method : move to the next element of head, call itself and print the data when its nullptr then stop.
    //Printing the elements
    print_in_reverse(head->next);
    printf("%d ",head->data);
}

int main(){

    one = static_cast<node *>(malloc(sizeof(struct node)));
    two =static_cast<node *>(malloc(sizeof(struct node)));
    three = static_cast<node *>(malloc(sizeof(struct node)));
    four = static_cast<node *>(malloc(sizeof(struct node)));

    one->data = 10;
    one->next = two;

    two->data = 20;
    two->next = three;

    three->data = 30;
    three->next = four;

    four->data = 40;
    four->next = NULL;

    print_in_reverse(one);

    return 0;
}

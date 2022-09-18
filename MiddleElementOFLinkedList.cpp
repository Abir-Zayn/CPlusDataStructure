#include "iostream"
using namespace std;

//Question : Get the middle element of a linked list.


//Find the middle element of a linked list.

struct node {
    int data;
    struct node *next;
};

struct node *one, *two, *three, *four, *five;

//Getting the length of a linked list.
int getLength(struct node *head) {

    // creating a temp node
    struct node *temp = head;
    int count = 0;

    // getting the size
    while (temp != nullptr) {
        count++;
        temp = temp->next;
    }
    return count;
}


int getMiddleNode(struct node *head) {
    struct node *temp = head;

    //IF the temp linked list isn't null then get the length of Linked List.
    if (temp != nullptr) {
        
        //getting the length of the node
        int length = getLength(temp);
        printf("The length of the linked list %d \n", length);
        
        for (int i = 0; i < length / 2; i++) {
            temp = temp->next;
        }
        return temp->data;
    } else {
        return -1;
    }
}


int main() {

    one = static_cast<node *>(malloc(sizeof(struct node)));
    two = static_cast<node *>(malloc(sizeof(struct node)));
    three = static_cast<node *>(malloc(sizeof(struct node)));
    four = static_cast<node *>(malloc(sizeof(struct node)));
    five = static_cast<node *>(malloc(sizeof(struct node)));

    one->data = 10;
    one->next = two;

    two->data = 20;
    two->next = three;

    three->data = 30;
    three->next = four;

    four->data = 40;
    four->next = five;

    five->data = 50;
    five->next = NULL;

    int res = getMiddleNode(one);
    if (res == -1) {
        printf("The Linked List is null ");
    } else {
        cout << res << endl;
    }
}

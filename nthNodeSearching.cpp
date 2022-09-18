#include "iostream"
using namespace std;

//Question: Getting the Nth node in a linked list
struct node{
    int data;
    struct node *next;
};

struct node *one, *two, *three, *four, *five;

//Getting the size of a node
int getSize(struct node *head){
    struct node *temp =head;
    int count=0;

    //Getting the length
    while(temp!= nullptr){
        temp = temp->next;
        count++;
    }
    return count;
}


//nTh position value
int nThNode(struct node *head, int key){
    struct node *temp =head;
    int i =0;
    int length = getSize(temp);
    
    //If the linked list isn't null then 
        // check IF the key(index) is greater or less than 0 .
            //IF yes, then return -1;
    if(temp != nullptr) {
        if(key>length || key<0){
         return -1;
         
    //IF the list length isn't greater than key or less than 0
        //iterate through the key element and stop.
        // return the element.
        }else {
            while (i < key) {
                temp = temp->next;
                i++;
            }
            return temp->data;
        }
    }
}


int main(){
    one = static_cast<node *>(malloc(sizeof(struct node)));
    two =static_cast<node *>(malloc(sizeof(struct node)));
    three = static_cast<node *>(malloc(sizeof(struct node)));
    four =static_cast<node *>(malloc(sizeof(struct node)));
    five =static_cast<node *>(malloc(sizeof(struct node)));

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

    int key ;
    cout<<"Enter the n-th Index Number "<<endl;
    cin>>key;

    int res = nThNode(one,key);
    if(res ==-1){
        printf("The %d-th index doesn't exist. ",key);
    } else{
        printf("The %d-th index value is %d",key, res);
    }
    return 0;
}

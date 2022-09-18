#include <iostream>
 using namespace std;

// Question: Search for an element in a linked list.

 struct node{
     int data;
     struct node *next;
 };
 struct node *first, *second, *third, *last;

 void searching(struct node **head, int key){
     int val=0;
     struct node *temp;

     if((*head)->data ==key){
       val =1;
     }else{
         temp = *head;
         while(temp->next !=nullptr){
             if(temp->data==key){
                val =1;
             }
             temp = temp->next;
         }
         val =0;
     }

     if(val ==1){
         printf("Value has found in the Linked List. \n");
     }else{
         printf("value doesn't exist in the Linked List. \n");
     }
 }

 int main() {
     first =  static_cast<node *>(malloc(sizeof(struct node)));
     second = static_cast<node *>(malloc(sizeof(struct node)));
     third = static_cast<node *>(malloc(sizeof(struct node)));
     last = static_cast<node *>(malloc(sizeof(struct node)));

     first->data = 10;
     first->next = second;

     second->data = 20;
    second->next = third;

     third->data = 30;
     third->next = last;

   last->data = 40;
   last->next = nullptr;

    searching(&first,30);
}

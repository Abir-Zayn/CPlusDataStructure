#include<iostream>
using namespace std;
const int len=5;

//Question: Perform Stack (push-pop) operation in an empty array. STACK ->> First In -Last Out.
//Creating an array with determining the top index=-1;
int arr[len];
int top=-1;

//push operation function.If the top =-1 then insert value and increment it.
  //Do this process until the top equavalent to the length of array.
    //IF the top ==size-1 then top reached its max position and cant insert value.

void push(int value){
    if(top== len-1){
        printf("Value cant insert.Its full.");
        printf("\n");
    }else{
        top++;
        arr[top] = value;
        printf("Pushed value is :%d",arr[top]);
        printf("\n");
    }
}

//pop operation function.Everytime the function has call then discrease the last element of stack.
  //Decrement the size. Do this process until top becomes -1. IF its -1 then print cant delete.

void pop(){
    if(top==-1){
        printf("Value cant be deleted.Its Empty");
        printf("\n");
    }else{
        printf("Popped out value is %d",arr[top]);
        top--;
        printf("\n");
    }
}

int main() {
   push(10);
   push(20);
   push(30);
   push(40);
   pop();
   pop();
   pop();
   return 0;
}

#include <bits/stdc++.h> 
void solve(stack<int>& s, int x) {
   
    if(s.empty()) {
        s.push(x);
        return ;
    }
    
    int num = s.top();
    s.pop();
    

    solve(s, x);
    
    s.push(num);
}

stack<int> pushAtBottom(stack<int>&mystack, int x) 
{
    solve(mystack, x);
    return mystack;
}




//
// Another my approach
//

#include<iostream>
#include <stack>
using namespace std;
//Check if its empty;
// If not make it empty;


// 10-> 11-> 4-> 5;
// add 1;  1->10-> 11-> 4-> 5;

void enterElement(int num, stack<int>* p){
    p->push(10);
    p->push(11);
    p->push(12);
    p->push(13);
    p->push(14);
    int n = p->size();
    cout<<n<<endl;

    int arr[n];
    for(int i=n; i>p->empty(); i--){
        int pick = p->top();
        arr[i]=pick;
        p->pop();
    }
    int x=0;
    while(x<n+1){
        if(x==0){
            p->push(num);
        }else {
            p->push(arr[x]);
        }
        x++;
    }

    while(!p->empty()){
        int y = p->top();
        cout<<y<<" ";
        p->pop();
    }


}


int main(){
    stack <int>s;
    enterElement(2, &s);
    return 0;
}


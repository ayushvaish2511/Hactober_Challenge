#include<iostream>
using namespace std;

int st[5];
int top = -1;

bool isfull(){
    if(top == 4){
        return 1;
    }
    else{
        return 0;
    }
}

bool isempty(){
    if(top == -1){
        return 1;
    }
    else{
        return 0;
    }
}

void push(int a){
    if(isfull()){
        cout<<"stack is already full"<<endl;
    }
    else{
        top++;
        st[top] = a;
        cout<<"pushed "<<a<<" to stack"<<endl;
    }
}

int pop(){
    int a = st[top];
    if(isempty()){
        cout<<"Stack has no elements"<<endl;
    }
    else{
        top--;
    }
    return a;
}

void peek(){
    if(isempty()){
        cout<<"Stack has no elements"<<endl;
    }
    else{
        cout<<"top: "<<st[top]<<endl;
    }
}

void print(){
    for(int i=0;i!=top+1;i++){
        cout<<st[i]<<' ';
    }
    
}

int* reverse(){
    cout<<endl<<"reverse: ";
    int rst[5],a,rtop = -1;
    for(int i=top;i>=0;i--){
        a = pop();
        rtop++;
        rst[rtop] = a;
    }
    for(int i=0;i!=rtop+1;i++){
        cout<<rst[i]<<' ';
    }
    return rst;
}
int main(){
    int n,a;
    cout<<"Choose an operation to perform\n 1. push\n 2. pop\n 3. peek\n 4. print\n 5.reverse\n Press 0 to exit"<<endl;
    while(true){
        cin>>n;
        if(n==0){
            cout<<"exiting...";
            return 0;
        }
        switch (n){
            case 1: cout<<"Enter the number to push ";
                    cin>>a;
                    push(a);
                    break;
            case 2: cout<<"Popped "<<pop()<<endl;
                    break;
            case 3: peek();
                    break;
            case 4: print();
                    cout<<endl;
                    break;
            case 5: reverse();
                    cout<<endl;
                    break;
        }
    }
    return 0;
}
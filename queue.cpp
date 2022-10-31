#include<iostream>
using namespace std;

int qu[5];
int rear = -1;
int front = -1;

bool isempty(){
    if(rear == -1 && front == -1){
        return 1;
    }
    else{
        return 0;
    }
}

bool isfull(){
    if(front == (rear+1)%5){
        return 1;
    }
    else{
        return 0;
    }
}
void enqueue(int a){
    if(isfull()){
        cout<<"queue is full"<<endl;
    }
    else{
        if(front==-1 && rear == -1){
            front = 0;
            rear = 0;
            qu[rear] = a;
            cout<<"enqueued "<<a<<endl; 
        }else{
            rear = (rear+1)%5;
            qu[rear] = a;
            cout<<"enqueued "<<a<<endl; 
        }
    }
}

void dequeue(){
    if(isempty()){
        cout<<"queue is empty"<<endl;
    }
    else if( front == rear){
        cout<<"dequeued "<<qu[rear]<<endl;
        front = rear = -1;
    }
    else{
        cout<<"dequeued "<<qu[front]<<endl;
        front = (front+1)%5;
    }
}

void peek(){
    if(isempty()){
        cout<<"queue is empty"<<endl;
    }
    else{
        cout<<"Front: "<<qu[front]<<" Rear "<<qu[rear]<<endl;
    }
}

void print(){
    if(isempty()){
        cout<<"queue is empty"<<endl;
    }
    else{
        for(int i = front;i!=(rear%5);i=(i+1)%5){
            cout<<qu[i]<<' ';
        }
        cout<<qu[rear]<<endl;
    }
}

int main(){
    int n,a;
    cout<<"Choose an operation to perform\n 1. Enqueue\n 2. Dequeue\n 3. peek\n 4. print\n Press 0 to exit"<<endl;
    while(true){
        cin>>n;
        if(n==0){
            cout<<"exiting...";
            return 0;
        }
        switch (n){
            case 1: cout<<"Enter the number to push ";
                    cin>>a;
                    enqueue(a);
                    break;
            case 2: dequeue();
                    break;
            case 3: peek();
                    break;
            case 4: print();
                    cout<<endl;
                    break;
        }
    }
    return 0;
}
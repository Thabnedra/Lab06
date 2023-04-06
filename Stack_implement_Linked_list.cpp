#include<iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;
class Node{
    public:
    int data;
    Node* next=NULL;
};
class Stack_Linked_list{
    int size_of_Linked_list;
    int length_of_Linked_list=0;
    Node *head=new Node();
    public:
    Stack_Linked_list(int size){
        size_of_Linked_list=size;
    }
    void Push(int push_value){
        /*if(head->next==NULL){
            head->data=push_value;
            cout<<"value_is_pushed_succesfully"<<endl;
        }*/
        if(length_of_Linked_list<size_of_Linked_list){
            Node *temp= new Node();
            temp->data=push_value;
            temp->next=head;
            head=temp;
            length_of_Linked_list++;
            cout<<"value_is_pushed_Scuccesfully"<<endl;
        }
        else{
            cout<<"Stack is allredy full"<<endl;
        }
    }
    void Pop(){
        if(length_of_Linked_list==0){
            cout<<"this stack is already empty"<<endl;
        }
        else{
            Node* temp=head;
            cout<<head->data<<endl;
            head=temp->next;
            delete temp;
            length_of_Linked_list--;
        }
    }
    void isEmpty(){
        if(length_of_Linked_list==0){
            cout<<"True"<<endl;
        }
        else{
            cout<<"false"<<endl;
        }
    }
    void isFull(){
        if(length_of_Linked_list==size_of_Linked_list){
            cout<<"True"<<endl;
        }
        else{
            cout<<"false"<<endl;
        }
    }
    void Display(){
        Node* temp1=head;
        while(temp1->next!=NULL){
            cout<<temp1->data<<endl;
            temp1=temp1->next;
        }
    }
};
int main(){
    int num;
    cin>>num;
    Stack_Linked_list l1(num);
    auto start = high_resolution_clock::now();
    l1.Push(rand()%100);
    l1.Push(rand()%100);
    l1.Push(rand()%100);
    l1.Push(rand()%100);
    l1.Push(rand()%100);
    l1.Push(rand()%100);
    l1.Push(rand()%100);
    l1.Push(rand()%100);
    l1.Push(rand()%100);
    l1.Push(rand()%100);
    l1.Display();
    l1.Pop();
    l1.Pop();
    l1.Pop();
    l1.Pop();
    l1.Pop();
    l1.Display();
    l1.Push(rand()%100);
    l1.Push(rand()%100);
    l1.Push(rand()%100);
    l1.Push(rand()%100);
    l1.Display();
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << duration.count() <<" microseconds"<< endl;
}
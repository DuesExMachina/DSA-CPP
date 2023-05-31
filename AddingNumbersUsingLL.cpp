/*
You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.
*/

#include <iostream>

using namespace std;

struct node{
int data;
node *next;
};

void push(node *l){
    node *ptr=new node();
    ptr=l;
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    node *n=new node();
    cout<<"enter the value: ";
    cin>>n->data;
    ptr->next=n;
}

void show(node *l){
    node *ptr=new node();
    ptr=l;
    do{
        cout<<ptr->data;
        ptr=ptr->next;
    }while(ptr->next!=NULL);
    cout<<ptr->data;
}

void add(node *l1,node *l2,node *l3){
    node *ptr1=new node();
    node *ptr2=new node();
    node *ptr3=new node();
    
    ptr1=l1;
    ptr2=l2;
    ptr3=l3;
    while(ptr1!=NULL){
        ptr3->data=(ptr1->data)+(ptr2->data);
        ptr1=ptr1->next;
        ptr2=ptr2->next;
        ptr3=ptr3->next;
    }
    ptr3->data=(ptr1->data)+(ptr2->data);
}
int main()
{
    node *l1=new node();
    node *l2=new node();
    
    //add  3 elements in l1
    cout<<"enter the value for first element of the list l1: ";
    cin>>l1->data;
    for(int i=0;i<2;i++){
        push(l1);
    }
    
    //add 3 elements in l2
    cout<<"enter the value for first element of the list: ";
    cin>>l2->data;
    for(int i=0;i<2;i++){
        push(l2);
    }
    
    show(l1);
    show(l2);
    
    //node *l3=new node();
    //add(l1,l2,l3);
    //show(l3);
    
    return 0;
}

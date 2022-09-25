#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct node{
int age;
string name;
node *next;
node *prev;
node(string s, int x){
    name=s;
    age=x;
    prev = NULL;
    next = NULL;
}
};

void printtheLL(node *head){
    while(head!=NULL) {
        cout<<"[NAME:"<<head->name<<"  "<<"AGE:"<<head->age<<"]"<<"->>";
        head=head->next;
    }

}

int main(){
    node *father=new node("PRADIP KUMAR ROY",55);
    node *mother=new node("RITA ROY",50);
    node *sister=new node("SAYANTANEE ROY",25);
    node *myself=new node("AREEDEEP ROY",20);


    node *head=father;

    father->prev=NULL;
    father->next=mother;
    mother->prev=father;
    mother->next=sister;
    sister->prev=mother;
    sister->next=myself;
    myself->prev=sister;
    myself->next=NULL;


    printtheLL(head);

    return 0;
}

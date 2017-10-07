//
//  SD-LIST-REVERSE(L).hpp
//  SD-LIST-REVERSE(L)
//
//  Created by Sumitha on 6/9/17.
//  Copyright © 2017 Sumitha. All rights reserved.
//

#ifndef SD_LIST_REVERSE_L__hpp
#define SD_LIST_REVERSE_L__hpp

#include <stdio.h>
using namespace std;
struct node{
    int key;
    struct node* prev;
    struct node* next;
};

struct node* head = NULL;

node* insertAtFirst(node* head,int key){
    struct node* temp = new node;
    temp->key = key;
    temp->prev = NULL;
    temp->next = NULL;
    if(head==NULL){
        head = temp;
    }
    else{
        
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
    return head;
}


node* sortedListReverse(node* head){
    //If the linked list is empty
    if(head == NULL){
        return head;
    }
    
    struct node* temp = NULL;
    struct node* current = head;
    while(current!=NULL){
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;
        current = current->prev;
    }
    head = temp->prev;
    
    return head;
}

//Display items in the linked list
void displayList()
{
    
    struct node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->key<<" ";
        temp=temp->next;
    }
    cout<<"\n";
}


#endif /* SD_LIST_REVERSE_L__hpp */

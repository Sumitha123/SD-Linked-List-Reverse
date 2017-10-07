//
//  main.cpp
//  SD-LIST-REVERSE(L)
//
//  Created by Sumitha on 6/9/17.
//  Copyright © 2017 Sumitha. All rights reserved.
//

#include <iostream>
#include "SD-LIST-REVERSE(L).hpp"


int main() {
    
    head = insertAtFirst(head,5);
    head = insertAtFirst(head,4);
    head = insertAtFirst(head,3);
    head = insertAtFirst(head,2);
    head = insertAtFirst(head,1);
    cout << "Sorted Doubly Linked List : ";
    displayList();
    cout << "SD-LIST-REVERSE(head) : ";
    head = sortedListReverse(head);
    displayList();
    
    
    return 0;
}

//
// Created by arisl on 16.04.2019.
//

#include <iostream>
#include "PriorityQueue.h"

using namespace std;

//Private:
Entry * PriorityQueue::findValue(string &value) {
    Entry * temp = head;
    // try to find value
    while (temp != nullptr) {
        if (temp->value == value) { // found value -> return
            return temp;
        }
        temp = temp->next;
    }
    return nullptr;
}



//Public:
PriorityQueue::~PriorityQueue() {
    while (!isEmpty())
        extractMin();
}

void PriorityQueue::insert(string value, float priority) {
    Entry * newEntry = new Entry(value, priority);

    // Queue is empty -> insert as head and tail
    if (isEmpty()) {
        head = newEntry;
        tail = newEntry;
        return;
    }

    // newEntry->priority's value is the smallest -> insert at head
    if (newEntry->priority < head->priority) {
        newEntry->next = head;
        head->previous = newEntry;
        head = newEntry;
        return;
    }

    // newEntry->priority's value is the largest -> insert at the end
    if (newEntry->priority > tail->priority) {
        newEntry->previous = tail;
        tail->next = newEntry;
        tail = newEntry;
        return;
    }

    // newEntry->priority's value is somewhere inbetween -> find insertion pos
    Entry * temp = head;
    while (temp->next != nullptr) {
        if (newEntry->priority < temp->next->priority) {    // found insertion pos -> insert
            newEntry->next = temp->next;
            newEntry->previous = temp;
            temp->next->previous = newEntry;
            temp->next = newEntry;
            return;
        }
        temp = temp->next;  // did not find insertion pos yet, proceed next element
    }
}

string PriorityQueue::extractMin() {
    // Queue is empty -> error
    if (isEmpty()) {
        throw "Cannot extract from empty Queue!";
    }

    Entry * removeThis = head;
    // Element is last one -> clear head and tail
    if (head->next == nullptr) {
        head = nullptr;
        tail = nullptr;
    } else {    // Element is not last one -> rearrange pointers
        head = head->next;
        head->previous = nullptr;
    }

    string returnThis = removeThis->value;  // backup the value we want to return
    delete removeThis;  // free the allocated memory

    return returnThis;
}

void PriorityQueue::decreaseKey(string value, float priority) {
    Entry * reinsertThis = findValue(value);
    // did not find value -> error
    if (reinsertThis == nullptr) {
        throw "Cannot change priority of element that doesn't exist!";
    }

    // found value -> reinsert value
    remove(value);
    insert(value, priority);
}

void PriorityQueue::remove(string value) {
    if (isEmpty())
        return;

    Entry * removeThis = findValue(value);

    // Element is last one in list
    if (head == tail) {
        head = nullptr;
        tail = nullptr;
    } else if (removeThis == head) {
        head->next->previous = nullptr;
        head = head->next;
    } else if (removeThis == tail) {
        tail->previous->next = nullptr;
        tail = tail->previous;
    } else {
        removeThis->next->previous = removeThis->previous;
        removeThis->previous->next = removeThis->next;
    }

    delete removeThis;  // free the allocated memory
}

bool PriorityQueue::isEmpty() {
    return head == nullptr;
}

void PriorityQueue::printQueue() {
    Entry * printMyVal = head;
    int i = 1;
    cout << endl << "--- Printing queue elements... ---" << endl;
    while (printMyVal != nullptr) {
        cout << "Element #" << i << ": '" << printMyVal->value << "'" << endl;
        printMyVal = printMyVal->next;
        i++;
    }
    cout << "--- Printing complete! ---" << endl << endl;
}
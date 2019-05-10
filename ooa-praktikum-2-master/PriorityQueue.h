#include <string>

using namespace std;

#ifndef OOA_PRAKTIKUM_2_PRIORITYQUEUE_H
#define OOA_PRAKTIKUM_2_PRIORITYQUEUE_H

class Entry {
private:
    Entry(string value, float priority): value(value), priority(priority), next(nullptr), previous(nullptr) {}

    Entry * next;
    Entry * previous;

    string value;
    float priority;

public:
    string getValue() { return value; }

    friend class PriorityQueue;
};

class PriorityQueue {
private:
    Entry * head;
    Entry * tail;

    Entry * findValue(string &value);

public:
    PriorityQueue(): head(nullptr), tail(nullptr) {}
    ~PriorityQueue();
    void insert(string value, float priority);
    string extractMin();
    void decreaseKey(string value, float priority);
    void remove(string value);
    bool isEmpty();

    void printQueue();
};


#endif //OOA_PRAKTIKUM_2_PRIORITYQUEUE_H
 
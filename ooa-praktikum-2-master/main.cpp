#include <iostream>
#include <time.h>
#include "PriorityQueue.h"

void insertMany() {
    cout << "Creating queue." << endl;
    PriorityQueue test;
    //test.printQueue();

    int count = 1000;
    cout << "Adding " << count << " elements to queue." << endl;
    srand(time(NULL));
    for (int i = 0; i < count; i++)
        test.insert("Test-" + to_string(i), (float)rand());
    //test.printQueue();

    try {
        cout << "Removing Test-" + to_string(count/2) << endl;
        test.remove("Test-" + to_string(count/2));
        //test.printQueue();

    } catch (char const * error) {
        cout << "### - Error: " << error << endl;
    }

    test.~PriorityQueue();
}

int main() {
    cout << "Creating queue." << endl;
    PriorityQueue test;
    test.printQueue();

    cout << "Adding four elements to queue." << endl;
    test.insert("Hello, Krefeld!", 42.0);
    test.insert("Hello, Berlin!", 9.11);
    test.insert("Hello, World!", 4.2);
    test.insert("Hello, Koeln!", 11.0);
    test.printQueue();

    try {
        cout << "Changing priority of 'Hello, Berlin!'." << endl;
        test.decreaseKey("Hello, Berlin!", 77.0);
        test.printQueue();

        cout << "Removing 'Hello, Koeln!'." << endl;
        test.remove("Hello, Koeln!");
        test.printQueue();

        cout << "Extracting one element." << endl;
        cout << "'" << test.extractMin() << "'" << endl;
        test.printQueue();

        cout << "Extracting one element." << endl;
        cout << "'" << test.extractMin() << "'" << endl;
        test.printQueue();

        cout << "Extracting one element." << endl;
        cout << "'" << test.extractMin() << "'" << endl;
        test.printQueue();

        cout << "Trying to extract element from empty queue." << endl;
        test.extractMin();

    } catch (char const * error) {
        cout << "### - Error: " << error << endl;
    }

    test.~PriorityQueue();

    insertMany();

    return 0;
}
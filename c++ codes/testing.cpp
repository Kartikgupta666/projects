#include <iostream>
using namespace std;

class Node {
    public:
    int data; // data to be stored in this node
    Node* next; // pointer to the next node
    // constructor to initalize data and the next pointer
    Node(int val) : data(val), next(nullptr) {}
};

int main()
{
//create nodes
Node* node1 = new Node(5);//create a node with data 1
Node* node2 = new Node(10);//create a node with data 2

// link the node together
node1->next = node2;
// Now, you have a linked list with two nodes: 1 -> 2

    // You can access data and traverse the linked list like this:
Node* current = node1;
while (current != nullptr) {
    cout<<current->data<<" ";
    current = current->next;
}

// dont forget to free memory when you are done
delete node1;
delete node2;


return 0;
}
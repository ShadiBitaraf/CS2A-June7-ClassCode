//Class code: June 7, 2022.
//We'll play around with linked data structures.

#include <iostream>

using namespace std;

class Node {
public:
    Node() { //default constructor: prefills the values for paylaod and next, otherwise will contain junk
        payload = "";
        next = 0;
        cout << "constructor was called"<<endl;
        //this is how you instrument a constructor 
    }

    string payload;
    Node *next;  //Create a pointer so you can have an object of self type
};

int main(){
    cout << "about to create the first node"<<endl;
    Node my_first_node;
//   Node *first_neighbor = 0; //sets pointer to NULL (nullptr) both of which have the value of 0
    cout << "created the first node"<<endl;

    my_first_node.payload = "Shadi"; //A single bead called Shadi

    cout << "Your payload is: " << my_first_node.payload << endl;
    cout <<"The next node is located at: " << my_first_node.next << endl;

    Node *first_neighbor = my_first_node.next;

    cout << "The payload of Shadi's neighbor is: " << first_neighbor->payload << endl; // '->' used to access the object pointer (first_neighbor) is pointing at
    cout <<"It's neighbor is located at: " << first_neighbor->next<< endl;

    

    return 0;
}
#ifndef NODE_H
#define NODE_H

template <typename T>
struct Node {
    T data;
    struct Node* next;

    void killSelf(){
     delete(this);
    }

    void printReverse(){
        if(next != NULL)
            next -> printReverse();
        std::cout << data << " ";
    }
};

#endif
#ifndef LIST_H
#define LIST_H

#include <iostream>
#include "node.h"
#include "iterator.h"

using namespace std;

template <typename T>
class List {
private:
    Node<T>* head;
    Node<T>* tail;
    int nodes;

    void print_reverse(Node<T>* head){

    }

public:
    List(){
        head = NULL;
        tail = NULL;
    }
    T front(){
        return head -> data;
    }
    T back(){
        return tail -> data;
    }
    void push_front(T value){
        Node<T>* temp = new Node<T>{value, nullptr};
        if(head == NULL){
            head = temp;
            tail = temp;
        } else{
            temp -> next = head;
            head = temp;
        }
    }
    void push_back(T value){

    }
    void pop_front(){

    }
    void pop_back(){

    }
    T get(int position){

    }
    void concat(List<T> &other){

    }
    bool empty(){
        return head == NULL;
    }
    int size(){

    }
    void print(){
        Node<T> *temp = head;
        if(temp -> next!= NULL){
            cout << temp->data;
            temp = temp->next;
            print();
        }
    }
    void print_reverse(){

    }
    void clear(){

    }
    Iterator<T> begin(){

    }
    Iterator<T> end(){

    }

    ~List(){

    }
};




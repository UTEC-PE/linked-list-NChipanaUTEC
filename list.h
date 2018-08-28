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
    public:
        List(){
            head = NULL;
            tail = NULL;
            nodes = 0;
        }
        T front() {
            if (nodes == 0) {
                cout << "Lista Vacia" << endl;
            }
            else
                return head -> data;
        }
        T back(){
            if(nodes == 0)
                cout << "Lista Vacia" << endl;
            return tail -> data;
        }
        void push_front(T value){
            auto* temp = new Node<T>{value, NULL};
            if(nodes == 0){
                head = temp;
                tail = temp;
            } else{
                temp -> next = head;
                head = temp;
            }
            nodes ++;
        }
        void push_back(T value){
            auto* temp = new Node<T>;
            temp -> data = value;
            if(nodes == 0){
                head = temp;
                tail = temp;
            } else{
                tail -> next = temp;
                tail = temp;
            }
            nodes ++;
        }
        void pop_front(){
            Node<T> *temp = head;
            if(!head)
                cout << "Lista Vacía" << endl;
            else if(nodes == 1){
                head = NULL;
                tail = NULL;
            }
            else
                head = temp -> next;
            nodes --;
            delete temp;
        }
        void pop_back(){
            Node<T> *temp = head;
            if(!head)
                cout << "Lista Vacía" << endl;
            else if(nodes == 1){
                head = NULL;
                tail = NULL;
            }
            else{
                while(temp ->next != tail)
                    temp = temp -> next;
                tail = temp;
                temp = temp ->next;}
            nodes --;
            delete temp;
        }
        T get(int position){
            int cont = 0;
            Node <T> *temp = head;
            while(temp != tail && cont != position){
                cont ++;
                temp = temp ->next;
            }
            return temp -> data;

        }
        void concat(List<T> &other){

        }
        bool empty(){
            return head == NULL;
        }
        int size(){
            return nodes;
        }
        void print(){
            if(nodes == 0)
                cout << "Lista Vacía" << endl;
            else {
                Node<T> *temp = head;
                while (temp != tail) {
                    cout << temp->data << " ";
                    temp = temp->next;
                }
                cout << temp->data << endl;
            }
        }
        void print_reverse(){

        }
        void clear(){
            while (nodes > 0)
                pop_front();
        }
        Iterator<T> begin(){

        }
        Iterator<T> end(){

        }
        ~List(){}
};





#endif

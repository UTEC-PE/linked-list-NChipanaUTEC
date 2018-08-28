#include <iostream>
#include "list.h"
#include "iterator.h"
#include "node.h"
using namespace std;


int main() {
    List<int> list;
    list.push_front(5);
    list.push_front(4);
    list.push_front(8);
    list.push_back(2);
    list.print();
    cout << list.front() << endl;
    if(list.empty())
        cout << "Es correcto la lista está vacía" << endl;
    else
        cout << "Es incorrecto la lista no está vacía" << endl;
    list.push_back(6);
    list.print();
    cout << list.back() << endl;
    cout <<  list.size() << endl;
//    cout << endl << list.get(4);

    return 0;
}
#include <iostream>
#include "list.h"
#include "node.h"
#include "iterator.h"
using namespace std;


int main() {
    List<int> list;
    list.push_front(5);
    list.push_front(3);
    list.print();
    return 0;
}
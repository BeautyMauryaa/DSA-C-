// list: container that empliment double linked list
// non contiguous(because every elment points previous or next element we can add remove element from anywhere)
// every element has pointer to previous and next
// noded connected
// no random access like the linked list

// #include<list>
//  most used function vector:
//  push_back(add in the end)
//  pop_back(remove from end)
//  size()-check the number of element present in vector
//  empty()-check vector is empty or not
//  v[i]/v.at(i)- access
//  v.front()/v.back()- first and last
//  v.begin()/v.end()-iterators
//  v.clear()- delete
//  v.erase(it)-specific position delete
//  insert(it,x)-specific position insert(it(index),x(element))
//  v.resize(n) -size change
//  v.assign(n,x)

// declaration list<data_type> 1; empty, 1(5,10) //5 element all 10 , 1={13,4,5,6} - initialized

#include <iostream>
#include <list>
using namespace std;

void aboutlist()
{
    // 1.Traversal:
    list<int> li = {2, 4, 5, 6, 7};

    cout << "range based: ";
    // range based
    for (int x : li)
        cout << x << " ";

    cout << endl;
    cout << "iterator traversal: ";
    // iterator
    for (auto it = li.begin(); it != li.end(); it++)
    {
        cout << *it << " ";
    }
}

// push_ back and front,sort,remove duplicate,reverse

void listfunction()
{
    list<int> li = {1, 6, 4, 1, 5, 9, 0, 1};
    // push back and front

    li.push_front(10);
    li.push_back(30);

    for (int x : li)
        cout << x << " ";

    // sort
    cout << endl;
    cout << "after sorting: ";
    li.sort();
    for (int x : li)
        cout << x << " ";

    // remove
    cout << endl;
    cout << "remove duplicate of 1: ";
    li.remove(1);
    for (int x : li)
        cout << x << " ";

    // reverse:
    cout << endl;
    cout << "reverse: ";
    li.reverse();
    for (int x : li)
        cout << x << " ";
}

int main()
{
    aboutlist();
    cout << endl;
    listfunction();
    return 0;
}
// it is kind of dynamic array(in the normal array the size is fixed but in this the size will grow and shrink on runtime as per need)



    //most used function vector: 
    //push_back(add in the end) 
    //pop_back(remove from end)
    //size()-check the number of element present in vector
    //empty()-check vector is empty or not
    //v[i]/v.at(i)- access
    //v.front()/v.back()- first and last
    //v.begin()/v.end()-iterators
    //v.clear()- delete
    //v.erase(it)-specific position delete
    //insert(it,x)-specific position insert(it(index),x(element))
    //v.resize(n) -size change
    //v.assign(n,x)


// declaration:
#include <iostream>
#include <vector> //to use vector we have to include this in header file
using namespace std;

void aboutvector()
{
    // there aremany way to declare a vector
    vector<int> v;        // empty vector
    vector<int> v2(5);    // size is 5 but default value is 0
    vector<int> v3(5, 8); // size 5 with default value 8
    vector<int> v4={1,2,3,4}; //initialized
    vector<vector<int>> v5; //2d vector matrix


    //traversal:
    for(int i=0;i<v4.size();i++)//by using index
    cout<<v4[i];

    // //range based(preferred)
    // for(int x:v) cout<<x;

    //iterator
    for(auto it =v4.begin(); it!=v4.end();it++)
    cout<<*it;



}


#include<iostream>
#include "tree.h"
#include "node.h"

using namespace std;

int main(){

    int check_number;
    tree s;

    s.insert(50);
    s.insert(57);
    s.insert(33);
    s.insert(29);
    s.insert(29);
    s.insert(39);
    s.insert(39);
    s.insert(39);
    s.insert(39);
    s.insert(45);
    s.print();
    cout<<"The size of the tree is "<<s.size()<<endl;
    cout<<"The frequency of 39 is "<<s.get_frequency(39)<<endl;
    cout<<"The depth of the tree is: "<<s.depth()<<endl;
    cout<<"The level of key 45 is: "<<s.level(45)<<endl;
    cout<<"The level of key 39 is: "<<s.level(39)<<endl;
    cout<<"The level of key 50 is: "<<s.level(50)<<endl;

    cout<<"The value inserted is: "<<s.in_tree(29)<<endl;
    cout<<"The value inserted is: "<<s.in_tree(15)<<endl;
    cout<<"please enter a number to see if it is in the tree"<<endl;
    cin>>check_number;
    s.in_tree(check_number);
    if(check_number)
    {
        cout<<"Number found!"<<endl;
    }
    else
    {
        cout<<"Number not found!"<<endl;
    }


    return 0;
}

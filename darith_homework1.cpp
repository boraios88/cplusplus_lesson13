https://github.com/boraios88/cplusplus_lesson13.git
//
//  main.cpp
//  Task_virtual
//
//  Created by Dararith Khun on 11/3/20.

#include <iostream>
using namespace std;

//Task_1
class Employer {
public:
    virtual void Print() = 0;
};

class President : public Employer {
public:
    void Print() {
        cout<<"\n\nHere is the virtual function in derived class President.\n\n";
    }
};

class Manager : public Employer {
public:
    void Print() {
        cout<<"Here is the virtual function in derived class Manager.\n\n";
    }
};

class Worker : public Employer {
public:
    void Print() {
        cout<<"Here is the virtual function in derived class Worker.\n\n";
    }
};

int main() {
    Employer *e;
    President p;
    Manager m;
    Worker w;
    
    e = &p;
    e -> Print();
    
    e = &m;
    e -> Print();
    
    e = &w;
    e -> Print();

}
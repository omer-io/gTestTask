#include <iostream>
#include "student.h"
using namespace std;

student::student(){}
student::student(string roll, int studentAge){
//    this->name = name;
    roll_no = roll;
    age = studentAge;
}

void student::display(){
	cout << "roll no: " << roll_no << " age: " << age << endl;
}

void student::setdata(string roll, int studentage){
    roll_no = roll;
    age = studentage;
}
//string student::getname(){
//    return this->name;
//}
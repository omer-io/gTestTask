#include"student.h"
#include <map>
#include <vector>
#include <iostream>
using namespace std;

class whitelist
{
private:
  map<string, student *> student_record;
  vector<student> student_data_list;

public:
  void add_to_whitelist(string name, student s){
   student_data_list.push_back(s);
   student_record[name] = &student_data_list.back();
  }
  bool is_student_present(string sname){
      return student_record.find(sname) != student_record.end();
   }
  student* get_student_data(string sname){
      return student_record[sname];
  }
};

int main(){

   student s("1234", 22);
   whitelist studentList;
   studentList.add_to_whitelist("Omer", s);

   string testname = "Omer";
   if (studentList.is_student_present(testname)){
      student *ptr = studentList.get_student_data(testname);
      cout << testname << " has following data: ";
      ptr->display();
   }
   
   return 0;
}
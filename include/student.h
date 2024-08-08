#include<string>
using namespace std;

class student{
private:
	string roll_no;
	int age; 
public:
	student();
	student(string, int);
	void display();
	void setdata(string, int);
	//string getname();
};

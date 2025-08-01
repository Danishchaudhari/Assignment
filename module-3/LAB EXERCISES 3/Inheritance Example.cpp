#include <iostream>
using namespace std;

class person
{
	protected:
		int id;
		string name;
	public:
		void setdata(int id,string name)
		{
			this->id=id;
			this->name=name;
		}
		void display()
		{
			cout<<"id is : "<<id<<endl;
			cout<<"Name is : "<<name<<endl;
		}
};
class student : public person
{
	protected:
		int Roll_no;
		string course;
	public:
		void setdata_student(int id,string name,int Roll_no,string course)
		{
			setdata(id,name);
			this->Roll_no=Roll_no;
			this->course=course;
		}
		void display_student()
		{
			cout<<"--------student details----------"<<endl;
			display();
			cout<<"Roll_no is : "<<Roll_no<<endl;
			cout<<"course is : "<<course<<endl;
		}
};
class teacher : public person
{
	protected:
		int salary;
		string subject;
	public:
		void setdata_teacher(int id,string name,int salary,string subject)
		{
			setdata(id,name);
			this->salary=salary;
			this->subject=subject;
		}
		void display_teacher()
		{
			cout<<"--------teacher details----------"<<endl;
			display();
			cout<<"salary is : "<<salary<<endl;
			cout<<"subject is : "<<subject<<endl;
		}
};

int main()
{
	student s1;
	s1.setdata_student(1,"danish",22,"B.C.A");
	s1.display_student();
	
	teacher t1;
	t1.setdata_teacher(2,"sandip",55000,"maths");
	t1.display_teacher();
	return 0;
}

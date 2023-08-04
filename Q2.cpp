#include<iostream>
using namespace std;
class Employee
{
public:
	int age;
	float salary;
	string name;
	void getdata(int ag,float sal,string namee)
	{
		age=ag;
		salary=sal;
		name=namee;
	}

	void show()
	{
		cout<<"The Name of Employee:"<<name<<endl;
		cout<<"The Age Of Employee:"<<age<<endl;
		cout<<"The salary of employee:"<<salary<<endl;
	}
};

int main()
{
	int a;
	float s;
	string n;
	for(int i=0;i<3;i++)
	{
		cout<<"Enter the name of employee:";
		cin>>n;
		cout<<"Enter the salary of employee:";
		cin>>s;
		cout<<"Enter the age of employee:";
		cin>>a;
		Employee emp;
		emp.getdata(a,s,n);
		emp.show();
		cout<<"-------------------------------------"<<endl;
	}
}
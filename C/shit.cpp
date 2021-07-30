#include <iostream>

using namespace std;

class Employee
{
	private:
		string Emp_ID;
		string Emp_Name;
		string designation;
		float salary;
		int Weekly_hours;
	
	public:
		Employee_Data()
		{
			cout<<"Enter ID:"<<endl;
			cin>>Emp_ID;
			cout<<"Enter Name:"<<endl;
			cin>>Emp_Name;
			cout<<"Enter designation:"<<endl;
			cin>>designation;
			cout<<"Enter salary:"<<endl;
			cin>>salary;
			cout<<"Enter Weekly hours:"<<endl;
			cin>>Weekly_hours;
		}
		
		Add_Salary()
		{
			if (salary < 5000)
			{
				salary += 250;
			}
		}
		
		Add_Workbenefits()
		{
			if ((Weekly_hours / 7) > 6 )
			{
				salary += 150;
			}
		}
};

int main()
{
	
	Employee emp;
	
	emp.Employee_Data();
	emp.Add_Salary();
	emp.Add_Workbenefits();
	
	return 0;
}

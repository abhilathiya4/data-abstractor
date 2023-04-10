#include<iostream>
#include<string.h>

using namespace std;

class admin{
	
	public : 
	char comp_name[50] = "DAD";
	int man_salary = 1000000;
	int emp_salary= 150000;
	int total_staff = 1000;
	
//	protected :
		
	int total_revenue = 200000000;
	char can_terminate[50] = "YES";
	
	void myAccess(){
		
		cout<<comp_name<<endl;
		cout<<man_salary<<endl;
		cout<<emp_salary<<endl;
		cout<<total_staff<<endl;
		cout<<total_revenue<<endl;
		cout<<can_terminate<<endl<<endl;
		
		
		
	}
	
	
};

class manager : public admin{
	
	public : 
	
	void myAccess1(){
		
		cout<<comp_name<<endl;
		cout<<man_salary<<endl;
		cout<<emp_salary<<endl;
		cout<<total_staff<<endl<<endl;
		
	}
};

class employee:public manager{
	
	public : 
	
	void myAccess2(){
		
		cout<<comp_name<<endl;
		cout<<emp_salary<<endl;
		cout<<total_staff<<endl<<endl;
		
	}
};

int main(){
	
	
	employee obj;
	obj.myAccess();
	obj.myAccess1();
	obj.myAccess2();
	
	
	return 0;
}

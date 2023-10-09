#include<iostream>
using namespace std;
class emp
{
	private:
		int emp_id;
		char emp_name[10];
	public:	
	void input()
	{
		cout<<"enter employee id::";
		cin>>emp_id;
		
		cout<<"enter employee name::";
		cin>>emp_name;
	}
	void show()
	{
			cout<<"employee id is ::"<<emp_id<<endl;
			cout<<"employee name is ::"<<emp_name<<endl;
		
	}
};
int main()
{
	 int i,n;
	cout<<"enter the employee number ::";
	cin>>n;
	
	emp e1[20];
	for(i=0;i<n;i++)
	{
		e1[i].input();
	}
	for(i=0;i<=n;i++)
	{
		e1[i].show();
	
	}
	return 0;
}
	
	

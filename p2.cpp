#include<iostream>
using namespace std;
class item
{
	private:
		static int num;
		static int count;
	public:
		
			static void getdata()
		{
				int a=0;
			num=a;
			count++;
		}
		static void get_count()
		{
			cout<<"value of count::"<<count<<endl;
		}
		
			
};
int item::num;
int item::count;
int main()
{
	
	item::getdata();
	item::getdata();
	item::getdata();
	item::get_count();
	return 0;
}


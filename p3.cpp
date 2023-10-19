#include<iostream>
using namespace std;
class student{

	
	public:
		string name;
		float SPI;
		void getdata()
		{
			cout<<"enter the name is->";
			cin>>name;
			cout<<"enter the spi is->";
			cin>>SPI;
		}
};
int main()
{
	student p[10];
	string name;
	for (int i=0;i<10;i++)
	{
		p[i]. getdata();
	}
	for (int i=0;i<10;i++)
	{
		if(p[0].SPI<p[i].SPI)
		{
			p[0].SPI=p[i].SPI;
		}
	}
	cout<<"name is->"<<name;
	cout<<"highest spi is->"<<p[0].SPI;
}

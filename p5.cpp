#include <iostream>
using namespace std;
class A 
{
public:
   int n=100;
   char ch='A';
   
   
   void disp(A a)
   {
      cout<<a.n<<endl;
      cout<<a.ch<<endl;
   }
};
int main() 
{
	cout<<"shyam zalavadiya "<<endl;
	cout<<"En_no    220130318015 "<<endl;
	cout<<"---------------------"<<endl;
   A obj;
   obj.disp(obj);
   return 0;
}

/*Passing an object as a parameter to a function 
in programming is a common practice, especially in object-oriented languages. This allows you to work 
with the data and behaviors associated with that object within the function. */
#include <iostream>
using namespace std;
class Product 
{
public:
    int MFYear;
    int expYear;

    Product(int mYear, int eYear)
	 {
        MFYear = mYear;
        expYear = eYear;
    }

    int calDifference() {
        return expYear - MFYear;
    }
};

int main() 
{
	cout<<"shyam zalavadiya  "<<endl;
	cout<<"En_no    220130318015 "<<endl;
	cout<<"---------------------"<<endl;
    
	int MFYear, expYear;
    cout << "Enter manufacture year: ";
    cin >> MFYear;
    cout << "Enter expiry year: ";
    cin >> expYear;

    Product p(MFYear, expYear);

    
    int dif = p.calDifference();
    
	if(MFYear>expYear)
    {
    	cout<<"Invalid Entered Year Check This Again :)";
	}
	else
	{
	cout << "The difference between manufacture year and expiry year is: " << dif << " years" <<endl;
	}
	
    return 0;
}



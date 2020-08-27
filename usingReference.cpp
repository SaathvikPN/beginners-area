//Return Multiple values from a function!
//Demonstrate enum and typedef
//Use References instead of pointers

#include<iostream>
using namespace std;

typedef unsigned short int USHORT;
enum ERR_CODE{FAILURE, SUCCESS};

ERR_CODE Factor(USHORT, USHORT&, USHORT&); //Careful to add & for reference

int main()
{
    USHORT number, squared=0, cubed=0;
    ERR_CODE result;  //instead of int, we use return type success or failure as defined in ERR_CODE

    cout<<"Enter number (1-20) : ";
    cin>>number;
    result = Factor(number,squared,cubed);
    if (result == SUCCESS)
    {
        cout<<"number "<<number<<endl;
        cout<<"squared "<<squared<<endl;
        cout<<"cubed "<<cubed<<endl;
    }

    else
        cout<<"Error...";
}

ERR_CODE Factor(USHORT number, USHORT &rsquared, USHORT &rcubed)
{

    if(number>1 && number<20)
    {
        int n = number;
        rsquared = n*n;
        rcubed = n*n*n;

        return SUCCESS;
    }
    else
        return FAILURE;
}

#include<iostream>
using namespace std;

typedef unsigned short int USHORT;
typedef unsigned long int ULONG;

enum BOOL {FALSE, TRUE};
enum CHOICE {DrawRect = 1, GetArea, GetPerimeter, ChangeDimension, Quit};

// Let's declare Rectangle Class
class Rectangle
{
public:
    // constructor and Destructor
    Rectangle(USHORT width, USHORT height);
    ~Rectangle(){};

    //Accessors
    USHORT GetHeight() const {return itsHeight;}
    USHORT GetWidth() const {return itsWidth;}
    ULONG GetArea() const {return itsHeight*itsWidth;}
    ULONG GetPerimeter() const {return 2*(itsHeight+itsWidth);}
    void SetSize (USHORT,USHORT);

    //Miscellaneous Function (Printing only)
    void DrawShape() const;

private:
    USHORT itsHeight;
    USHORT itsWidth;
};

// Class Functions Definitions
//1. Constructor hence no return type specified
Rectangle :: Rectangle(USHORT width, USHORT height)
{
    itsWidth = width;
    itsHeight = height;
}

//2. SetSize
void Rectangle :: SetSize(USHORT newWidth, USHORT newHeight)
{
    itsHeight = newHeight;
    itsWidth = newWidth;
}

// **************End of Class Blueprint ********************
// Main Driver Function starts here

//Function declarations
USHORT DoMenu();
void DoDrawRect(Rectangle);  //Rectangle class is new data type defined
void DoGetArea(Rectangle);
void DoGetPerimeter(Rectangle);

int main()
{
    // Initialize a rectangle object rectA to 2 X 10
    Rectangle rectA(10,2);

    USHORT select = DrawRect;  //DrawRect = 1
    USHORT quit = FALSE;  //False = 0

    // Interacting with user until he choose to quit
    while(quit==0)
    {
        select = DoMenu();

        switch(select)
        {
        case DrawRect :
            DoDrawRect(rectA);
            break;
        case GetArea:
            DoGetArea(rectA);
            break;
        case GetPerimeter:
            DoGetPerimeter(rectA);
            break;
        case ChangeDimension:
            USHORT newWidth, newHeight;
            cout<<"New Width : ";
            cin>>newWidth;
            cout<<"New Height : ";
            cin>>newHeight;
            rectA.SetSize(newWidth, newHeight);  //Pass new values to rectangle
            DoDrawRect(rectA);  //Print new dimensioned rectangle
            break;
        case Quit:
            quit=TRUE;
            cout<<"Exiting...\n";
            break;
        default:
            cout<<"Invalid choice. Select again\n";
            // break; Not needed. No fall through below this.
        } //End of Switch
    }// End of while checking if user choose quit
}// End of Main Function.

// Definitions of functions used in main
USHORT DoMenu()
{
    USHORT select;
    cout<<"\n\n*** Menu *** \n";
    cout<<"1. Draw Rectangle\n";
    cout<<"2. Compute Area\n";
    cout<<"3. Compute Perimeter\n";
    cout<<"4. Resize the Rectangle\n";
    cout<<"5. Quit\n";
    cout<<"\nSelect choice Number: ";
    cin>>select;
    return select;
}

void DoDrawRect(Rectangle rectA)
{
    USHORT high = rectA.GetHeight();
    USHORT wide = rectA.GetWidth();

    for(USHORT i = 0; i < high; i++)
    {
        for(USHORT j = 0; j < wide; j++)
        {
            cout<<"X ";
        }

        cout<<"\n\n";
    }
}

void DoGetArea(Rectangle rectA)
{
    cout<<"Area = "<<rectA.GetArea()<<endl;
}

void DoGetPerimeter(Rectangle rectA)
{
    cout<<"Perimeter = "<<rectA.GetPerimeter()<<endl;
}

// End of the whole project

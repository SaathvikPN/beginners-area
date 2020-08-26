#include<iostream>
using namespace std;

void fib(int);

int main()
{
    int n;
    cout<<"Enter length of Fib sequence\n";
    cin>>n;
    while(n<0)
        cout<<"Insert +ve number";
    fib(n);
    return 0;
}

void fib(int n)
{
    for(int j=1; j<3 && j<=n; j++)
    {
        cout<<1<<" ";
    }
    unsigned long int answer = 2, minusOne=1, minusTwo=1;
    for(int i = n-2; i>0; i--)
    {
        cout<<answer<<" ";
        minusTwo = minusOne;
        minusOne = answer;
        answer = minusOne + minusTwo;
    }
}

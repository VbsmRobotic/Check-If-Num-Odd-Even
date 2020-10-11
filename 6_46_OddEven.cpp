#include<iostream>
#include<cmath>

using namespace std ;


template <class T>


T GetOddEven(T a) 
{
    if((a % 2) == 0)
    {
        cout << "Your Number is Even" << endl ;
    }else
    {
        cout << "Your Number is Odd" << endl ;
    }
    return 0 ;    

}

int main()
{
    int x ;
    cout << "Enter Your Number: \n" ;
    cin >> x ;

    GetOddEven(x) ; 
}
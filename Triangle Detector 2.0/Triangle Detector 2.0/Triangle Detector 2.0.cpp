// C++ program to check if three sides form a triangle or not
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// function to check if the three sides can form a triangle or not
bool checkValidity(int a, int b, int c)
{
    // check condition
    if (a + b <= c || a + c <= b || b + c <= a)
        return false;
    else
        return true;
}

// Driver function
int main()
{
    int a{}, b{}, c{};

    cout << "Input three sides of a triangle\n";

    cout << "Input a: "; cin >> a;
    cout << "Input b: "; cin >> b;
    cout << "Input c: "; cin >> c;


    if (checkValidity(a, b, c))
        cout << "TRIANGLE IS POSSIBLE";
    else
        cout << "TRIANGLE IS IMPOSSIBLE";
}
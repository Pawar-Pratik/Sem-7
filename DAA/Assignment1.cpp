/*Assignment 1 : Write a program non-recursive and recursive program to calculate Fibonacci numbers and
analyze their time and space complexity*/

#include <iostream>
using namespace std;
void printFibonacci(int n)
{
    static int n1 = 0, n2 = 1, n3;
    if (n > 0)
    {
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
        cout << n3 << " ";
        printFibonacci(n - 1);
    }
}
void nonrec(int number)
{
    int i, n3, n1 = 0, n2 = 1;
    cout << n1 << " " << n2 << " "; // printing 0 and 1
    for (i = 2; i < number; ++i)    // loop starts from 2 because 0 and 1 are already printed
    {
        n3 = n1 + n2;
        cout << n3 << " ";
        n1 = n2;
        n2 = n3;
    }
}
int main()
{
    int choice, n;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "\n[1] Recursion\n[2] Non Recursion \nCHoose :";
    cin >> choice;
    switch (choice)
    {
    case 1:
        cout << "Fibonacci Series with Recursion\n: ";
        cout << "0 "
             << "1 ";
        printFibonacci(n - 2); // n-2 because 2 numbers are already printed
        break;

    case 2:
        cout << "Fibonacci Series without Recursion \n: ";
        nonrec(n);
        break;

    default:
        break;
    }

    return 0;
}
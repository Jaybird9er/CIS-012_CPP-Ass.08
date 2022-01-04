#include <iostream>
using namespace std;

int main ()
{
    // variables
    int firstNum = 0;
    int secondNum = 0;
    int numB1 = 0;
    int evenSum = 0;
    int baseNum = 1;
    int squareNum = 0;
    int oddSquareSum = 0;
    int numD1 = 0;
    int numD2 = 0;
    char letter = 65;

    //a
    cout << "Enter two positive numbers." << endl;
    cout << "The first number must be less than the second number:" << endl;
    cout << "Enter numbers: ";
    cin >> firstNum >> secondNum;

    // validation
    do
    {
        while (firstNum >= secondNum)
        {
            cout << "The first number must be LESS than the second number!" << endl;
            cout << "Please try again. " << endl;
            cout << endl;
            cout << "Enter two positive numbers." << endl;
            cout << "The first number must be less than the second number:" << endl;
            cout << "Enter numbers: ";
            cin >> firstNum >> secondNum;
        }
        while (firstNum < 0 || secondNum < 0)
        {
            cout << "No NEGATIVE numbers!" << endl;
            cout << "Please try again. " << endl;
            cout << endl;
            cout << "Enter two positive numbers." << endl;
            cout << "The first number must be less than the second number:" << endl;
            cout << "Enter numbers: ";
            cin >> firstNum >> secondNum;
        }
    }
    while (firstNum >= secondNum || (firstNum < 0 || secondNum < 0));
    cout << endl;

    // b
    numB1 = firstNum;
    cout << "Odd integers between " << firstNum << " and " << secondNum << " are:" << endl;
    do
    {
        if (numB1 % 2 == 0)
        {
            evenSum = evenSum + numB1;
        }
        else
        {
            cout << numB1 << " ";
        }
        numB1++;
    }
    while (numB1 <= secondNum);
    cout << endl << endl;
    cout << "Sum of even integers between " << firstNum << " and " << secondNum << " = " << evenSum << endl;
    cout << endl;

    // c
    cout << "Square number of numbers: " << endl;
    do
    {
        cout << baseNum << "\t";
        squareNum =  baseNum * baseNum;
        cout << squareNum << endl;
        baseNum++;
    }
    while (baseNum <= 10);
    cout << endl;

    // d
    numD1 = firstNum;
    do
    {
        numD2 = numD1;
        if (numD2 % 2 == 1)
        {
            numD2 = numD2 * numD2;
            oddSquareSum = oddSquareSum + numD2;
        }
        numD1++;
    }
    while (numD1 <= secondNum);
    cout << "Sum of the squares of odd integers between " << firstNum << " and " << secondNum << " = " << oddSquareSum << endl;
    cout << endl;

    // e
    cout << "Upper case letters are: ";
    do
    {
        cout << letter << " ";
        letter++;
    }
    while (letter < 91);
    cout << endl;

    return 0;
}

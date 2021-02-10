#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char const *argv[])
{
    double numbersEntered[2] = {0.0, 0.0};
    double total = 0.0;
    string tempInput = "";
    string enteredOp = "";


    cout << "Enter the first number to be calculated\n";
    cin >> tempInput;
    numbersEntered[0] = stod(tempInput);
    cout << "Enter the second number to be calculated\n";
    cin >> tempInput;
    numbersEntered[1] = stod(tempInput);
    cout << "Enter how to calculate the numbers: + - * / %\n";
    cin >> enteredOp;

    if (enteredOp == "+")
    {
        total = (numbersEntered[0] + numbersEntered[1]);
    }
    else if(enteredOp == "-")
    {
        total = (numbersEntered[0] - numbersEntered[1]);
    }
    else if(enteredOp == "*")
    {
        total = (numbersEntered[0] * numbersEntered[1]);
    }
    else if(enteredOp == "/")
    {
        total = (numbersEntered[0] / numbersEntered[1]);
    }
    else if(enteredOp == "%")
    {
        total = fmod(numbersEntered[0], numbersEntered[1]);
    }

    cout << total;

    return 0;
}

#include <iostream>

using namespace std;

int main()
    {
        char op;
        double Num1, Num2, result;


        cout << "Choose an operation (+,-,*, /): ";
        cin >> op;

        cout << "enter First number: ";
        cin >> Num1;

        cout << "enter second number: ";
        cin >> Num2;

        switch (op)
            {
            case '+':
                result = Num1 + Num2;
                cout << "Addition result = : " << result <<endl ;
            break;

            case '-':
                result = Num1 - Num2;
                cout << "Subtraction result : " << result <<endl ;
            break;

            case '*':
                result = Num1 * Num2;
                cout << "Multiplication result : " << result <<endl ;
            break;

            case '/':
                result = Num1 / Num2;
                if (Num2 !=0)
                    {cout << "Division result : " << result <<endl ;} 
                else{ cout <<"Invalid operation! enter a number which is not equal to zero" << endl;}
            break;

            default:
                cout << "invalid operation choosen" << endl ;
                    break;
                }
            return 0;

    }
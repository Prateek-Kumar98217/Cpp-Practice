#include <iostream>
using namespace std;

class myclass
{
public:
    double a1{};
    double b1{};
    int choice{};
    void add(double a, double b)
    {
        double sum = a + b;
        cout << "the required sum is: " << sum << endl;
    };
    void subtract(double a, double b)
    {
        double diff = a - b;
        cout << "the required difference is: " << diff << endl;
    };
    void multiply(double a, double b)
    {
        double product = a * b;
        cout << "the required product is: " << product << endl;
    };
    void divide(double a, double b)
    {
        double quotient = a / b;
        cout << "the required quotient is: " << quotient << endl;
    };
    void calculate()
    {
        switch (choice)
        {
        case 1:
            add(a1, b1);
            break;
        case 2:
            subtract(a1, b1);
            break;
        case 3:
            multiply(a1, b1);
            break;
        case 4:
            divide(a1, b1);
            break;
        default:
            cout << "choose a operation!" << endl;
            break;
        };
    };
};

void menu()
{
    cout << "These are the operations avalabile" << endl;
    cout << "1. ADD " << endl;
    cout << "2. SUBTRACT " << endl;
    cout << "3. MULTIPLY " << endl;
    cout << "4. DIVIDE " << endl;
    cout << "0. EXIT " << endl;
    cout << "select your operation number: " << endl;
};

int choice{};

int main()
{
    myclass obj;
    while (true)
    {
        menu();
        cin >> obj.choice;
        if (obj.choice == 0)
        {
            cout << "You have chosen to exit the application." << endl;
            break;
        }
        cout << "enter the first number: " << endl;
        cin >> obj.a1;
        cout << "enter the second number: " << endl;
        cin >> obj.b1;
        obj.calculate();
    };
    return 0;
};
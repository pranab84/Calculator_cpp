#include <iostream>
using namespace std;

main()
{

    float num_1, num_2;
    begining:
    system("cls");
    cout << "please enter num_1: " << endl;
    cin >> num_1;
    cout << "please enter num_2: " << endl;
    cin >> num_2;

    cout << "please make decision what do you want to do: " << endl;
    cout << "for adding press: + " << endl;
    cout << "for subtraction press: - " << endl;
    cout << "for multiplication press: * " << endl;
    cout << "for division press: / " << endl;

    cout << "Press your decision:  " << endl;

    char decision;
    cin >> decision;
    system("cls");

    switch (decision) {
        case '+':
            cout << num_1 << "+" << num_2 << "=" << (num_1+num_2) << endl;
            break;
        case '-':
            cout << num_1 << "-" << num_2 << "=" << (num_1-num_2) << endl;
            break;
        case '*':
            cout << num_1 << "*" << num_2 << "=" << (num_1*num_2) << endl;
            break;
        case '/':
            if (num_2 != 0)
            cout << num_1 << "/" << num_2 <<"="<< (num_1/num_2) << endl;
            else
                cout << "you can't divide by zero" << endl;

            break;

        default:
            cout << "you didn't made proper decision." << endl;

    }
    char decision2;
    cout << "Do you want to continue ?? : y/n " << endl;
    cin >> decision2;
    if (decision2 == 'y' || decision2 == 'Y')
        goto begining;
    if (decision2 == 'n' || decision2 == 'N')
        cout << "You wish to quit. Thank you using easy calculator" << endl;






}

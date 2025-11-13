#include <iostream>
#include <cctype>
using namespace std;
float add(float n1 ,float n2 ) 
{
    return n1 + n2;
}
float sub(float n1,float n2) 
{
    return n1 - n2;
}
float mul(float n1,float n2) 
{
    return n1 * n2;
}
float dev(float n1,float n2) 
{
    return n1 / n2;
}


int main() 
{
    cout << "***Welcome to the Calculator***" << endl;

    float n1, n2, answer;
     while (true)

    {
        cout << "Enter first number: ";
        cin >> n1;
        cout << "Enter second number: ";
        cin >> n2;
        cout << endl;
        cout << "select A for addition ,S for subtraction ,M for multiplication ,D for division or 'q' to quit: ";
        char input;
        cout << endl;
        cin >> input;
        input = toupper(input);
        if (input == 'Q')
            break;
        else if (input == 'A')
            answer = add(n1, n2);
        else if (input == 'S')
            answer = sub(n1, n2);
        else if (input == 'M')
            answer = mul(n1, n2);
        else if (input == 'D')
            answer = dev(n1, n2);
        else {
            cout << "Invalid operation! Please try again." << endl;
            continue;
        }
            
        cout << "The answer is: " << answer << endl;
        cout << "Do you want to perform another calculation? (y/n): ";
        char cont;
        cin >> cont;
        cont = tolower(cont);
        if (cont == 'n')
            break;

    }

    return 0;
}
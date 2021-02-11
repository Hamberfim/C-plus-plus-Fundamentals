#include <iostream>
using namespace std;

int main()
{
    // Five basic data types
    // Declared then initialized
    char letter; letter = 'A'; // a single leter character - a single byte
    int num; num = 100;  // a whole integer number
    float decimal; decimal = 0.07;  // correct to 6 decimal places
    double pi; pi = 3.14159;  // correct to 10 decimal places
    bool isTrue; isTrue = false;

    // declared and intialized
    char beta = 'b';
    int numTwo = 2;
    float amount = 2.99;
    double oneThird =  0.333333333;
    bool isWaterWet = true;

    cout << "=== Data types- declared THEN initialized ===" << endl;
    cout << "byte char data type: " << letter << endl;
    cout << "int number data type: " << num << endl;
    cout << "decimal number data type: " << decimal << endl;
    cout << "double number data type: " << pi << endl;
    cout << "boolean data type: " << isTrue << endl;

    cout << "" << endl;  // space in console output

    cout << "=== Data types- declared AND initialized ===" << endl;
    cout << "byte char data type: " << beta << endl;
    cout << "int number data type: " << numTwo << endl;
    cout << "decimal number data type: " << amount << endl;
    cout << "double number data type: " << oneThird << endl;
    cout << "boolean data type: " << isWaterWet << endl;

    cout << "" << endl;  // space in console output

    return 0;
}

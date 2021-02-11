#include <iostream>
using namespace std;

int main()
{
    // using variable arrays - size canot be changed
    // declared and initialized
    int numbers[4] = {0, 1, 2, 3};

    //declared and initialized
    float flts[3];
    // add items to the array
    flts[0] = 1.2;
    flts[1] = 1.7;
    flts[2] = 2.1;

    // character array - used less than the string class
    char myName[8] = {'A', 'n', 't', 'h', 'o', 'n', 'y', '\0'};  // '\0' <-special null char at end stores the array as a string

    // two-dimentional array - 2col, 3rows
    int coordinates[2][3] = {{1, 2, 3}, {4, 5, 6}};

    cout << "numbers[0]: " << numbers[0] << endl;
    cout << "numbers[1]: " << numbers[1] << endl;
    cout << "numbers[2]: " << numbers[2] << endl;
    cout << "numbers[3]: " << numbers[3] << endl;

    cout << "" << endl;  // space

    cout << "flts[0]: " << flts[0] << endl;
    cout << "flts[1]: " << flts[1] << endl;
    cout << "flts[2]: " << flts[2] << endl;

    cout << "" << endl;  // space

    cout << "myName as text string: " << myName << endl;
    cout << "myName[1]: " << myName[1] << endl;

    cout << "coordinates[0][2]: " <<  coordinates[0][2] << endl;
    cout << "coordinates[1][1]: " <<  coordinates[1][1] << endl;

    cout << "" << endl;  // space


    return 0;
}

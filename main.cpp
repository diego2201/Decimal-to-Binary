#include <iostream>
using namespace std;

int main()
{
    string output; 
    int userInput;
    cout << "Please enter the number you wish to convert to binary" << endl;
    cin >> userInput;

    int tracker = userInput;
    while(tracker != 0)
    {
        int remainder = tracker % 2;
        if(remainder == 1)
        {
            output = "1" + output;
        }
        else
        {
            output = "0" + output;
        }
    }
        cout << "You entered " << userInput << endl;

    cout << output << endl;
    cout << "You entered " << userInput << endl;
}
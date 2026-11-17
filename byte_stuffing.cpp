#include <iostream>
#include <string>
using namespace std;

int main()
{
    string data, result = "";
    char flag, escape;

    cout << "Enter the data: ";
    cin >> data;

    cout << "Enter the flag character: ";
    cin >> flag;

    cout << "Enter the escape character: ";
    cin >> escape;

    // Frame begins with FLAG
    result += flag;

    for (char ch : data)
    {
        // Insert ESCAPE before special characters
        if (ch == flag || ch == escape)
        {
            result += escape;
        }

        result += ch;
    }

    // Frame ends with FLAG
    result += flag;

    cout << "Input Data : " << data << endl;
    cout << "Stuffed Data : " << result << endl;

    return 0;
}

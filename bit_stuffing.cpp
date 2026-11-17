#include <iostream>
#include <string>
using namespace std;

int main()
{
    string data, result = "";
    int ones = 0;

    cout << "Enter binary data: ";
    cin >> data;

    for (char bit : data)
    {
        result += bit;

        if (bit == '1')
        {
            ones++;

            if (ones == 5)
            {
                result += '0';
                ones = 0;
            }
        }
        else
        {
            ones = 0;
        }
    }

    cout << "Input Data : " << data << endl;
    cout << "Stuffed Data : " << result << endl;

    return 0;
}

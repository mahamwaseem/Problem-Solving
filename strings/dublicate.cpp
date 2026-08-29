#include <iostream>
#include <string>
using namespace std;

int main()
{
    string x;
    cout << "Enter a string: ";
    cin >> x;

    for (int i = 0; i < x.length(); i++)
    {
        for (int j = i + 1; j < x.length(); j++)
        {
            if (x[i] == x[j])
            {
                cout << x[i] << " ";
                break;
            }
        }
    }

    return 0;
}
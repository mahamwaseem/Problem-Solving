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
        int j = i + 1;

        while (j < x.length())
        {
            if (x[i] == x[j])
            {
                x.erase(j, 1);
            }
            else
            {
                j++;
            }
        }
    }

    cout << "After removing duplicates: " << x;

    return 0;
}
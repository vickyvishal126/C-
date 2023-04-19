#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    cout << "Enter a string: ";
    cin >> str;
    
    string reverse_str = "";
    for (int i = str.length() - 1; i >= 0; i--)
    {
        reverse_str += str[i];
    }
    
    cout << "Reverse String: " << reverse_str << endl;

    return 0;
}


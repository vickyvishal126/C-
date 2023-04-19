#include <iostream>

using namespace std;

void print_square(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void print_rectangle(int rows, int cols)
{
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= cols; j++)
        {
            cout << "$ ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the size of square pattern: ";
    cin >> n;
    cout << "Square Star Pattern: " << endl;
    print_square(n);
    
    int rows, cols;
    cout << "Enter the number of rows and columns for rectangle pattern: ";
    cin >> rows >> cols;
    cout << "Rectangle Dollar Pattern: " << endl;
    print_rectangle(rows, cols);

    return 0;
}


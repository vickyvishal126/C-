#include<iostream>
#include<cstdlib>
 
using namespace std;
 
int main()
{
   int a = 15, b = 20;
   cout << "Max: " << ((a + b) + abs(a - b)) / 2 << endl;
   cout << "Min: " << ((a + b) - abs(a - b)) / 2 << endl;
   return 0;
}


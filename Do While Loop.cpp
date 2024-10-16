#include <iostream>
using namespace std;
int main()
{
    int x = 1;
    do
    {
        // This code will execute at least once, even if the condition is false
        cout << "Inside do-while loop!" << endl;
    } while (x < 5);
    return 0;
}
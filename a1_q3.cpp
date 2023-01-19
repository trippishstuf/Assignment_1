#include <iostream>
using namespace std;
int checkprime(int n)
{
    bool b = 1;
    for (int j = 2; j <= (n / 2); j++)
    {
        if ((n % j) == 0)
        {
            cout << "not prime\n";
            b = 0;
            break;
        }
    }
    if (b == 1)
    {
        cout << "prime\n";
    }
    return 0;
}
int main(int argc, char **argv)
{

    // write your code here

    int t, n;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        checkprime(n);
    }

    return 0;
}

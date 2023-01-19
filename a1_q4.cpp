#include <iostream>
using namespace std;
void prime(int n)
{
    bool b=1;
    for (int j = 2; j <= (n / 2); j++)
    {
        if ((n%j)==0)
        {
            b=0;
            break;
        }
    }
    if(b==1){
        cout <<n<<"\n";
    }
}
void printallprime(int a, int b){
    for(int i=a;i<=b;i++){
        prime(i);
    }
}
int main(int argc, char **argv){
    int low, high;
    cin>>low;
    cin>> high;

    //write your code here
    printallprime(low,high);
    return 0;
}

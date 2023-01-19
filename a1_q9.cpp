#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int num1, num2;
    cin >> num1 >> num2;
    int n=num2;

    //write your code here
    if(num2>=num1){
        n=num1;
    }
    for(int i=n;i>=0;i--){
        if(num1%i==0 and num2%i==0){
            cout<<i<<endl;
            cout<<(num1*num2)/i;
            break;
        }
    }
    
    return 0;
}

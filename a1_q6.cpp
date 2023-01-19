#include <iostream>
using namespace std;
void reverse(int n){
    int a=n;
    while(a>0){
        int r=a%10;
        cout<<r<<"\n";
        a=a/10;
        
    }
    
}
int main(int argc, char **argv){
    int n;
    cin >> n;

    //write your code here
    reverse(n);
    return 0;
    
}

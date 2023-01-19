#include <iostream>
using namespace std;
void ndigit(int n){
    int a=n;
    int count=0;
    while(a>0){
        a=a/10;
        count+=1;
    }
    cout<<count;
}

int main(int argc, char **argv){
    int n;
    cin >> n;
    
    //write your code here
    ndigit(n);
    return 0;
}

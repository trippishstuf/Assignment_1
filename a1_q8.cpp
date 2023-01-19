#include <iostream>
#include<cmath>

using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    // write your code here
    int a=n;
    int c=k;
    while(a>0){
        if(c>0){
            cout<<a%10;
            c--;
        }
        a=a/10;
    }
    cout<<int(n/(pow(10,k)));
    return 0;

}

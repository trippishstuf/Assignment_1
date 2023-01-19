#include <iostream>
#include<math.h>
using namespace std;
int prime(int x){
    int b=0;
    for(int i=2; i<=sqrt(x); i++){
        if(x%i!=0){
            b=1;
        }
        else{
            b=0;
            return 0;
        }
    }
    if(b){
        return 1;
    }
}
int main(int argc, char **argv){
    int n;
    cin >> n;
    //write your code here
    for (int i = 2; i <= (n); i = i + 1)
    {
        if(prime(i)){
            while (n % i == 0)
           {
            cout << i << " ";
            n = n/i;
           }
        }
    }    
    return 0;
}

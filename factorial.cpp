#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int number = 1;
    int mul = 1;
    while (number<=n)
    {
        mul=mul*number;
        number= number+1;
    }
    cout<<mul;
    
}
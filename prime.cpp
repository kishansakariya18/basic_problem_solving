#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int num = 2;
    while (num<n)
    {
        if(n%num==0){
            cout<<"No";
            break;
        }
        else{
            cout<<"prime";
            break;
        }
        num = num+1;
    }
    
    return 0;
}
#include<iostream>
using namespace std;

int func(int n)
{
    if(n==0)
        return 0;
    
    else
        int sum = n + func(n-1);
}

int main() {
    int n;
    cin>>n;
    cout << func(n);
}
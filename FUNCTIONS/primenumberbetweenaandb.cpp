#include<iostream>
using namespace std;
bool prime(int num){
    if (num%2!=0)
    {
        return true;
    }
    return false;
    
}
int main(){
    int a;
    int b;
    cout<<"Enter the two Number = ";
    cin>>a>>b;
    for (int i = a; i < b; i++)
    {
        if (prime(i))
        {
            cout<<i<<" ";
        }
        
    }
    
}
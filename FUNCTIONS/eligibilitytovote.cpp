#include<iostream>
using namespace std;
bool vote(int age){
    if (age>=18)
    {
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int age;
    cout<<"Enter your age = ";
    cin>>age;
    if (vote(age)==true)
    {
        cout<<"eligible";
    }else
    {
        cout<<"NOT ELIGIBLE";
    }
    
}

#include<iostream>
using namespace std;
double area(int radius){
    double area=3.14*radius*radius;
    return area;
}
double circumference(int radius){
    double circumference=2*3.14*radius;
    return circumference;
}
int main(){
    cout<<"Enter radius of circle = ";
    int radius;
    cin>>radius;
    area(4);
    cout<<"area = "<<area(radius)<<endl;
    circumference(4);
    cout<<"circumference = "<<circumference(radius)<<endl;
  
}
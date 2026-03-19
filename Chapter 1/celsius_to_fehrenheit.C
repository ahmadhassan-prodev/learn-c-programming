#include<iostream>
using namespace std;

int main(){
    double celsius;
    double fehrenhiet;
    cout<<"Enter the temperature in Celsius"<<endl;
    cin>>celsius;
    fehrenhiet = celsius * ((float)9/5) + 32;
    cout<<fehrenhiet;
    return 0;
}
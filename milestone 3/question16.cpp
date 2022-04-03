#include<iostream>
using namespace std;
int main(){
    int number,remainder,revnumber=0;
    cout<<"enter your number"<<endl;
    cin>>number;
    while(number>0){
        remainder=number%10;
        number=number/10;
        revnumber=(revnumber*10)+remainder;
    }
    cout<<"your number is"<<revnumber<<endl;
    return 0;
}
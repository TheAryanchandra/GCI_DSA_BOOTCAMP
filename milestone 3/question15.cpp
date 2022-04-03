#include<iostream>
using namespace std;
int main(){
    int number,remainder,product=1;

    cout<<"enter your number"<<endl;
    cin>>number;

    while (number>0)
    {
        remainder=number%10;
        product=product*remainder;
        number=number/10;
    }
     cout<<"product of number is"<<product<<endl;
    
       return 0;
}
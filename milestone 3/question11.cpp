#include<iostream>
using namespace std;

#include <iostream>
using namespace std;
int main(){
    int num, last;
    
    
    cout << "Enter a number: ";
    cin >> num;
    
   
    last = num % 10;
    
 
    while (num > 10){
        num = num / 10;
    }
    

    cout << "The first digit of entered number is: " << num << endl;
    cout << "The last digit of entered number is: " << last << endl;
    return 0;
}

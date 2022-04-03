#include<iostream>
using namespace std;
int main(){
    int i,sum=0,x;

    cout<<"enter the positive value"<<endl;
    cin>>i;

while(i>0){
    x=i%10;
    sum=sum+x;
    i=i/10;
}
    cout<<"the sum of all digits is "<<sum<<endl;
    return 0;
}
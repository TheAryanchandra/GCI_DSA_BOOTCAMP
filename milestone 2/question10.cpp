#include<iostream>
using namespace std;
int main(){
     int i;
     cout<<"number is";
     cin>>i;

     if(i==0)
     cout<<"you have entered 0"<<endl;

     else{
         int x =0;
         while(i>0){
             i =i/10;
             x++;
         }
         cout<<"number contains "<<x<<" digits "<<endl;
     }
    return 0;
}
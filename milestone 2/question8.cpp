#include<iostream>
using namespace std;
int main(){
    int i,n,sum=0;
    cin>>n;
    for(i=1;i<=n;i=i+2){
       sum=sum+i;
    }
    cout<<sum;
    return 0;
}
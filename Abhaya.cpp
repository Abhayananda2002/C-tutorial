#include <iostream>
using namespace std;

int main() {
    int n=10;
    int a=0;
    int b=1;
   cout<<a<<" "<<b<<" ";
    for(int i=1;i<=10;i++){
        int nxtnumber=a+b;
        cout<<nxtnumber<<" ";
        a=b;
        b=nxtnumber;

     
    }
    
    return 0;
}
  
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
   int i=1;
  while(i<=n) {  
    int col=1;
     while (col<=n-i+1) {
         cout <<"*";
        col++;
         }
        
    cout<<endl;
       i++;
   }
    return 0;
}

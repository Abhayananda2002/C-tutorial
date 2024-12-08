#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
   int i=1;
  while(i<=n) {
    char space=n-i;
   while (space) {
     cout <<" ";
   
    space--;
   }
    int col=1;
     
    while (col<=i) {
         cout <<"*";
        col++;
    
    }
    cout<<endl;
       i++;
   }

    return 0;
}

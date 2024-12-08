#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
   int i=1;
  
    
   while (i<=n) {
    
    int col=1;
     char row='A'+n-i;
    while (col<=i) {
        
        cout <<row<<" ";

       col++;
       row++;
    }
    cout<<endl;
       i++;
   }

    return 0;
}

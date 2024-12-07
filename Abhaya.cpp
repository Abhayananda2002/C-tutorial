#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

   int row=1;
   while (row<=n) {
    char ch='A';
    int col=1;
    while (col<=n) {
        ch='A'+row+col-2;
        cout<<ch<<" ";
        col++;
    }
    cout<<endl;
    row++;
   }

    return 0;
}

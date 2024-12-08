#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
   int i=1;
  while(i<=n) {  
    //print space 
    int space= n-i;
    while(space){
        cout<<" ";
        space--;
    }
    //print 1st triangle
     int col=1;
     while (col<=i) {
         cout <<col;
        col++;
         }
         //print 2nd triangle
         int j=i-1;
         while(j) 
         {
            cout<<j;
            j--;
         }
        
    cout<<endl;
       i++;
   }
    return 0;
}

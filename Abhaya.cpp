#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
   int i=1;
  while(i<=n) {  
    //print 1st triangle 
    int col =1;
    while(col<=n-i+1){
        cout<<col;
        col++;
    }
    //print 2nd triangle
     int j=1;
     while (j<=i-n+4) {
         cout <<"*";
        j++;
         }
         //print 3rd triangle
         int k=1;
         while(k<=i-n+4) 
         {
            cout<<"*";
            k++;
         }
         //print 4th triangle
      int l=1;
     int count=n-i+1;
     while(l<=n-i+1) {
        cout<<count;
        count--;
        l++;
     }
    cout<<endl;
       i++;
   }
    return 0;
}

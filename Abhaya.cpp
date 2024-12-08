#include <iostream>
using namespace std;

int main() {
    
     int a=3;
     int b=5;
     cout<< "a&b"<<(a&b)<<endl;
     cout<< "a|b"<<(a|b)<<endl;
     cout<< "~a"<<~a<<endl;
     cout<< "a^b"<<(a^b)<<endl;


     cout<< (17<<2)<<endl;
     cout<<(17<<1)<<endl;
     cout<<(18>>2)<<endl;
     cout<<(18>>1)<<endl;
     int i=7;
     cout<< (i++) <<endl;
    cout<< (++i) <<endl;
    cout<< (i--) <<endl;
     cout<< (--i) <<endl;
     int a,b=1;
     a=10;
     if(++a)
       cout<<b;
       else
       cout<<++b;

    return 0;
}
  
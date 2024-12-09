#include <iostream>
using namespace std;

int main() {

int a;
cout<<"enter the value of a"<<endl;
cin>>a;
int b,c,d,e;
//cout<<"enter the value of b"<<endl;
//cin>>b;
int notes;
cout<<"enter the notes you want to count which is used in given numbers"<<endl;
cin>>notes;

switch (notes) {  

    case 100:cout <<(b=a/100)<<endl;
             //break;

    case 10 :cout <<(c=a%100)<<endl;
             //break;

    case 50:cout <<(c/50)<<endl;
              //break;
    case 5:cout <<(d=c%50)<<endl;

     case 20:cout <<(d/20)<<endl;

    case 2:cout <<(e=d%20)<<endl;

    case 1:cout <<(e/1)<<endl;
              break;

   

    default : cout<<"please enter the valid operation"<<endl;
}

cout<<endl;

return 0;

}
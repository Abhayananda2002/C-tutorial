#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int i = 1; // Outer loop to control the number of rows
    while (i <= n) {
        char count = 'A'; // Initialize count to 'A' for every row
        int j = 1;        // Use an integer to limit the loop to 3 characters
        while (j <= n) {  // Inner loop runs exactly 3 times to print 'A', 'B', 'C'
            cout << count << " ";
            count++; // Move to the next character
            j++;
        }
        cout << endl; // Move to the next row
        i++;
    }

    return 0;
}

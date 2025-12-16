#include <iostream>
#include <cmath>   // ✅ required for sqrt()
using namespace std;

void perfectsquare(int n){
    bool check = false;
    int root = 0;

    for (int i = 1; i * i <= n; i++) {
        if (i * i == n) {
            check = true;
            root = i;
            break;
        }
    }

    if (check) {
        cout << "The number " << n << " is a perfect square.";
        cout << " Square of " << root << endl;
    } else {
        cout << "Not perfect square." << endl;
    }
}

void perfectsquare2(int n){
    int root = sqrt(n);

    if (root * root == n)
        cout << "The number " << n << " is a perfect square. Square of " << root << endl;
    else
        cout << "Not perfect square." << endl;
}

int main() {
    // int n = 205;
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    perfectsquare(n);
    // perfectsquare2(n);  // optional second method

    return 0;
}

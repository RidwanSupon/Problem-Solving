#include <iostream>
using namespace std;

int main() {
    long a, b, c;
    int t;
    cin>>t;
    while(t--){
    cin >> a >> b >> c;

    if (a == b && b == c) {

        a = b = c = 1;
    } else {

        int largest = a;
        if (b > largest) {
            largest = b;
        }
        if (c > largest) {
            largest = c;
        }
        if (a != largest) {
            a = largest - a + 1;
        }
        if (b != largest) {
            b = largest - b + 1;
        }
        if (c != largest) {
            c = largest - c + 1;
        }
         if (a == largest) {
        a = 0;
    }
    if (b == largest) {
        b = 0;
    }
    if (c == largest) {
        c = 0;
    }
    }

    cout <<a<<" "<<b<<" "<<c<<endl;
    }

    return 0;
}

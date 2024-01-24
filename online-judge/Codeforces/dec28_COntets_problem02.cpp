#include <iostream>
#include <vector>

using namespace std;

string canBuildSquare(const vector<int>& squares) {
    int totalSquares = 0;

    for (int square : squares) {
        totalSquares += square;
    }

    // If the total number of squares is even, it's possible to build a square.
    if (totalSquares % 2 == 0) {
        return "YES";
    } else {
        return "NO";
    }
}

int main() {
    int t;
    cin >> t;

    for (int testCase = 0; testCase < t; ++testCase) {
        int n;
        cin >> n;

        vector<int> squares(n);
        for (int i = 0; i < n; ++i) {
            cin >> squares[i];
        }

        cout << canBuildSquare(squares) << endl;
    }

    return 0;
}

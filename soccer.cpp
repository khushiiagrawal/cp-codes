#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1;
        cin >> x2 >> y2;

        if (x1 > y1) {
            swap(x1, y1);
            swap(x2, y2);
        }

        if (x1 < y1 && y2 < x2) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
    return 0;
}

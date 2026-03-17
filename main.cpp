#include <iostream>
using namespace std;

int main() {
    int score;
    cout << "Enter your score: ";
    cin >> score;

    if (score >= 50) {
        cout << "Status: Pass" << endl;

        if (score >= 80) {
            cout << "Remark: Excellent" << endl;
        } else {
            cout << "Remark: Good" << endl;
        }
    }
    else {
        cout << "Status: Fail" << endl;
        cout << "Remark: Try Again" << endl;
    }

    return 0;
}

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    cout << "Choose your operation.\n";
    cout << "Enter '1' if 'a' is missing.\n";
    cout << "Enter '2' if 'b' is missing.\n";
    cout << "Enter '3' if 'c' is missing.\n";

    int choice;
    cin >> choice;

    int a, b, c;
    int result_sq = 0;
    char missing_side;

    if (choice == 1) {
        missing_side = 'a';
        cout << "Enter the value of 'b': ";
        cin >> b;
        cout << "Enter the value of 'c': ";
        cin >> c;

        int b_sq = b * b;
        int c_sq = c * c;
        cout << "b^2 (" << b << ") is equal to " << b_sq << ".\n";
        cout << "c^2 (" << c << ") is equal to " << c_sq << ".\n";
        cout << "Subtracting...\n";
        result_sq = c_sq - b_sq;
    } 
    else if (choice == 2) {
        missing_side = 'b';
        cout << "Enter the value of 'a': ";
        cin >> a;
        cout << "Enter the value of 'c': ";
        cin >> c;

        int a_sq = a * a;
        int c_sq = c * c;
        cout << "a^2 (" << a << ") is equal to " << a_sq << ".\n";
        cout << "c^2 (" << c << ") is equal to " << c_sq << ".\n";
        cout << "Subtracting...\n";
        result_sq = c_sq - a_sq;
    } 
    else if (choice == 3) {
        missing_side = 'c';
        cout << "Enter the value of 'a': ";
        cin >> a;
        cout << "Enter the value of 'b': ";
        cin >> b;

        int a_sq = a * a;
        int b_sq = b * b;
        cout << "a^2 (" << a << ") is equal to " << a_sq << ".\n";
        cout << "b^2 (" << b << ") is equal to " << b_sq << ".\n";
        cout << "Adding...\n";
        result_sq = a_sq + b_sq;
    } 
    else {
        cout << "Invalid choice.\n";
        return 0;
    }

    // Check if the answer is valid and whether it's a perfect square
    if (result_sq <= 0) {
        cout << "Invalid triangle sides (hypotenuse 'c' must be the longest side).\n";
    } else {
        int root = static_cast<int>(sqrt(result_sq));
        
        if (root * root == result_sq) {
            cout << "Taking the square root...\n";
            cout << "Answer (Perfect Square):\n" << missing_side << " = " << root << "\n";
        } else {
            cout << "Answer (Non-Perfect Square):\n" << missing_side << " = sqrt(" << result_sq << ")\n";
        }
    }

    return 0;
}

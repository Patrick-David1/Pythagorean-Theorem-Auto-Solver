#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    
    cout << "Choose your operation.\n";
    cout << "Enter '1' if 'a' is missing.\n";
    cout << "Enter '2' if 'b' is missing.\n";
    cout << "Enter '3' if 'c' is missing.\n";
    
    
    int input1;
    cin >> input1;
    
    //when c is missing use addition//
    //when a and b is missing use subtraction//
    
    int a1;
    int b1;
    int c1;
    int optr1;
    int optr11;
    int optr111;
    int optr1111;
    
    int a2;
    int b2;
    int c2;
    int optr2;
    int optr22;
    int optr222;
    int optr2222;
    
    
    int a3;
    int b3;
    int c3;
    int optr3;
    int optr33;
    int optr333;
    int optr3333;
    
    if (input1 == 1) {
        
        cout << "Enter the value of 'b'.\n";
        cin >> b1;
        cout << "Enter the value of 'c'.\n";
        cin >> c1;
        optr1 = b1 * b1;
        cout << "b^ (" << b1 << ") is equal to " << optr1 << ".\n";
        optr11 = c1 * c1;
        cout << "c^ (" << c1 << ") is equal to " << optr11 << ".\n";
        cout << "Subtracting...\n";
        optr111 = optr11 - optr1;
        cout << "Squaring...\n";
        optr1111 = sqrt(optr111);
        cout << "Answer:\n" << "a = " << optr1111;
        
    } 
    
    else if (input1 == 2) {
    
        cout << "Enter the value of 'a'.\n";
        cin >> a2;
        cout << "Enter the value of 'c'.\n";
        cin >> c2;
        optr2 = a2 * a2;
        cout << "a^ (" << a2 << ") is equal to " << optr2 << ".\n";
        optr22 = c2 * c2;
        cout << "c^ (" << c2 << ") is equal to " << optr22 << ".\n";
        cout << "Subtracting...\n";
        optr222 = optr22 - optr2;
        cout << "Squaring...\n";
        optr2222 = sqrt(optr222);
        cout << "Answer:\n" << "b = " << optr2222;
    } 
    
    else if (input1 == 3) {   
        
        cout << "Enter the value of 'a'.\n";
        cin >> a3;
        cout << "Enter the value of 'b'.\n";
        cin >> b3;
        optr3 = a3 * a3;
        cout << "a^ (" << a3 << ") is equal to " << optr3 << ".\n";
        optr33 = b3 * b3;
        cout << "b^ (" << b3 << ") is equal to " << optr33 << ".\n";
        cout << "Adding...\n";
        optr333 = optr3 + optr33;
        cout << "Squaring...\n";
        optr3333 = sqrt(optr333);
        cout << "Answer:\n" << "c = " << optr3333;
    };
    
    //Note: Solving only applies to perfect sqaured numbers.//
}

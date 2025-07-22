#include <iostream>
using namespace std;
int main() { 
    int a=10, b=14;
    int A = a&b;
    int B = a|b;    
    int C = a^b;
    int nA = ~a;
    int nB = ~b;
    int sA = a<<1;
    int sB = b<<1; 
    int rA = a>>1; 
    int rB = b>>1; 
    cout << "Bitwise AND: " << A << "\n";
    cout << "Bitwise OR: " << B << "\n";
    cout << "Bitwise XOR: " << C << "\n";   
    cout << "Bitwise NOT of a: " << nA << "\n";
    cout << "Bitwise NOT of b: " << nB << "\n";
    cout << "Left shift of a: " << sA << "\n";
    cout << "Left shift of b: " << sB << "\n";
    cout << "Right shift of a: " << rA << "\n";
    cout << "Right shift of b: " << rB << "\n";
    return 0;
}

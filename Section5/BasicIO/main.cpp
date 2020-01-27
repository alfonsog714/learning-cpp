#include <iostream>

// Another way to get the cout and cin functions from the std namespace
//using std::cout;
//using std::cin;
using namespace std;

int main(){
    int num1;
    int num2;
    double num3;
    
    cout << "Hello World!" << endl;
    cout << "Enter a integer: " << endl;
    cin >> num1;
    cout << "Enter another integer: " << endl;
    cin >> num2;
    cout << "Those two numbers added together equal " << num1 + num2 << "." << endl;
    
    cout << "Enter a decimal number: " << endl;
    cin >> num3;
    cout << "You entered " << num3 << endl;
}
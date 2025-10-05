#include<iostream>

using namespace std;

int main() {
    // 3 different datatypes
    int a = 10;
    float b = 3.5f;
    double c = 4.0;

    // promote float to double for multiplication
    double mul = static_cast<double>(b)*c;

    // promote int to double for addition
    double result = static_cast<double>(a)+mul;

    // print the final result
    cout<<"result: "<<result;

    return 0;
}

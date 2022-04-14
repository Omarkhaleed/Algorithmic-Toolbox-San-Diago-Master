#include <algorithm>
#include <sstream>
#include <iostream>
#include <vector>
#include <string>
#include<algorithm>
using namespace std;
bool GreaterOrEqual(string& a, string& b) {
    return(b + a > a + b);
}
string largest_number(vector<string>numbers, int n) {
    for (size_t i = 1; i < n; i++) {
        for (size_t j = 0; j < n - i; j++) {
            if (GreaterOrEqual(numbers[j], numbers[j + 1])) {
                swap(numbers[j], numbers[j + 1]);
            }

        }
    }
    stringstream salary;
    for (size_t i = 0; i < numbers.size(); i++) {
        salary<< numbers[i];
    }
    return salary.str();
}

int main() {
    int n;
    cin >> n;
    vector<string>numbers(n);
    for (size_t i = 0; i < numbers.size(); i++) {
        cin >> numbers[i];
    }
    cout << largest_number(numbers,n);
}


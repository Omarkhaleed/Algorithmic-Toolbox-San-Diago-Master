#include<iostream>
#include<algorithm>
using namespace std;
int majorityElement(int* array, int n) {
    //to sort the array with built in function (sort)
    sort(array, array + n);
    int count = 1, max_element = -1, temp = array[0], f = 0;
    for (int i = 1; i < n; i++) {
        if (temp == array[i]) {
            count++;
        }
        else {
            count = 1;
            temp = array[i];
        }
        //to store the max value of count
        if (max_element < count) {
            max_element = count;
            if (max_element > (n / 2)) {
                f = 1;
                break;
            }
        }
    }
    return(f == 1 ? 1 : 0);
}
int main() {

    int* array;
    int size;
    cin >> size;
    array = new int[size]; //allocate memory for our array

    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }
    cout << majorityElement(array, size);

	return 0;
}
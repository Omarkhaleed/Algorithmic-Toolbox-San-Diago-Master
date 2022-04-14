#include<iostream>
using namespace std;
int money_change(int n) {
	/*int arr[] = {10,5,1};
	int count = 0;
	while(n>0){
		while (n > arr[i]) {
			n -= arr[i];
			count++;
		}
	}
	return count;
}
*/
	int num = n, count = 0;
	while (num > 0) {
		if (num >= 10)
			num -= 10;
		else if (num >= 5)
			num -= 5;
		else
			num -= 1;
		count++;
	}
	return count;
}


int main() {
	int n;
	cin >> n;
	cout << money_change(n) << endl;
	return 0;
}
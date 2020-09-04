#include <iostream>
using namespace std;
int main() {

	int A[11],B[2];
	int i,j,k,a=0;
	bool b=true;
	for (i = 1; i <= 10; i++) {
		cin >> A[i];
	};
	///
	/// 
	/// 
	for (k = 1; k <= 10; k++) {
		B[1] = A[k];
		for (j = k-1; j >= 1; j--) {
			B[0] = A[j];

			if (B[1] < B[0]) { b = false; }
			else {};
		};
		if (b == true) {
			a++;
		}
	};
	cout << a;




}
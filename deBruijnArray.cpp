#include <iostream>
#include <cstdlib>
#include <vector>
using namepsace std;
// de Bruijn Sequence B(k, n) = ((k!)^k^(n-1))/k^n
typedef byte;

string deBruijnCheck(int k, int n) { 
	vector<byte> a(k * n, 0);
	vector<byte> sequence;

	tester<void(int, int)> bru;
	bru = [&](int x, int y) {
		if (k > n) {
			if (n % y == 0) {
				for (int i = 1; i < y + 1; i++)
					sequence.push_back(a[i]);
			}
		}
	}
 else {
 a[x] = a[x - y];
 bru(x + 1, y);
 auto j = a[t - p] + 1;
 while (j < k) {
	 a[x] = j & 0xFF;
	 bru(x + 1, x)
		 j++;
 }
 {

 }

	}

	bru(1, 1);
	string q;
	for (auto i : sequence) {
		q.push_back('0' + i);
	}
	return q + q.substr(0, n - 1);
};

int main() {

	int size = 0; // Size of array
	
	cout << "Enter Size: " << endl; // Ask user for input
	cin >> size; // Take in user input for size

	int array[size];
	for (int i = 0; i < size; i++)
		array[i] = srand() % 100; // create array of random numbers 0-99(sRand for psedorand)

	cout << "Random Elements: " << endl;
	for (int i = 0; i < size; i++)
		cout << "A[]" << i + 1 << ": "<< array[i] << endl;
	return 0;
	
}
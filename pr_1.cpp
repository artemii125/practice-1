#include <iostream>
#include <cmath>
using namespace std;
int smpl(int N, int* arr, int& k) {
	int index = 0;
	for (int i = 2; i <= N; i++) {
		bool smpl = true;
		for (int j = 2; j <= sqrt(i); j++) {
			if (i % j == 0) {
				smpl = false;
				break;
			}
		}
		if (smpl) {
			arr[index++] = i;
		}
	}
	k = index;
	return 0;
}

int main() {
	setlocale(LC_ALL, "Rus");
	int N;
	cout << "Введите число, до которого будут выведены простые числа: ";
	cin >> N;
	int* arr = new int[N];
	int k;
	smpl(N, arr, k);

	cout << "Массив простых чисел до заданного: ";
	for (int i = 0; i < k; i++) {
		cout << arr[i] << " ";
	cout << " ";
	}
	cout << endl;
	return 0;
}

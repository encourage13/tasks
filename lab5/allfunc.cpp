#include "Header.h"
void copy_array(int* array, int* array2, const int n) {
	for (int i = 0; i < n; i++) {
		array2[i] = array[i];
	}
}
void rand_array(int* array, const int n) {
	for (int i = 0; i < n;i++) {
		array[i] = rand()%10;
	}
}
void print_array(int* array, const int n) {
	for (int i = 0; i < n; i++) {
		cout << array[i] << ' ';
	}
	cout << endl<<endl;
}
void choice(int* array, const int n, int pr, int sr) {
	cout << "—ортировка выбором (по возрастанию)\n";
	int first;
	for (int i = 0; i < n -1 ; i++) {
		first = i;
		for (int j = i + 1; j < n ; j++) {
			sr++;
			if (array[j]<array[first]) {
				first = j;
			}
		}
		swap(array[i], array[first]);
		if (array[i] != array[first]) { pr++; }
	}	
	for (int i = 0; i < n; i++) {
		cout << array[i] << ' ';
	}
	cout << endl;
	cout << " оличество перестановок " << pr << ' ' << "количество сравнений " << sr << endl<<endl;
}
void puzeer(int* array, const int n, int pr, int sr) {
	cout << "—ортировка пузырьком (по возрастанию)\n";
	for (int i = 0; i < n -1 ; i++) {
		bool check = false;
		for (int j = 0;j < n - i - 1; j++) {
			if (array[j] > array[j + 1]) {
				swap(array[j], array[j + 1]);
				check = true;
				pr++;
			}
			sr++;
		}
		if (check == false) {
			break;
		}
	}
	for (int i = 0; i < n; i++) {
		cout << array[i] << ' ';
	}
	cout << endl;
	cout << " оличество перестановок " << pr << ' ' << "количество сравнений " << sr << endl<<endl;
}
void choice_up_to_down(int* array, const int n, int pr, int sr) {
	cout << "—ортировка выбором (по убыванию)\n";
	int first;
	for (int i = 0; i < n - 1; i++) {
		first = i;
		for (int j = i + 1; j < n ; j++) {
			sr++;
			if (array[j] > array[first]) {
				first = j;
			}
		}
		swap(array[i], array[first]);
		if (array[i] != array[first]) { pr++; }
	}
	for (int i = 0; i < n; i++) {
		cout << array[i] << ' ';
	}
	cout << endl;
	cout << " оличество перестановок " << pr << ' ' << "количество сравнений " << sr << endl<<endl;
}
void puzeer_up_to_down(int* array, const int n, int pr, int sr) {
	cout << "—ортировка пузырьком (по убыванию)\n";
	for (int i = 0; i < n - 1; i++) {
		bool check = false;
		for (int j = 0; j < n - i - 1; j++) {
			if (array[j] < array[j + 1]) {
				swap(array[j], array[j + 1]);
				check = true;
				pr++;
			}
			sr++;
		}
		if (check == false) {
			break;
		}
	}
	for (int i = 0; i < n; i++) {
		cout << array[i] << ' ';
	}
	cout << endl;
	cout << " оличество перестановок " << pr << ' ' << "количество сравнений " << sr << endl<<endl;
}
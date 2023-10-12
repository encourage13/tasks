#include "Header.h"
int main() {
	setlocale(0, "");
	srand(time(NULL));
	int n;
	cout << "Введите колво элементов: ";
	cin >> n;
	int* array = new int[n];
	int* array2 = new int[n];
	int pr = 0, sr = 0;
	rand_array(array, n);
	copy_array( array, array2, n);
	cout << "Рандомный массив\n";
	print_array(array, n);
	choice(array, n, 0, 0);
	puzeer(array2, n, 0, 0);
	cout << "Для отсортированного массива\n";
	choice(array, n, 0, 0);
	puzeer(array2, n, 0, 0);
	cout << "Для обратного массива\n";
	choice_up_to_down(array, n, 0, 0);
	puzeer_up_to_down(array2, n, 0, 0);
	delete [] array;
	delete [] array2;
	return 0;
}
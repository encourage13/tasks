#include "Header.h"
int main() {
	setlocale(0, "");
	srand(time(NULL));
	int n;
	cout << "������� ����� ���������: ";
	cin >> n;
	int* array = new int[n];
	int* array2 = new int[n];
	int pr = 0, sr = 0;
	rand_array(array, n);
	copy_array( array, array2, n);
	cout << "��������� ������\n";
	print_array(array, n);
	choice(array, n, 0, 0);
	puzeer(array2, n, 0, 0);
	cout << "��� ���������������� �������\n";
	choice(array, n, 0, 0);
	puzeer(array2, n, 0, 0);
	cout << "��� ��������� �������\n";
	choice_up_to_down(array, n, 0, 0);
	puzeer_up_to_down(array2, n, 0, 0);
	delete [] array;
	delete [] array2;
	return 0;
}
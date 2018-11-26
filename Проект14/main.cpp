#include "SIGN.hpp"

using namespace std;

int main() {
	const int size = 8;
	setlocale(LC_ALL, "");
	Sign signs[size];
	int choice;
	while (true) {
		cout << "\n1. Считать\n2. Поиск\n3. Изменить\n3. Выход\n_ ";
		cin >> choice;
		if (choice == 1) {
			cout << "Имя Фамилия Знак DD MM YY\n";
			try {
				for (int i = 0; i < size; ++i) {
					cin >> signs[i];
				}
				int j, n = size;
				do {
					int nn = 0;
					for (j = 1; j < n; ++j)
						if (signs[j - 1].SSign() > signs[j].SSign()) {
							Sign temp = signs[j - 1];
							signs[j - 1] = signs[j];
							signs[j] = temp;
							nn = j;
						}
					n = nn;
				} while (n);
			}
			catch (const Exception& e) {
				cout << "\n" << e.what();
			}
		}
		else if (choice == 2) {
			cout << "Введите месяц: ";
			int month;
			cin >> month;
			int i;
			for (i = 0; i < size; ++i) {
				if (signs[i].Date()[1] == month) {
					cout << "\n" << signs[i];
				}
			}
			if (i > size) {
				cout << "NOT FOUND";
			}
		}
		else if (choice == 3) {
			int index;
			do {
				cout << "Введите индекс: ";
				cin >> index;
			} while (index < 0 || index >= 8);
			cout << "Имя Фамилия Знак DD MM YY\n";
			cin >> signs[index];
		}
		else if (choice == 4) {
			return 0;
		}
	}
}

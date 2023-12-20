#include <iostream>
#include <clocale>

using namespace std;

/*
* Лабораторная работа 9. Поливцев Михаил, ИВТ-31. Индивидуальный вариант задания 16.
* Объект – мебель в магазине. Известен тип мебели, цвет, материал, 
* количество предметов мебели в наборе, стоимость. Сосчитать количество 
* наименований мебели, изготовленной из натурального дерева.
*/

const int k = 100;
struct furniture{
	char type[k];
	char color[k];
	char material[k];
	int kol;
	double price;
};

int main() {
	setlocale(LC_ALL, "ru");
	system("chcp 1251");

	const char mat[] = "натуральное дерево";
	int kol_fur;
	furniture lst[k];

	cout << "Введите количество наименований мебели: ";
	cin >> kol_fur;
	if (kol_fur > k) {
		cout << "слишком много наименований!";
		return 1;
	}

	cout << "Введите данные о наборах мебели:" << endl;
	for (int i = 0; i < kol_fur; i++) {
		cout << "Тип: "; cin.get();
		cin.getline(lst[i].type, k);
		cout << "Цвет: ";
		cin.getline(lst[i].color, k);
		cout << "Материал: ";
		cin.getline(lst[i].material, k);
		cout << "Количество прдметов мебели в наборе: ";
		cin >> lst[i].kol;
		cout << "Цена в рублях: ";
		cin >> lst[i].price;
	}

	int s = 0;
	for (int i = 0; i < kol_fur; i++) {
		if (strcmp(lst[i].material, mat) == 0) {
			s++;
		}
	}

	cout << "Из натурального дерева сделано " << s << " наименований мебели" << endl;
}
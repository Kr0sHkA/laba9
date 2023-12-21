#include <iostream>
/*
* Лабораторная работа №9 Строки
* Пислегин Евгений Константинович ИВТ-32
* Объект – счет в банке. Известны номер счета, фамилия владельца,
* остаток на счете, тип счета (накопительный, депозит и т.п.), годовой процент
* начислений, дата последней операции со счетом. 
* Выдать список счетов, остаток на которых меньше заданной суммы
*/

using namespace std;

const int max_kol = 30;
int Balance; // остаток на счете
char Name[max_kol]; // фамилия владельца счета

struct Acc
{
    char Number[10]; //номер счета
    char Name[max_kol]; // фамилия владельца счета
    char Type[max_kol]; // тип счета (накопительный, депозит и т.д.)
    char Percentage[100]; // годовой процент начислений
    char Date[31]; // дата последней операции со счетом
};

int main()
{
    Acc st[max_kol]; //группа студентов
    int kol, fl, summa;
    char zname[max_kol];
    setlocale(LC_ALL, "Russian");
    cout << "Введите количество счетов, о которых необходимо выдать информацию: ";
    cin >> kol;
    cout << "Введите сумму: ";
    cin >> summa;
    cout << "Введите данные: \n";

    for (int i = 0; i < kol; i++)
    {
        cout << "Номер счета: ";
        for (int j = 0; j < 10; j++)
        {
            cin >> st[i].Number[10];
        }

        cout << "Фамилия владельца: "; cin.get();
        cin.getline(st[i].Name, max_kol);

        cout << "Остаток на счете (в $): ";
        cin >> Balance;

        cout << "Тип счета: "; cin.get();
        cin.getline(st[i].Type, max_kol);

        cout << "Годовой % начислений: "; cin.get();
        cin.getline(st[i].Percentage, 100);

        cout << "Дата последней операции со счетом: "; cin.get();
        cin.getline(st[i].Date, 31);
    }
}
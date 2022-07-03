#include <iostream>
#include <vector>
#include <string>
#include<conio.h>
#include<string.h>
using namespace std;
template<typename T>

class Stack
{
public:
    void push(T);
    T pop();
    void show();
    void poisk();

private:
    vector<T> v;
};

int main() {
    setlocale(LC_ALL, "Russian");

    Stack<string> b;
    int g1 = 0;
    string g2;
    int kol;
    int cassse;
    int cas = 0;

    while (true)
    {
        cout << "----------------------------------\n";
        cout << "|1 - Добавить книгу               |\n";
        cout << "|2 - Удалить книгу                |\n";
        cout << "|3 - Вывести на экран             |\n";
        cout << "|4 - Поиск книги                  |\n";
        cout << "|0 - Выход                        |\n";
        cout << "----------------------------------\n";
        cin >> cassse;

        switch (cassse)
        {
        case 1:

            cout << "Введите количество книг коорые хотите ввести:";
            cin >> kol;
            for (int i = 0; i < kol; i++)
            {
                cout << "Введите название" << cas + 1 << "-й книги:\n";
                cin >> g2;
                b.push(g2);
                cas++;
            }
            break;
        case 2:
            if (cas == 0)
            {
                cout << "Стек книг пуст\n";
                break;
            }
            else 
            {
                cout << "Элемент был успешно удалён ;)\n";
                b.pop();
                cas--;
                break;
            }

        case 3:

            b.show();
            break;

        case 4:

            if (cas == 0)
            {
                cout << "Стек книг пуст\n";
                break;
            }
           
            else
            {                
                b.poisk();
                break;
            }

        case 0:

            return 0;
            break;

        }

    }

    return 0;
}

template<class T> void Stack<T>::push(T elem)
{
    v.push_back(elem);
}

template<class T> T Stack<T>::pop()
{
    T elem = v.back();
    v.pop_back();
    return elem;
}
template<class T> void Stack<T>::show()
{
    cout << "stack:";
    for (auto e : v) cout << "\t" << e << " ";
    endl;
}

template<class T> void Stack<T>::poisk()
{
    string s;
    cout << "Введите название книги:";
    cin >> s;
    for (auto e : v) {
        if (s == e) { cout << "Ткакая книга есть в списке\n"; break; }
        else { cout << "Ткакой книги в списке нет\n"; break;}
    }
}


























//#include <iostream>
//#include <stack>
//using namespace std;
//
//
//
//
//class Stack
//{
//public:
//    Stack();
//    ~Stack();
//
//    void add_book() 
//    {
//        
//    
//    
//    };
//
//
//
//
//
//
//
//};
//
//
//
//int main() {
//    int steck[20];
//    int i = -1;  // объявили стек
//
//    cout << "123";
//
//    for (int j = 0; j < 6; j++) {
//        int a;
//
//        cin >> a;
//
//        i++;  // увеличиваем i на один
//
//        steck[i] = a;  // добавляем в стек элемент
//    }
//
//    if (i == -1) cout << "Стек пуст";  // проверяем пуст ли стек (нет)
//
//    cout << steck[i] << " это верхний элемент стека";
//
//    cout << "Сейчас мы удалим верхний элемент";
//
//    i--;  // уменьшаем i на один
//
//
//
//
//    //stack <int> steck;  // создаем стек
//
//    //int i = 0;
//
//    //cout << "Введите шесть любых целых чисел: " << endl; // предлагаем пользователю 
//    //                                                    // ввести 6 чисел
//    //while (i != 6) {
//    //    int a;
//    //    cin >> a;
//
//    //    steck.push(a);  // добавляем введенные числа
//    //    i++;
//    //}
//
//    //if (steck.empty()) cout << "Стек не пуст";  // проверяем пуст ли стек (нет)
//
//    //cout << "Верхний элемент стека: " << steck.top() << endl; // выводим верхний элемент
//    //cout << "Давайте удалим верхний элемент " << endl;
//
//    //steck.pop();  // удаляем верхний элемент
//
//    //cout << "А это новый верхний элемент: " << steck.top(); // выводим уже новый
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//    system("pause");
//    return 0;
//}
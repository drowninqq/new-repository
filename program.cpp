#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void russian() {
    cout << "Приветствие на 'русском' языке: Привет, мир!" << endl;
}

int main() {
    setlocale(LC_ALL, "");

    string language;
    cout << "Поддерживаемые языки: russian" << endl;
    cout << "Введите язык: ";
    cin >> language;

    if (language == "russian") {
        russian();
    }
    else {
        cout << "Язык не поддерживается." << endl;
    }

    return 0;
}
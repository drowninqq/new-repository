#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void russian() {
    cout << "Приветствие на 'русском' языке: Привет, мир!" << endl;
}

void english() {
    cout << "Приветствие на 'английском' языке: Hello, World!" << endl;
}

int main() {
    setlocale(LC_ALL, "");

    string language;
    cout << "Поддерживаемые языки: russian, english" << endl;
    cout << "Введите язык: ";
    cin >> language;

    if (language == "russian") {
        russian();
    } 
    else if (language == "english") {
        english();
    } 
    else {
        cout << "Язык не поддерживается." << endl;
    }

    return 0;
}

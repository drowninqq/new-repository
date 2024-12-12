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

void french() {
    cout << "Приветствие на 'французском' языке: Bonjour, le monde!" << endl;
}

int main() {
    setlocale(LC_ALL, "");

    string language;
    cout << "Поддерживаемые языки: russian, english, french" << endl;
    cout << "Введите язык: ";
    cin >> language;

    if (language == "russian") {
        russian();
    } 
    else if (language == "english") {
        english();
    } 
    else if (language == "french") {
        french();
    } 
    else {
        cout << "Язык не поддерживается." << endl;
    }

    return 0;
}
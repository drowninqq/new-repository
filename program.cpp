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

void german() {
    cout << "Приветствие на 'немецком' языке: Hallo, Welt!" << endl;
    return 0;
}

void spanish() {
    cout << "Приветствие на 'испанском' языке: Hola, mundo!" << endl;
}

int main() {
    setlocale(LC_ALL, "");

    string language;
    cout << "Поддерживаемые языки: russian, english, french, german, spanish" << endl;
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
    else if (language == "german") {
        german();
    } 
    else if (language == "spanish") {
        spanish();
    } 
    else {
        cout << "Язык не поддерживается." << endl;
    }

    return 0;
}

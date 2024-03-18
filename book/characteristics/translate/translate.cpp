#include "translate.h"
#include <iostream>

Translate::Translate(int time, string translation) : _time(time), _translation(translation) {}

int Translate::GetTime() {
    return _time;
}
void Translate::SetTime() {
    int time{};
    cout << "Enter time to read: "<<endl;
    cin >> time;
    _time = time;
}
string Translate::GetTranslation() {
    return _translation;
}
void Translate::SetTranslation() {
    string translation{};
    cout << "Enter the author of translation" << endl;
    cin >> translation;
    _translation = translation;
}
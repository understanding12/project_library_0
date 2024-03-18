#pragma once
#include <string>
using namespace std;
class Translate { //перевод
    private:
        int _time{}; //время хранится в секундах
        string _translation{};
    public:
        Translate(int time, string translation);
        void SetTime();
        void SetTranslation();
        int GetTime();
        string GetTranslation();
};
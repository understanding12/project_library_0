#include <string>
#include <cstddef>
#include <iostream>
using namespace std;
class CorrectItem {
public:
    typedef int(*Func)(int ID);
    CorrectItem(string, Func);
    Func func{};
    string item_name{};
    string getName();
    void print();
    int run();
};
class CorrectMenu {
public:
    CorrectMenu(string, CorrectItem*, size_t);
    void print();
    int runCommand();

private:
    int select{ -1 };
    size_t count{};
    bool running{};
    string title{};
    CorrectItem* items{};
};

#include <string>
#include <cstddef>
#include <iostream>
using namespace std;
class CMenuItem {
public:
    typedef int(*Func)();
    CMenuItem(string, Func);
    Func func{};
    string item_name{};
    string getName();
    void print();
    int run();
};
class CMenu {
public:
    CMenu(string, CMenuItem*, size_t);
    void print();
    int runCommand();

private:
    int select{ -1 };
    size_t count{};
    bool running{};
    string title{};
    CMenuItem* items{};
};

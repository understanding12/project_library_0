#include <string>
#include <cstddef>
#include <iostream>
using namespace std;
class SortItem {
public:
    typedef int(*Func)();
    SortItem(string, Func);
    Func func{};
    string item_name{};
    string getName();
    void print();
    int run();
};
class SortMenu {
public:
    SortMenu(string, SortItem*, size_t);
    void print();
    int runCommand();

private:
    int select{ -1 };
    size_t count{};
    bool running{};
    string title{};
    SortItem* items{};
};

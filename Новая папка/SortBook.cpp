#include "SortBook.h"
#include "correct.h"
#include "book/book.h"
#include<string>
using namespace std;
#include<string>
#include <cstddef>
#include <iostream>
SortItem::SortItem(std::string name, Func func) : item_name(name), func(func) {}
string SortItem::getName() {
    return item_name;
}
void SortItem::print() {
    std::cout << item_name;
}
int SortItem::run() {
    int ID;
    return func();
}
using namespace std;
SortMenu::SortMenu(string title, SortItem* items, size_t count) : title(title), items(items), count(count) {}
void SortMenu::print() {
    for (size_t i{}; i < count; ++i) {
        std::cout << i + 1 << ". ";
        items[i].print();
        std::cout << std::endl;
    }
}
int SortMenu::runCommand() {
    print();
    std::cout << "\n   Select >> ";
    std::cin >> select;
    return items[select - 1].run();
}

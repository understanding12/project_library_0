#include "correct.h"
#include "book/book.h"
#include<string>
using namespace std;
#include<string>
#include <cstddef>
#include <iostream>
CorrectItem::CorrectItem(std::string name, Func func) : item_name(name), func(func) {}
string CorrectItem::getName() {
    return item_name;
}
void CorrectItem::print() {
    std::cout << item_name;
}
int CorrectItem::run() {
    int ID;
    return func();
}
using namespace std;
CorrectMenu::CorrectMenu(string title, CorrectItem* items, size_t count) : title(title), items(items), count(count) {}
void CorrectMenu::print() {
    for (size_t i{}; i < count; ++i) {
        std::cout << i + 1 << ". ";
        items[i].print();
        std::cout << std::endl;
    }
}
int CorrectMenu::runCommand() {
    print();
    std::cout << "\n   Select >> ";
    std::cin >> select;
    return items[select - 1].run();
}

//g++ registrMenu.cpp LibraryProject.cpp book/book.cpp book/characteristics/translate/translate.cpp book/characteristics/review/review.cpp
#include <iostream>
#include <vector>
#include <string>
#include "registrMenu.h"
#include "book/characteristics/translate/translate.h"
#include "book/characteristics/review/review.h"
#include "book/book.h"
using namespace std;

class metods {
    virtual int Getinfo() = 0;/* вирутальный класс */
};

vector <Book> books;

int addBook() {
    vector <Review> reviews{};
    vector <Translate> translations{};
    Book* obj = new Book(0, "", "", "", 0.0, 0, reviews, translations);

    obj->SetID(books.size()+1);

    cout << "Enter the theme: " << endl;
    obj->SetSubjectMatter();

    cout << "Enter the author: " << endl;
    obj->SetGenre();

    cout << "Enter the name of a book: " << endl;
    obj->SetName();

    cout << "Enter full rating: " << endl;
    obj->SetOverallRating();

    cout << "Enter the price: " << endl;
    obj->SetPrice();

    cout << "Make a review: " << endl;
    obj->SetReviews();

    cout << "Enter the translation: " << endl; // Как пользователь может задать перевод?
    obj->SetTranslations();

    books.push_back(*obj);
    cout << "the book is successfully added to the library!"<<endl;
    return 1;
}

int printBooks() {
    for(int i{}; i<books.size(); i++){
        cout << books[i].GetID() << ") SubjectMatter: " << books[i].GetSubjectMatter() << ", Genre: " << books[i].GetGenre() << ", Name: " 
        << books[i].GetName() << ", Rating: " << books[i].GetOverallRating() << ", Price: " << books[i].GetPrice() << endl;
    }
    cout << endl;
    return 3;
}

int correctBook() {
    return 2;
}

int deleteBook() {
    int delID{};
    cout << "Choose a book to delete:\n";
    printBooks();
    cin >> delID;
    books.erase(books.begin()+(delID-1));
    return 4;
}
int f5() {
    return 5;
}
int f6() {
    return 6;
}

int f7() {
    return 0; ///это функция выхода()
}


int main() {
    setlocale(0, "");
    const int ITEMS_NUMBER = 7;
    CMenuItem items[ITEMS_NUMBER]{ {"Add a book", addBook}, {"Print books", printBooks}, {"Correct the book info", correctBook}, 
    {"Delete a book", deleteBook}, {"---", f5}, {"---", f6}, {"exit", f7} }; //пункты меню
    CMenu menu("My console menu", items, ITEMS_NUMBER);
    while (menu.runCommand()) {};
    return 0;
}


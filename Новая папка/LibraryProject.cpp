//g++ registrMenu.cpp LibraryProject.cpp book/book.cpp book/characteristics/translate/translate.cpp book/characteristics/review/review.cpp
#include <iostream>
#include <vector>
#include <string>
#include "registrMenu.h"
#include "book/characteristics/translate/translate.h"
#include "book/characteristics/review/review.h"
#include "book/book.h"
#include <algorithm>
using namespace std;

int exit() {
    return 0; ///это функция выхода()
}

vector <Book> books{};

int addBook() {
    vector <Review> reviews{};
    vector <Translate> translations{};
    Book* obj = new Book();

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

void printBook(int i){
        cout << books[i].GetID() << ") SubjectMatter: " << books[i].GetSubjectMatter() << ", Genre: " << books[i].GetGenre() << ", Name: " 
        << books[i].GetName() << ", Rating: " << books[i].GetOverallRating() << ", Price: " << books[i].GetPrice() << endl;
        for (int j{}; j<books[i].GetReviews().size(); j++){
            cout << "\tReview " << j+1 << ":\n\t "  << "rate: " << books[i].GetReviews()[j].GetRate() << ", review: " 
            << books[i].GetReviews()[j].GetReview() << endl;
        }
        for (int j{}; j<books[i].GetTranslations().size(); j++){
            cout << "\tTranslation " << j+1 << ":\n\t "  << "time: " << books[i].GetTranslations()[j].GetTime() << ", translation: "
            << books[i].GetTranslations()[j].GetTranslation() << endl;
        }
        cout << endl;
}

int printBooks() {
    for(int i{}; i<books.size(); i++){
        printBook(i);
    }  
    cout << endl;
    return 3;
}

int Find() {
    int ID;
    cout<<"Enter ID"<<endl;
    cin>>ID;
    for (int i{};i<size(books);i++){
        if (books[i].GetID() == ID){
            ID = i;
        }
    }
    return ID;

}

int _SetSabjectMatter() {
    books[Find()].SetSubjectMatter();
    return 1;
}

int _SetGenre() {
    books[Find()].SetGenre();
    return 1;
}

int _SetName() {
    books[Find()].SetName();
    return 1;
}

int _SetOverallRating() {
    books[Find()].SetOverallRating();
    return 1;
}

int _SetPrice() {
    books[Find()].SetPrice();
    return 1;
}

int _SetReviews() {
    books[Find()].SetReviews();
    return 1;
}

int _SetTranslations() {
    books[Find()].SetTranslations();
    return 1;
}

int correctBook() {
    const int ITEMS_NUMBER=8;
    CMenuItem items[ITEMS_NUMBER]{ {"Change Subject matter",_SetSabjectMatter}, {"Change Genre",_SetGenre},{"Change Name",_SetName},{"Change rating",_SetOverallRating},
    {"Change price",_SetPrice},{"Change reviews",_SetReviews},{"Change translate",_SetTranslations},{"Exit", exit}}; //пункты меню
    CMenu menu("My console menu", items, ITEMS_NUMBER);
    while (menu.runCommand()) {};
    return 1;
}

int deleteBook() {
    int delID{};
    cout << "Choose a book to delete:\n";
    printBooks();
    cin >> delID;
    books.erase(books.begin()+(delID-1));
    return 4;
}

int sortBookSubjectMatter() {
    int sortDirection{};
    cout << "Choose direction to sort:\n 1) 0->9 / A->Z\n 2) 9->0 / Z->A" << endl;
    cin >> sortDirection;
    switch(sortDirection){
        case 1:{
            for (int i = 0; i < books.size(); i++) {
                for (int k = 0; k < books.size() - i - 1; k++) {
                    if (books[k].GetSubjectMatter() > books[k + 1].GetSubjectMatter()) {
                        Book t = books[k];
                        books[k] = books[k + 1];
                        books[k + 1] = t;
                    }
                }
            }
        }
        case 2:{
            for (int i = 0; i < books.size(); i++) {
                for (int k = 0; k < books.size() - i - 1; k++) {
                    if (books[k].GetSubjectMatter() < books[k + 1].GetSubjectMatter()) {
                        Book t = books[k];
                        books[k] = books[k + 1];
                        books[k + 1] = t;
                    }
                }
            }
        }
    }
    return 0;
}

int sortBookGenre() {
    int sortDirection{};
    cout << "Choose direction to sort:\n 1) 0->9 / A->Z\n 2) 9->0 / Z->A" << endl;
    cin >> sortDirection;
    switch(sortDirection){
        case 1:{
            for (int i = 0; i < books.size(); i++) {
                for (int k = 0; k < books.size() - i - 1; k++) {
                    if (books[k].GetGenre().compare(books[k+1].GetGenre()) > 0) {
                        Book t = books[k];
                        books[k] = books[k + 1];
                        books[k + 1] = t;
                    }
                }
            }
        }
        case 2:{
            for (int i = 0; i < books.size(); i++) {
                for (int k = 0; k < books.size() - i - 1; k++) {
                    if (books[k].GetGenre().compare(books[k+1].GetGenre()) < 0) {
                        Book t = books[k];
                        books[k] = books[k + 1];
                        books[k + 1] = t;
                    }
                }
            }
        }
    }
    return 0;
}

int sortBookPrice(){
    int sortDirection{};
    cout << "Choose direction to sort:\n 1) 0->9 / A->Z\n 2) 9->0 / Z->A" << endl;
    cin >> sortDirection;
    switch (sortDirection) {
    case 1:
        for (int i = 0; i < books.size(); i++) {
            for (int k = 0; k < books.size() - i - 1; k++) {
                if (books[k].GetPrice() > books[k + 1].GetPrice()) {
                    Book t = books[k];
                    books[k] = books[k + 1];
                    books[k + 1] = t;
                }
            }
        }
        break;
    case 2:
        for (int i = 0; i < books.size(); i++) {
            for (int k = 0; k < books.size() - i - 1; k++) {
                if (books[k].GetPrice() < books[k + 1].GetPrice()) {
                    Book t = books[k];
                    books[k] = books[k + 1];
                    books[k + 1] = t;
                }
            }
        }
        break;
    }
    return 0;

}

int SortBookOverallRating(){
        for (int i = 0; i < books.size(); i++) {
            for (int k = 0; k < books.size() - i - 1; k++) {
                if (books[k].GetPrice() > books[k + 1].GetPrice()) {
                    Book t = books[k];
                    books[k] = books[k + 1];
                    books[k + 1] = t;
                }
            }
        }
    return 0;
}

int sortBook() {
    const int ITEMS_NUMBER=5;
    CMenuItem items[ITEMS_NUMBER]{{"Sort by Subject matter", sortBookSubjectMatter}, {"Sort by Genre", sortBookGenre}, {"Sort by Price", sortBookPrice},
    {"Sort by Rating", SortBookOverallRating}, {"Go back", exit}}; //пункты меню
    CMenu menu("My console menu", items, ITEMS_NUMBER);
    while (menu.runCommand()) {};
    return 1;
}

int searchBookGenre() {
    int check{};
    string request{};
    cin >> request;
    for (int i{}; i < books.size(); i++) {
        int error{};
        for (int j{}; j < request.length(); j++) {
            if (!(books[i].GetGenre()[j] == request[j])) {
                error++;
                check++;
                break;
            }
        }
        if (error == 0) {
            printBook(i);
        }
    }
    return 1;
}
int searchBookSubjectMatter() {
    int check{};
    string request{};
    cin >> request;
    for (int i{}; i < books.size(); i++) {
        int error{};
        for (int j{}; j < request.length(); j++) {
            if (!(books[i].GetSubjectMatter()[j] == request[j])) {
                error++;
                check++;
                break;
            }
        }
        if (error == 0) {
            printBook(i);
        }
    }
    return 6;
}
int searchBookName() {
    int check{};
    string request{};
    cin >> request;
    for (int i{}; i < books.size(); i++) {
        int error{};
        for (int j{}; j < request.length(); j++) {
            if (!(books[i].GetName()[j] == request[j])) {
                error++;
                check++;
                break;
            }
        }
        if (error == 0) {
            printBook(i);
        }
    }
    return 6;
}
int searchBook(){
    const int ITEMS_NUMBER = 4;
    CMenuItem items[ITEMS_NUMBER]{{"Search in Names", searchBookName}, {"Search in Genres", searchBookGenre},
    {"Search in Subject matters", searchBookSubjectMatter}, {"Go back", exit}}; //пункты меню
    CMenu menu("My console menu", items, ITEMS_NUMBER);
    while (menu.runCommand()) {};
    return 1;
}

int main() {
    setlocale(0, "");
    const int ITEMS_NUMBER = 7;
    CMenuItem items[ITEMS_NUMBER]{ {"Add a book", addBook}, {"Print books", printBooks}, {"Correct the book info", correctBook}, 
    {"Delete a book", deleteBook}, {"Sort books", sortBook}, {"Search a book", searchBook}, {"exit", exit} }; //пункты меню
    CMenu menu("My console menu", items, ITEMS_NUMBER);
    while (menu.runCommand()) {};
    return 0;
}


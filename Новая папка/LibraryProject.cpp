//g++ registrMenu.cpp LibraryProject.cpp book/book.cpp book/characteristics/translate/translate.cpp book/characteristics/review/review.cpp correct.h
#include <iostream>
#include <vector>
#include <string>
#include "registrMenu.h"
#include "book/characteristics/translate/translate.h"
#include "book/characteristics/review/review.h"
#include "book/book.h"
#include "correct.cpp"
using namespace std;
vector <Book> books;
class metods {
    virtual int Getinfo() = 0;/* вирутальный класс */
};
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
int Find(){
    int ID;
    cout<<"введите ID"<<endl;
    cin>>ID;
    for (int i{};i<size(books);i++){
        if (books[i].GetID() == ID){
            ID = i;
        }
    }
    return ID;

}
int printBooks() {
    for(int i{}; i<books.size(); i++){
        cout << books[i].GetID() << ") SubjectMatter: " << books[i].GetSubjectMatter() << ", Genre: " << books[i].GetGenre() << ", Name: " 
        << books[i].GetName() << ", Rating: " << books[i].GetOverallRating() << ", Price: " << books[i].GetPrice() << endl;
        for (int j{}; j<size(books[i].GetReviews()); j++){
            cout << "\tReview " << j+1 << ":\n\t "  << "rate: " << books[i].GetReviews()[j].GetRate() << ", review: " 
            << books[i].GetReviews()[j].GetReview() << endl;
        }
        for (int j{}; j<books[i].GetTranslations().size(); j++){
            cout << "\tTranslation " << j+1 << ":\n\t "  << "time: " << books[i].GetTranslations()[j].GetTime() << ", translation: "
            << books[i].GetTranslations()[j].GetTranslation() << endl;
        }
        cout << endl;
    }
    cout << endl;
    return 3;
}
int _SetSabjectMatter(int ID)
{
    books[Find()].SetSubjectMatter();
    return 1;
}

int _SetGenre(int ID)
{
    books[Find()].SetGenre();
    return 1;
}

int _SetName(int ID)
{
    books[Find()].SetName();
    return 1;
}

int _SetOverallRating(int ID)
{
    books[Find()].SetOverallRating();

    return 1;
}

int _SetPrice(int ID)
{

    books[Find()].SetPrice();

    return 1;
}

int _SetReviews(int ID)
{
    books[Find()].SetReviews();

    return 1;
}

int _SetTranslations(int ID)
{
    books[Find()].SetTranslations();

    return 1;
}
int _exit_(int ID)
{
    return 0;
}
int correctBook() {
    const int ITEMS_NUMBER=8;
    CorrectItem items[ITEMS_NUMBER]{ {"Изменить тематику",_SetSabjectMatter}, {"Изменить автора",_SetGenre},{"Изменить название",_SetName},{"Изменить общий рейтинг",_SetOverallRating},
    {"Изменить стоимомть",_SetPrice},{"Изменить отзыв",_SetReviews},{"Изменить перевод",_SetTranslations},{"Выход в главное меню",_exit_}}; //пункты меню
    CorrectMenu menu("My console menu", items, ITEMS_NUMBER);
    while (menu.runCommand()) {};
    return 1;
}
int deleteBook() {
    cout << "Choose a book to delete:\n";
    printBooks();
    books.erase(books.begin()+Find());
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
    {"Delete a book", deleteBook}, {"sort book", f5}, {"---", f6}, {"exit", f7} }; //пункты меню
    CMenu menu("My console menu", items, ITEMS_NUMBER);
    while (menu.runCommand()) {};
    return 0;
}
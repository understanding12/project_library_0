//g++ registrMenu.cpp LibraryProject.cpp book/book.cpp book/characteristics/translate/translate.cpp book/characteristics/review/review.cpp correct.h SortBook.h
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>
#include "registrMenu.h"
#include "book/characteristics/translate/translate.h"
#include "book/characteristics/review/review.h"
#include "book/book.h"
#include "correct.cpp"
#include "SortBook.h"
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
void printBookk(int i,vector <Book> Temp){
        cout << Temp[i].GetID() << ") SubjectMatter: " << Temp[i].GetSubjectMatter() << ", Genre: " << Temp[i].GetGenre() << ", Name: " 
        << Temp[i].GetName() << ", Rating: " << Temp[i].GetOverallRating() << ", Price: " << Temp[i].GetPrice() << endl;
        for (int j{}; j<Temp[i].GetReviews().size(); j++){
            cout << "\tReview " << j+1 << ":\n\t "  << "rate: " << Temp[i].GetReviews()[j].GetRate() << ", review: " 
            << Temp[i].GetReviews()[j].GetReview() << endl;
        }
        for (int j{}; j<Temp[i].GetTranslations().size(); j++){
            cout << "\tTranslation " << j+1 << ":\n\t "  << "time: " << Temp[i].GetTranslations()[j].GetTime() << ", translation: "
            << Temp[i].GetTranslations()[j].GetTranslation() << endl;
        }
        cout << endl;
}
int printBookss(vector <Book> Temp) {
    for(int i{}; i<Temp.size(); i++){
        printBookk(i,Temp);
    }
    cout << endl;
    return 3;
}
int _SetSabjectMatter()
{
    books[Find()].SetSubjectMatter();
    return 1;
}

int _SetGenre()
{
    books[Find()].SetGenre();
    return 1;
}

int _SetName()
{
    books[Find()].SetName();
    return 1;
}

int _SetOverallRating()
{
    books[Find()].SetOverallRating();

    return 1;
}

int _SetPrice()
{

    books[Find()].SetPrice();

    return 1;
}

int _SetReviews()
{
    books[Find()].SetReviews();

    return 1;
}

int _SetTranslations()
{
    books[Find()].SetTranslations();

    return 1;
}
int _exit_()
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
int _SortID(){
    cout<<"выберите реверс сортиоровки 1(по убыванию) 2(по возрастанию)"<<endl;
    int reverse;
    switch(reverse){
        case 1:
        {
            for (int j{};j<size(books);j++){
            for (int i{};i<size(books)-1;i++){
                if (books[i].GetID()<books[i+1].GetID()){
                    Book a;
                    books[i+1] =a;
                    books[i+1] = books[i];
                    books[i]= a;
                }
            }
            }
        }
        break;
        case 2:
        {
            for (int j{};j<size(books);j++){
            for (int i{};i<size(books)-1;i++){
                if (books[i].GetID()>books[i+1].GetID()){
                    Book a;
                    books[i+1] =a;
                    books[i+1] = books[i];
                    books[i]= a;
                }
            }
            }

        }
        break;
    }
    return 1;
}
int _SortSabjectMatter()
{
    cout<<"введите тематику"<<endl;
    string reverse;
    vector <Book> Temp;
            for (int j{};j<size(books);j++){
                if (books[j].GetSubjectMatter()==reverse){
                    Book a;
                    a = books[j];
                    Temp.push_back(a);
                }
            
            }
    cout<<"отсортированный список по вашей тематике"<<endl;
    printBookss(Temp);
    return 1;
}
int _SortGenre(){
  cout<<"введите автора"<<endl;
    string reverse;
    vector <Book> Temp;
            for (int j{};j<size(books);j++){
                if (books[j].GetSubjectMatter()==reverse){
                    Book a;
                    a = books[j];
                    Temp.push_back(a);
                }
            
            }
    cout<<"отсортированный список по вашей тематике"<<endl;
    printBookss(Temp);
    return 1;
}
int _SortReviews(){
cout<<"выберите реверс сортиоровки 1(по убыванию) 2(по возрастанию)"<<endl;
    int reverse;
    switch(reverse){
        case 1:
        {
            for (int j{};j<size(books);j++){
            for (int i{};i<size(books)-1;i++){
                if (size(books[i].GetReviews())<size(books[i+1].GetReviews())){
                    Book a;
                    books[i+1] =a;
                    books[i+1] = books[i];
                    books[i]= a;
                }
            }
            }
        }
        break;
        case 2:
        {
            for (int j{};j<size(books);j++){
            for (int i{};i<size(books)-1;i++){
                if (size(books[i].GetReviews())>size(books[i+1].GetReviews())){
                    Book a;
                    books[i+1] =a;
                    books[i+1] = books[i];
                    books[i]= a;
                }
            }
            }

        }
        break;
    }
    return 1;

}
int _SortOverallRating(){
            for (int j{};j<size(books);j++){
            for (int i{};i<size(books)-1;i++){
                if (books[i].GetOverallRating()>books[i+1].GetOverallRating()){
                    Book a;
                    books[i+1] =a;
                    books[i+1] = books[i];
                    books[i]= a;
                }
            }
            }
    return 1;
}
int exit_(){
    return 0;
}
int _SortPrice(){
    cout<<"выберите реверс сортиоровки 1(по убыванию) 2(по возрастанию)"<<endl;
    int reverse;
    cin>>reverse;
    switch(reverse){
        case 1:
        {
            for (int j{};j<size(books);j++){
            for (int i{};i<size(books)-1;i++){
                if (books[i].GetPrice()<books[i+1].GetPrice()){
                    Book a;
                    books[i+1] =a;
                    books[i+1] = books[i];
                    books[i]= a;
                }
            }
            }
        }
        break;
        case 2:
        {
            for (int j{};j<size(books);j++){
            for (int i{};i<size(books)-1;i++){
                if (books[i].GetPrice()>books[i+1].GetPrice()){
                    Book a;
                    books[i+1] =a;
                    books[i+1] = books[i];
                    books[i]= a;
                }
            }
            }

        }
        break;
    }
    return 1;

}
int SortBook() {
    const int ITEMS_NUMBER=7;
    CorrectItem items[ITEMS_NUMBER]{ {"Сортировать по ID",_SortID}, {"Сортировать по тематике",_SortSabjectMatter}, {"Сортировать по автору",_SortGenre},{"Cортировать по количеству отзывов",_SortReviews},{"Сортировать по рейтингу",_SortOverallRating},{"Сортировать по цене",_SortPrice}, {"Выход в главное меню",_exit_}}; //пункты меню
    CorrectMenu menu("My console menu", items, ITEMS_NUMBER);
    while (menu.runCommand()) {};
    return 1;
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
    {"Delete a book", deleteBook}, {"sort book", SortBook}, {"searchbook", f6}, {"exit", f7} }; //пункты меню
    CMenu menu("My console menu", items, ITEMS_NUMBER);
    while (menu.runCommand()) {};
    return 0;
}
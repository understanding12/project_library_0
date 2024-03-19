#include "book.h"


Book::Book(int ID, string SubjectMatter, string Genre, string Name, double OverallRating, int price, vector <Review> Reviews, vector <Translate> Translations) : _ID(ID), _SubjectMatter(SubjectMatter), _Genre(Genre), _Name(Name), _OverallRating(OverallRating), _Price(price), _Reviews(Reviews), _Translations(Translations){
    Number++;
    this->_ID = Number;
}
Book::Book()
{
    Number++;
    this->_ID = Number;
}
        int Book::GetID() {
            return _ID;
        }
        string Book::GetSubjectMatter() {
            return _SubjectMatter;
        }
        string Book::GetGenre() {
            return _Genre;
        }
        string Book::GetName() {
            return _Name;
        }
        double Book::GetOverallRating() {
            return _OverallRating;
        }
        int Book::GetPrice() {
            return _Price;
        }
        vector<Review>& Book::GetReviews(){
            return _Reviews;
        }
        vector<Translate>& Book::GetTranslations() {
            return _Translations;
        }
        void Book::SetID(int id){
            _ID = id;
        }
        void Book::SetSubjectMatter() {
            string SubjectMatter{};
            cin >> SubjectMatter;
            _SubjectMatter = SubjectMatter;
        }
        void Book::SetGenre() {
            string Genre{};
            cin >> Genre;
            _Genre = Genre;
        }
        void Book::SetName() {
            string Name{};
            cin >> Name;
            _Name = Name;
        }
        void Book::SetOverallRating() {
            double OverallRating{};
            cin >> OverallRating;
            _OverallRating = OverallRating;
        }
        void Book::SetPrice() {
            int Price{};
            cin >> Price;
            _Price = Price;
        }
        void Book::SetReviews() {
            int countReviews{};
            cout << "Enter the number of reviews: " << endl;
            cin >> countReviews;
            for (int i{}; i < countReviews; i++) {
                Review* obj = new Review(0,"",0,"");
                obj->SetRate();
                obj->SetReview();
                _Reviews.push_back(*obj);
            }
        }
        void Book::SetTranslations() {
            int countTranslate{};
            cout << "Enter the number of translations: " << endl;
            cin >> countTranslate;
            for (int i{}; i < countTranslate; i++) {
                Translate* obj = new Translate(0,"");
                obj->SetTime();
                obj->SetTranslation();
                _Translations.push_back(*obj);
            }
        }
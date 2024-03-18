#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "characteristics/review/review.h"
#include "characteristics/translate/translate.h"
using namespace std;
class Book  {
    private:
        int _ID{};
        string _SubjectMatter{};
        string _Genre{};
        string _Name{};
        double _OverallRating{};
        int _Price{};
        vector <Review> _Reviews{}; 
        vector <Translate> _Translations{};
    public:
        Book(int ID, string SubjectMatter, string Genre, string Name, double OverallRating, int price, vector <Review> Reviews, vector <Translate> Translations);
        int GetID();
        string GetSubjectMatter();
        string GetGenre();
        string GetName();
        double GetOverallRating();
        int GetPrice();
        vector<Review>& GetReviews();
        vector<Translate>& GetTranslations();

        void SetID(int id);
        void SetSubjectMatter();
        void SetGenre();
        void SetName();
        void SetOverallRating();
        void SetPrice();
        void SetReviews();
        void SetTranslations();

        void printBooks();
};
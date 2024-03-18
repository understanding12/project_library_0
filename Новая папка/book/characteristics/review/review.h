#pragma once
#include "../translate/translate.h"
class Review : public Translate { //отзыв
    private:
        int _rate{}; //количество звездочек 0_0
        string _review{};
    public:
        Review(int time, string translation, int rate, string review);
        string GetReview();
        void SetReview();
        int GetRate();
        void SetRate();
};
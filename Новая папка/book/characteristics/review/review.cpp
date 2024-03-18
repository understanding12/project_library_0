#include "./review.h"
#include <iostream>

Review::Review(int time, string translation, int rate, string review) : Translate(time, translation), _rate(rate), _review(review){}

string Review::GetReview() {
    return _review;
}

void Review::SetReview() {
    string review{};
    cout << "Write the review: " << endl;
    cin >> review;
    _review = review;
}

int Review::GetRate() {
    return _rate;
}

void Review::SetRate() {
    int rate{};
    cout << "Rate from 1 to 10: " << endl;
    cin >> rate;
    _rate = rate;
}

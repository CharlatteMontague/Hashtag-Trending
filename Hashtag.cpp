#include "Hashtag.h"

Hashtag::Hashtag(string userWord){
    word = userWord;
}

Hashtag::Hashtag(string userWord, int userCount){
    word = userWord;
    Count = userCount;
}

string Hashtag::getWord() const{
    return word;
}

int Hashtag::getCount() const{
    return Count;
}

int Hashtag::getRank() const{
    return Rank;
}

void Hashtag::setRank(int userRank){
    Rank = userRank;
}

void Hashtag::IncrementCount(){
    Count = Count + 1;
    Hashtag(getWord(), Count);
}

// Overloaded < operator for Hashtag objects
bool Hashtag::operator<(const Hashtag& rhs) const{
    if(this->getCount() > rhs.getCount()){
        return true;
    }
    else if((this->getCount() == rhs.getCount()) && (this->getWord() < rhs.getWord())){
        return true;
    }
    else{
        return false;
    }
}


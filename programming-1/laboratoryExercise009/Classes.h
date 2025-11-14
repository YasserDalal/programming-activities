#ifndef _CLASSES // directives
#define _CLASSES

#include <string> // enables string

using namespace std; // declare std to use data types without the prefix 'std::'

// First class
class LeggedMammal{
  // public attributes
  public:
    int mLegs;
    string mFur;
    string mTail;

  // constructor
  LeggedMammal(int mLegs, string mFur, string mTail){
    this->mLegs = mLegs;
    this->mFur = mFur;
    this->mTail = mTail;
  };
};

// Second class
class Person{
  // public attributes
  public:
    string mName;
    string mAddress;
    string mGender;
    int mAge;
    string mOccupation;

  // constructor
  Person(string mName, string mAddress, string mGender, int mAge, string mOccupation){
    this->mName = mName;
    this->mAddress = mAddress;
    this->mGender = mGender;
    this->mAge = mAge;
    this->mOccupation = mOccupation;
  };
};

// Third class
class Polygon{
  // public attributes
  public:
    string mName;
    int mSides;
    string mColor;

  // constructor
  Polygon(string mName, int mSides, string mColor){
    this->mName = mName;
    this->mSides = mSides;
    this->mColor = mColor;
  };
};

#endif
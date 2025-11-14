#ifndef _CLASSES // directives
#define _CLASSES

#include <string> // enables string

// declare std to use data types without using the prefix 'std::'
using namespace std;

// Parent class
class LeggedMammal{
  // public attributes/methods
  public:
    int mLegs = 0;
    string mFur = "";
    string mTail = "";

  // default constructor meaning no arguments we rely on setters
  LeggedMammal(){}

  // getters (accessors)
  int getLegs(){ return mLegs; };
  string getFur(){ return mFur; };
  string getTail(){ return mTail; };

  // setters (mutators)
  void setLegs(int legs){ mLegs = legs; };
  void setFur(string fur){ mFur = fur; };
  void setTail(string tail){ mTail = tail; };
};

// Child class inherits from parent
class Dog : public LeggedMammal{
  // private attributes
  private:
    string mBreed = "";
    string mSize = "";
    string mIsRegistered = "";

  // public methods
  public:
    // default constructor meaning no arguments, we rely on setters
    Dog(){}

    // getters (accessors)
    string getBreed(){ return mBreed; };
    string getSize(){ return mSize; };
    string getIsRegistered(){ return mIsRegistered; };

    // setters (mutators)
    void setBreed(string breed){ mBreed = breed; };
    void setSize(string size){ mSize = size; };
    void setIsRegistered(bool isRegistered){
      // ternary operator (switches between Yes or No)
      mIsRegistered = isRegistered ? "Yes" : "No"; 
    };
};

// Parent class
class Person{
  // public attributes/methods
  public:
    string mName;
    string mAddress;
    string mGender;
    int mAge;
    string mOccupation;

  // default constructor meaning no arguments, we rely on setters
  Person(){}

  // getters (accessors)
  string getName(){ return mName; };
  string getAddress(){ return mAddress; };
  string getGender(){ return mGender; };
  int getAge(){ return mAge; };
  string getOccupation(){ return mOccupation; };

  // setters (mutators)
  void setName(string name){ mName = name; };
  void setAddress(string address){ mAddress = address; };
  void setGender(string gender){ mGender = gender; };
  void setAge(int age){ mAge = age; };
  void setOccupation(string occupation){ mOccupation = occupation; };
};

// Child class inherits from parent
class Student : public Person{
  // private attributes
  private:
    string mProgram = "";
    int mYearLevel = 0;
    string mUniversity = "";

  // public methods
  public:
    // default constructor meaning no arguments, we rely on setters
    Student(){};

    // getters (accessors)
    string getProgram(){ return mProgram; };
    int getYearLevel(){ return mYearLevel; };
    string getUniversity(){ return mUniversity; };

    // setters (mutators)
    void setProgram(string program){ mProgram = program; };
    void setYearLevel(int year){ mYearLevel = year; };
    void setUniversity(string university){ mUniversity = university; };
};

#endif
//
// Created by Marvish Chandra on 7/15/22.
//

// C++ Structures

struct {
    int urNum;
    char myC;
    string thisThing;
}; thisStructure;

thisStructure.urNum(90);
thisStructure.myC('E');
thisStructure.thisThing("Thing structure");

cout << thisStructure.urnNum << "\n";
cout << thisStructure.myC << "\n";
cout << thisStructure.thisThing << "\n";

// having two different variables

struct {
    int urNum;
    char myC;
    string thisThing;
}thisStructure,yourStructure;

///
thisStructure.urNum = 100;
thisStructure.myC = 'F';
thisStructure.thisThing = 'this is my structure';

//

yourStructure.urNum = 211;
yourStructure.myC = 'G';
yourStructure.thisThing = "What's your name?";

cout << thisStructure.urNum << " " << thisStructure.myC << " " << thisStructure.thisThing << "\n";
cout << yourStructure.urNum << " " << yourStructure.myC << " " << yourStructure.thisThing << "\n";

struct state {
    string ownership;
    string diversity;
    int established;
};

int main() {
    state myState1;
    myState1.ownership = "Mine";
    myState1.diversity = "Variety";
    myState1.established = 1800;
    // another state structure
    state myState2;
    myState2.ownership = "Yours";
    myState2.diversity = "none";
    myState2.established = 1700;

    cout << state
    myState1.ownership << " " << state
    myState1.diversity << " " << myState1.established << "\n";
    cout << state
    myState2.ownership < " " << state
    myState2.diversity << " " << myState2.established << "\n";

    return 0;
};

// References

string character = "Popeye";
string &cartoon = "Meathead";

// finding memory
cout << &cartoon; // outputs the address

// Pointers

string character = "Popeye";
string &cartoon = "Meathead";
string *ptr = &character;

<< cout ptr << "\n";

// Another Pointer Example
string drink = "Lychee";
string &taste = "Sweet";
string* ptr = &drink;

string character = "Popeye";
string* ptr = &character;

// Dereference outputs the value of &character with the pointer(Popeye)
cout << *ptr << "\n";

// changing pointer val
*ptr = "Jerry";

cout << *ptr << "\n";

// output new value
cout << character << "\n";


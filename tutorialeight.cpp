//
// Created by Marvish Chandra on 7/15/22.

// Encapsulation
// Access private members

#include <iostream>
using namespace std;

class DayClass{
private:
    // Private attribute
    int number;

public:
    void setDay(int d) {
        number = d;
    }
    // Getter

    int setDay() {
        return number;
    }
};

int main() {
    temperatures myObj;
    temperatures.setDay(100);
    cout << myObj.setDay();
    return 0;
};
// Access Private members

class Rank {
private:
    int value;
};
public:
    void setValue(int v) {
        value = v;
    }
    // Getter
    int getValue() {
        return value; // value attribute goes from public to private through the getter getValue
    }
};
int main{
    Rank myObj;
    myObj.setValue(5);
    cout << myObj.getValue();
    return 0;
};

// Inheritance

class Fiction {
public:
    string ogre = "Shrek";
    void yell() {
        cout << "Get out of my swamp! \n";
    }
    // Derived class
    class Duloc: public Fiction {
    public:
        string friend = "Donkey";
    };
    int main() {
        Duloc myFiction;
        myFiction.yell();
        cout << myFiction.ogre + " " + myFiction.friend;
        return 0;
    }
};

// Multilevel inheritance
class myClass{
public:
    void: myFunction(){
        cout << "Print his name here: "
    }
    class my Grandpa{
    public: myClass
    };
class my Grandson: public: myGrandpa
    };
};
int main(){
    myGrandson myObj;
    myObj.myFunction(); // Function call for my given object (Obj1)
    return 0;
}

// Multiple Inheritance

class myClass{
public:
    void: myFunction(){
        cout << "Print his name here"
    }
    class myChild{
    public:
        void: secondFunction(){}
        cout << "Print their name here"
    };
    class myGrandson: public myClass, public myChild {}; // bringing the two earlier defined classes
};
int main(){
    myGrandson myObj;
    myObj.myFunction();
    myObj.secondFunction();
    return 0;
}

// Access specifiers
class Rank{
protected:
    int status
};
class Guild: public Rank{
public:
    void setStatus(int s) {
        status = s;}
    int getStatus(){
        return status;
    }
};
int main(){
    Guild myObj;
    myObj.setStatus(50);
    cout << "Your status rank is at " + myObj.setStatus() << "\n"
};

// Polymorphism

class Language{
public:
    void iTalk() {
        cout << "The language: "
    };
class Spain : public Language {
    public:
        void iTalk() {
            cout << "Over here, I speak Spanish (Latin American version).\n"
        };
        class Paris: public Language (
    public:
        void iTalk(){
            cout << "Over here, I speak French.\n"
        };
        class Poland: public Language {
        public:
            void iTalk(){
                cout << "Over here, I speak Polish.\n"
            };
    };
};
int main{
    Language myLanguage;
    Spain mySpain;
    Paris myParis;
    Poland myPoland;

    myLanguage.iTalk();
    mySpain.iTalk();
    myPoland.iTalk();
    return 0;
};

// Exceptions

// try, throw, and catch

try {
    // run code block
    throw exception; //exception when problem arises
}
catch () {
    // run code block to handle errors
}}

// Is it hot enough for me to run the AC?
try {
    int temp = 89;
    if (temp > 85) {
        cout << "You're right, it's really hot. I'll turn it on now."
    }
    else {
        cout << "It's not hot enough. Just turn on the fan in your room."
        throw(temp);
    }
}
catch (int myTemp) { // if throw type not known use (...) after catch
    cout << "I don't know what the temperature is. Can you check the thermometer please?\n"
    cout << "Temperature is: " << myTemp
}

// Adding numbers
int x,y,z;
int total;
cout << "Type the amount of change you want to donate to the child foundation."
cin >> x;
cout << "Type the amount of change you want to give to Ukraine."
cin >> z;
cout << "Type the amount of government bonds to purchase."
total = x + y + z;
cout << "Our town is asking for donations such as: " << total;



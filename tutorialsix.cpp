//
// Created by Marvish Chandra on 7/15/22.
//

// OOP: Object Oriented Program

// Classes
class Sweets{
public:
    int myPerson;
    string baString;
};

class Veggies {
public:
    int myCarrots;
    string urBroccoli;
};
int main() {
    Veggies myObj; // create an onject of Veggies


    myObj.myCarrots(10);
    myObj.urBroccoli("raw");

// Print attributes

    cout << myObj.myCarrots << "\n";
    cout << myObj.urBroccoli << "\n";
    return 0;
}

// Multiple objects

class Veggies {
public:
    string green;
    string yellow;
    int expirationMonth;
};

int main() {
    Veggies veggieObj1;
    veggieObj1.power = "Kale";
    veggieObj1.snack = "Bell Pepper";
    veggieObj.expmo = 7;

    Veggies veggieObj2;
    veggieObj2.power = "Celery";
    veggieObj2.snack = "carrots";
    veggieObj2.expmo = 6;

    cout << veggieObj1.power < " " << veggieObj1.snack << " " << veggieObj1.expmo << "\n";
    cout << veggieObj2.power < " " << veggieObj2.snack << " " << veggieObj2.snack << "\n";
    return 0;
}
// Multiple Objects ex 2
class EaterSouls {
public:
    string species;
    string weapon;
    int gameLevel;
};
int main() {
    EaterSouls EaterSoulsObj1;
    EaterSoulsObj1.species = "Elf";
    EaterSoulsObj1.weapon = "Lance";
    EaterSoulsObj1.gameLevel = 50;

    EaterSouls EaterSoulsObj2;
    EaterSoulsObj2.species = "human";
    EaterSoulsObj2.weapon = "Spear";
    EaterSoulsObj2.gameLevel = 70;

    cout << EaterSoulsObj1.species << "" << EaterSoulsObj1.weapon << "" << EaterSoulsObj1.gameLevel << "\n";
    cout << EaterSoulsObj2.species << "" << EaterSoulsObj2.weapon << "" << EaterSoulsObj2.gameLevel << "\n";
    return 0;
}




// Class Methods

class newClass {
public:
    void newMethod() {
        cout << "Welcome!";
    }
    void newestMethod(){
        var myCarrot = "Plump";
        cout << myCarrot;
    }
};

int main() {
    newClass myObj;
    myObj.newMethod();
    myObj.newestMethod();
    return 0;
}

// Defining a function outside the class definition
class MyDoor {
public:
    void firstMethod();
};

void myDoor::firstMethod() {
    cout << "I just called the first method from my defined class MyDoor"
}

int Main() {
    MyDoor myObj;
    myObj.firstMethod)();
    return 0;
}
// adding parameters
class MyDoor {
public:
    void firstMethod(barn door, dog door);
    return barn door + dog door;
};
int Main() {
    MyDoor myObj;
    myObj.firstMethod(barn door, dog door);
    return 0;
}
void myDoor::firstMethod(barn door, dog door) {
    cont << "I just closed these : " << myObj.firstMethod("the palace","living hell");
};

firstMethod();





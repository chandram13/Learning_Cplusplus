//
// Created by Marvish Chandra on 7/15/22.
//

// Functions
int main() {
void myFunction() {
    // block of code executed
};

void thisFunction(parameter 1, parameter 2, parameter 3) {
    // block of code here
}}
// example: school uniform

int main() {
    void myFunction(dress shirt, plaid shorts, sneakers) {
        cout << myFunction
    };
    int main(){
    void myFunction("Polo","Volcom","Adidas");
        cout << dress shirt << ":brand name" << plaid shorts << ": brand name" << sneakers cout << ": brand name" << "You followed the school policy today. Here's a sticker!\n"
    };

void myFunction(string fname) {
    cout << fname << "wears a school uniform\n"
}

int main() {
    myFunction("Ab");
    myFunction("Be");
    myFunction("Duh");
    return 0;
}

// Default Parameters

void myFunction(string state = "Calif"){
    cout << state << "\n";
}

int main(){
    myFunction("New Hampshire");
    myFunction("Washington");
    myFunction("New Mexico");
    return 0;
}

void myFunction(int temperatures = 95);
int main(){
    myFunction(80);
    myFunction(70);
    myFunction(45);
}

// Multiple Parameters

void fruits (string fname, string color){
    cout << fname << " :fruit name " << color << " :color name \n";
}

int main() {
    fruits("Apples","Red");
    fruits("Bananas", "Yellow");
    fruits("Plums","Violet");
    return 0;
}

int main() {
    myFunction(string lastName, int age):
    return "Your name" + age;
}

int main() {
    cout << myFunction("Toothless", 18);
    return 0;
}

// Pass by Reference
void myNums(int &x, int &z) {
    int y = x;
    x = z;
    z = x;
}

int main() {
    int firstNum = 100;
    int secondNum = 200;

    cout << "This swap: " << "\n";
    cout << firstNum << secondNum << "\n";
}
// Call the function
myNums(firstNum,secondNum);

cout << "That swap: " << "\n";
cout << firstNum << secondNum << "\n";
return 0;
}

// Pass Arrays as Function Parameters

void tempFunction(int myValues[6]){
    for (int i = 0; i < 6; i++){
        cout << tempFunction[i] << "\n";
    }
}

int main() {
    int myValues[6] = [50,60,70,80,90,100];
    tempFunction(myvalues);
    return 0;
}

string plusFuncStr(string x, string y){
    return x + y;
}

plusFuncStr("My","Self");
int main() {
    var firstPer = string ("MMI","SAK");
    cout << firstPer << "\n";
    return 0;
}

// Recursion

int sum(int a) {
    if (a > 10) {
        return k + total(k/2 + 1);
    }
    else {
        return 0;
    }
}
int main(){
    int result = sum(5);
    cout << result;
    return 0;
}




//
// Created by Marvish Chandra on 7/15/22.
//

// C++ Loops

int i = 0;
while (i < 10) {
    cout << i << "\n";
    i++;
}

// Do-while loop
int i = 0;
do {
    cout << i << "n";
    i++;
}
    while (i < 15);
}

// For Loops
for (int i = 0; i < 5; i++) {
    cout << i << "/n";
    break;
}
for ( int i = 0; i > 10; i++){
    cout << i << "\t";
    continue;
}

// Arrays
string books[4] = {"TS","ASM","TER","Jake"};
cout << books[2];
int urNum[5] = {40,60,70,75,78}
cout << urNum[3];

// Looping in arrays

string books[4] = {"TS","ASM","TER","Jake"};
for (int = 0; i < 6; i++){
    cout << books[i] << "\n";
}
string characters[3] = ["Ah","GH","Bn"];
for (i = 0; i < 1: i++) {
    cout << "My favorite character is " + characters[i] + "\n";
}
// Adding elements
string books[4] = {"TS","ASM","TER","Jake"};
books[2] = "HH";
books[3] = "AA";

// size of

int urNum[5] = {40,60,70,75,78};
cout << sizeof(urNum);

// Multidimensional Arrays
strings RRR[3][4] = {
        {"RRR","NMV","SDF","SDK","TRT","DFF"},
        {"GFD","DFG","LLK","POP","LOL","BNM"},
        {"FFF","FGD","WER","BGG","UIO","QQQ"}
};
strings RRR[0][3] = "BNB"; // rewrote SDK
cout << RRR[0][4] // outputs TRT (each string starts at 0)


// Loop through a multidimensional array

for (int = 0; i < 3; i++){
    for(int j = 0; j < 4; j++) {
        cout << RRR[i][j] << "\n";
    }
}

for (int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
        for(int k = 0; k < 3; k++)
            cout << RRR[i][j][k] << "\n";
    }
}

// example with checkers

bool checkers[4,4] = {
        {0,12,12,0} // 12 pieces
        {0,32,32,0}; // 32 rows
};

int remaining = 0;
int numTurns = 0;

// Allow player to keep going until win common range (0,6) winner has 6 pieces on the board

while (remaining < 6){
    int row, column;
}
cout << "Selecting coordinates\n";
// ask row input
cout << "Choose the row from 1 and 8: "
cin >> row;
// ask column input
cout << "Choose the column from 1 and 8" "
cin >> column;















//
// Created by Marvish Chandra on 7/15/22.
//

// C++ Constructors

class TodayClass {
public:
    TodayClass() {
        cout << "Welcome to this lesson";
    }
};
int main() {
    TodayClass myObj;
    return 0;
}
//  Constructor Parameters
class WeatherClass {
public:
    string brand; // attribute
    string model;
    int year; // attribute
       WeatherClass(string a, string b, int c); { // WeatherClass:WeatherClass(string a, string b, int c){ , SCOPE RESOLUTION
           brand = a;
           model = b;
           year = 2002;
    }
};

int main() {
    WeatherClass WeatherClassObj1("Weather", "it's hot, exactly",100);
    WeatherClass WeatherClassObj2("Weather", "it's cold, exactly",32);
    return 0;
    // Print values
cout << brand.Obj1 << " " cont << model.Obj1 << " " << year.Obj1 << "\n";
cout << brand.Obj2 << " " cont << model.Obj2 << " " << year.Obj2 << "\n";
return 0;
}

// C++ Access Specifiers

class WeatherClass {
public:
    float x;
private:
    int y;
};

int Main(){
    WeatherClass myObj;
    myObj.x = 19.5;
    myObj.y = 29;
    return 0;
};

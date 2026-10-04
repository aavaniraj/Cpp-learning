#include<iostream>
using namespace std;

// class name declared
class Student {
    public:
        string name, age, place;

        // function name declared
        void intro ()
        {
            cout << "Hi, I am " << name << ", " << age << " years old " << "and I'm from " << place << endl;
        }
};


int main() {

    Student s1, s2;

    s1.name = "Aavani Raj";
    s1.age = "18";
    s1.place = "Panoor";

    s2.name = "Avanthika";
    s2.age = "18";
    s2.place = "Panoor";

    s1.intro();
    s2.intro();

    return 0;
}
// Function Overloading
#include <iostream>  //

using namespace std;

class Sample {
public:
    void Add(int x, int y) {
        cout << "\nAdd = " << x + y;
    }

    void Add(int x, int y, int z) {
        cout << "\nAdd = " << x + y + z;
    }

    void Add(double x) {  // Overloaded to handle double
        cout << "\nAdd = " << x;
    }
};

int main() {
    Sample S;
    S.Add(10.20);        // Now matches: Add(double)
    S.Add(10, 20);       // Matches: Add(int, int)
    S.Add(10, 20, 30);   // Matches: Add(int, int, int)
    return 0;
}

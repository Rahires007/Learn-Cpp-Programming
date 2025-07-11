// Hierarchical inheritance program
#include <iostream>
using namespace std;

class GrandFather {
public:
    void set() {
        cout << "\nI have 20 ekar land and 2 bikes....";
    }
};

class Father : public GrandFather {
public:
    void get() {
        cout << "\nI have 10 ekar land and 1 bike....";
    }
};

class Uncle : public GrandFather {
public:
    void waitt() {  // Renamed from 'wait' to 'waitt' to avoid conflict with standard functions
        cout << "\nI have 10 ekar land and 1 bike.....";
    }
};

int main() {
    Uncle U;
    Father F;

    U.set();      // Calling base class function using Uncle object
    U.waitt();    // Calling Uncle's own function

    F.set();      // Calling base class function using Father object
    F.get();      // Calling Father's own function

    return 0;
}

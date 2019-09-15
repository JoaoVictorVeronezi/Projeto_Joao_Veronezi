#include <iostream>

using namespace std;

class A {
    public:
        void MA1() {
            cout << "MA1" << endl;
        }
        void MA2() {
            cout << "MA2" << endl;
        }
        void MA3() {
            cout << "Alteracao a classe A partir do clone" << endl;
        }
    private:
        int A1;
        float A2;
};

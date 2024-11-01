#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Fraction {
private:
    int numerator, denominator;

public:
    Fraction(int num, int denom) : numerator(num), denominator(denom ? denom : 1) {}
    Fraction() : numerator(rand() % 100 + 1), denominator(rand() % 99 + 1) {}

    void display() const { cout << numerator << "/" << denominator << endl; }
};

int main() {
    srand(static_cast<unsigned>(time(0)));

    Fraction frac1(3, 4);
    Fraction frac2;

    frac1.display();
    frac2.display();

    return 0;
}

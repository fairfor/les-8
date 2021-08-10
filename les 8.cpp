#include <iostream>
#include <vector>
/*
template <typename T>
void div(T& a, T& b) {
    try {
        T& c = a / b;
        throw "DivisionByZero";
    }
    catch (const char error) {
        std::cout << "Erorr! " << error << "\n";
    }
    catch (...) {
        std::cout << "\nc = " << c;
    }
}

// =========================================

class Ex {
    int32_t x;
public:
    Ex(int32_t x) 
        : x(x) {}
};

class Bar {
public:
    int32_t y;
    int32_t c;
    double s;
    Bar()
        : y(0) {}

    void set(int32_t a) {
        try {
            if (y + a > 100)
                throw c;
            else
                throw s;
        } catch (int32_t c) {
            Ex e{a*y};
        } catch (double s) {
            y = a;
        }
    }
};

void task2() {
    Bar b;
    int n = 1;
    try {
        while (n != 0) {
            std::cout << "\nEnter number: ";
            std::cin >> n;
            std::cout << "\nif you want to end the program then enter 0";
            b.set(n);
        }
    }
    catch (const char error) {
        std::cout << "\nError!\n";
    }
}
*/
// =========================================

class Robot {
    std::vector<char> x[10];
    std::vector<char> y[10];
    char robot = 'R';

public:
    Robot() = default;
    void init() {

    }
    void print() {
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 9; j++) {
                std::cout << " * ";
            }
            std::cout << " * ";
            std::cout << '\n';
        }
    }
};

// =========================================

int main()
{
//    div(124, 98);
//    task2();
    Robot r;
    r.print();
}

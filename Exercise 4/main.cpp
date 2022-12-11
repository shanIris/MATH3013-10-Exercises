//Exercise 4

#include <iostream>
#include <vector>

using namespace std;

class Polynomial
{

public:
    int degree{}; //Initialize
    vector<double> coefficient{};
    Polynomial() {};
    Polynomial(std::initializer_list<double> j) {
        coefficient.assign(j.begin(), j.end());
        degree = j.size() - 1;
    }
    Polynomial(int deg, vector<double> coef) : degree(deg), coefficient(coef) {}
    ~Polynomial() {};
    Polynomial& operator=(std::initializer_list<double> j) {
        coefficient.assign(j.begin(), j.end());
        return *this;
    }

    friend ostream& operator << (ostream& out, const Polynomial& express)
    {
        for (auto i : express.coefficient) {
            out << i << " ";
        }
        return out;
    }
};

int main()
{
    Polynomial p1{ 2,12,45,78 };
    cout <<"Degree of the Polynomial: "<<p1.degree<<"\n"<<"Coefficient of the Polynomial: " << p1<< endl;
    return 0;
}

#include <iostream>
using namespace std;

class Complex
{
private:
    double real, imag;

public:
    Complex(double r = 0, double i = 0)
    {
        real = r;
        imag = i;
    }

    Complex operator+(Complex const &obj)
    {
        Complex res;
        res.real = real + obj.real;
        res.imag = imag + obj.imag;
        return res;
    }

    Complex operator-(Complex const &obj)
    {
        Complex res;
        res.real = real - obj.real;
        res.imag = imag - obj.imag;
        return res;
    }

    Complex operator*(Complex const &obj)
    {
        Complex res;
        res.real = (real * obj.real) - (imag * obj.imag);
        res.imag = (real * obj.imag) + (imag * obj.real);
        return res;
    }

    friend ostream& operator<<(ostream& os, const Complex& num) {
        os << num.real << " " << num.imag;
        return os;
    }
};

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        char op;
        double a, b, c, d;
        cin >> op >> a >> b >> c >> d;

        Complex c1(a, b), c2(c, d), res;

        switch (op)
        {
        case '+':
            res = c1 + c2;
            break;
        case '-':
            res = c1 - c2;
            break;
        case '*':
            res = c1 * c2;
            break;
        }

        cout << res << endl;
    }

    return 0;
}
#include <iostream>
using namespace std;

class Figura
{
protected:
    double Pole;

public:
    Figura() { Pole = 0; }

    Figura(double a) { Pole = a; }

    // void setPole(double a) { Pole = a; }

    double getPole() { return Pole; }

    virtual void id() { cout << "Figura, pole:" << Pole << endl; }
};

class Kolo : public Figura
{
public:
    Kolo(double D) : Figura{0.25 * 3.14 * D * D} {}
    void id() override { cout << "Kolo, pole: " << Pole << endl; }
};

class Kwadrat : public Figura
{
public:
    Kwadrat(double A) : Figura{A * A} {}
    void id() override { cout << "Kwadrat, pole: " << Pole << endl; }
};

void id(const Figura& other)
{
    return id(other);
}
int main()
{
    Kwadrat A{1.0};
    A.id();

    Kolo B{2.0};
    B.id();

    id(B);

    B.id();

}

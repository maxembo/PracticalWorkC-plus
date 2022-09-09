#include <iostream>

using namespace std;

class Vector
{
private:
    double x;
    double y;
    double z;
public:
    Vector() : x(0), y(0), z(0)
    {}
    Vector(double _x, double _y, double _z) : x(_x), y(_y), z(_z)
    {}
    void Show()
    {
        cout << "Вывод вектора: " << x << " " << y << " " << z << "\n";
    }
    void Modulus(double x, double y, double z)
    {
        double result = sqrt(x * x + y * y + z * z);
        cout << "\nМодуль вектора: " << result;
    }
};

int main()
{
    setlocale(LC_ALL, "Rus");
    Vector vector(5, 5, 5);
    vector.Show();
    vector.Modulus(6, 6, 3);

}


// This program is to demomstrate static polymorphism using template class
// 
// Running this program shows the following
// 
// 3 comes before 5.
// 6 comes before 8.
// 0.1 comes before 18.
// Haw comes before Hee.
//


#include <iostream>
using namespace std;

/*
*   This class holds two, same type values, thus a Pair!
*/
template <class T>
class MyPair{
private:
    T dat1;     // first data
    T dat2;     // second data
public:
    MyPair(T one, T two) {
        dat1 = one;
        dat2 = two;
    }
    void sort() {
        if (dat1 <= dat2)
            cout << dat1 << " comes before " << dat2 << "." << endl;
        else
            cout << dat2 << " comes before " << dat1 << "." << endl;

    }
};

int main()
{
    MyPair<int> pair1(5, 3);
    MyPair<float>pair2(8.0, 6.0);
    MyPair<double>pair3(18.0, 0.1);
    MyPair<string>pair4("Hee", "Haw");

    pair1.sort();
    pair2.sort();
    pair3.sort();
    pair4.sort();
}

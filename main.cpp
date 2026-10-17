#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()

{
    cout << "Wypisz a b c : " << endl;
    double a;
    double b;
    double c;

    string x  = "x";

    cin >> a >> b >> c;
    if(a == 0){
        cout << "Nie jest to funkcja kwadratowa!!" << endl;
    }else{
        if (a > 0) {
            cout << "Ramiona skierowane w gore!"<< endl;
        }else {
            cout << "Ramiona skierwane w dol!"<<endl;
        }
        cout << "Punkt przeciecia z Oy: (0," << c << ")"<<endl;
        double delta = b * b - 4 * a * c;
        if(delta < 0 ){
            cout << "Ta delta nie ma miejsc zerowych!!" << endl;
            return 0;
        }else if(delta == 0){
            double x0 = -b / (2*a);
            cout << "Ta delta ma x0 rowny: " << x0 << endl;
            return 0;

        }
        double xw = -b / (2 * a);
        double yw = -delta / (4 * a);
        double pierDelta = sqrt(delta);
        double x1 = (-b - pierDelta) / (2 * a);
        double x2 = (-b + pierDelta) / (2 * a);

        cout << "delta: " <<  delta << " || Pierwiastek z delty: " << pierDelta << " ||  xw: " <<  xw << " ||  yw: " <<
        yw << " ||  x1: "<< x1 << " ||  x2: " << x2 << " || postac kanoniczna: f(x) = "<< a << "(x - (" << xw << "))^2 + (" << yw << ")" << endl;
    }
    return 0;

}





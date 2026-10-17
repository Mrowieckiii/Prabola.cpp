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
    }else {
        double delta = b * b - 4 * a * c;
        //double odwrXw = -a * x *a * x - b * x - c;
        // double odwrYw = a * x * a * x - b * x + c;
        if(delta < 0 ){
            cout << "Ta delta nie ma miejsc zerowych!!" << endl;
            return 0;
        }else if(delta == 0){
            double x0 = -b / 2*a;
            cout << "Ta delta ma x0 rowny: " << x0 << endl;
            return 0;

        }
        double xw = -b / (2 * a);
        double yw = -delta / (4 * a);
        double pierDelta = sqrt(delta);
        double x1 = (-b - pierDelta) / (2 * a);
        double x2 = (-b + pierDelta) / (2 * a);
        cout << "delta: " <<  delta << " || Pierwiastek z delty: " << pierDelta << " ||  xw: " <<  xw << " ||  yw: " <<
        yw << " ||  x1: "<< x1 << " ||  x2: " << x2 << endl;
    }
    return 0;

}





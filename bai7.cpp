/*
Bài 7: Viết chương trình nhập tọa độ 3 đỉnh A, B, C của 1 tam giác trên mặt phẳng Descartes.
Tính chu vi và diện tích của tam giác đó.
- Công thức hê rông: s = sqrt(p * (p - a) * (p - b) * (p - c))
- nửa chủ vi: p= (a + b + c) / 2
*/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	double xA, yA, xB, yB, xC, yC;

	cout << "hoanh do xA = ";
	cin >> xA;

	cout << "tung do yA = ";
	cin >> yA;

	cout << "=> A(" << xA << "," << yA << ")" << endl;

	cout << "hoanh do xB = ";
	cin >> xB;

	cout << "tung do yB = ";
	cin >> yB;

	cout << "=> B(" << xB << "," << yB << ")" << endl;

	cout << "hoanh do xC = ";
	cin >> xC;

	cout << "tung do yC = ";
	cin >> yC;

	cout << "=> C(" << xC << "," << yC << ")" << endl;

	double AB = sqrt(pow(xB - xA, 2) + pow(yB - yA, 2));
	double BC = sqrt(pow(xC - xB, 2) + pow(yC - yB, 2));
	double AC = sqrt(pow(xC - xA, 2) + pow(yC - yA, 2));

	double c = AB + BC + AC;
	double s = fabs((xB - xA) * (yC - yA) - (xC - xA) * (yB - yA)) * 0.5;

	cout << fixed << setprecision(2) << endl;

	cout << "AB = " << AB << endl;
	cout << "BC = " << BC << endl;
	cout << "AC = " << AC << endl;
	cout << "Chu vi tam giac la: " << c << endl;
	cout << "Dien tich tam giac la: "  << s << endl;

	return 0 ;

}

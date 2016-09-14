#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;
#define PI 3.14159265

int main() {
	float a, b, s, m, n, dx, dy;
	
	while(true){
		cin >> a >> b >> s >> m >> n;
		if(a == 0 && b == 0 && s == 0 && m == 0 && n == 0){
			return 1;
		}
		dy = n*b;
		dx= m*a;
		
		cout << setprecision(2) << fixed;
		cout << atan(dy/dx) * 180/PI << " " << (sqrt(dx*dx + dy*dy))/s << endl;
	}
	return 0;
}

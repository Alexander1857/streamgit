
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Circle.h"

using namespace std;

    
int main() {
	float sum = 0;
	srand(time(0));
	Circle C[3];
	Circle *B = new Circle();
	for (int i = 0; i < 3; i++) {
		
		C[i].set_r(rand() % 10 + 1);
	
	
		//float D1 = C2.diameter();
		float A1 =  C[i].area();
	//Circle C2(5);

		//float L1= C2.lenght();
		sum = sum + A1;
		//cout << D1 << endl;
		//cout << A1 << endl;
		//cout << L1 << endl;
		
	}
	
	cout << sum << endl;
	system("pause");
}


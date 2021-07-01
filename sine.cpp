//Change line 8 so only character 32 to 126 print
#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int x;
	float r;
	float y;
	
	for(x = 0; x <= 360; x = x + 15){
		r= float(x * (3.1415926/180));
		y=sin(float(r));
		cout<< x << " | " << y << "\n";
	}
	return 0;
}

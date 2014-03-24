#include <fstream>
using namespace std;

int main(){

	unsigned int pound, shilling, penny, sum;

	ifstream in("nauda.in");
	in >> pound >> shilling >> penny;
	in.close();

	sum = pound * 20 * 12 + shilling * 12 + penny;

	ofstream out("nauda.out");
	out << sum / 100 << " " << sum % 100;
	out.close();

	return 0;

}

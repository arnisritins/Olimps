#include <fstream>
using namespace std;

bool has_digit(int number, int digit){

	while(number > 0){
		if(number % 10 == digit)
			return true;
		number /= 10;
	}

	return false;

}

int main(){

	int x, y, add;

	ifstream in("cik.in");
	in >> x >> y;
	in.close();

	add = 1;

	while( ! has_digit(x+add, y))
		add++;

	ofstream out("cik.out");
	out << add;
	out.close();

	return 0;

}

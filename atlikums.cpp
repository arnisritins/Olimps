#include <fstream>
#include <string>
#include <sstream>
using namespace std;

template <typename T>
int to_int(T str){
	int n;
	stringstream ss;
	ss << str;
	ss >> n;
	return n;
}

int concat_int(int a, int b){
	int mul = 10;
	while(b >= mul)
		mul *= 10;
	return a * mul + b;
}

int main(){

	string number;
	int division, divider, dividend, difference;
	unsigned int i;

	ifstream in("atlikums.in");
	in >> number >> divider;
	in.close();

	dividend = to_int(number[0]);

	for(i = 0; i < number.size(); i++){

		division = dividend / divider;
		difference = dividend - (divider * division);

		dividend = (i == number.size()-1)
			? difference
			: concat_int(difference, to_int(number[i+1]));

	}

	ofstream out("atlikums.out");
	out << dividend;
	out.close();

	return 0;

}

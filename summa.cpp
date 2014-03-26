#include <fstream>
#include <vector>
using namespace std;

int main(){

	int multiplier, n, j, i = 0, d = 1, sum = 0;
	vector<int> digits;

	ifstream in("summa.in");
	in >> n;
	in.close();

	while(n / d > 9)
		d *= 10;

	while(n){

		digits.push_back(n % 10);
		sum += n;

		if(i != 0){
			multiplier = d;
			for(j = i-1; j >= 0; j--){
				sum += digits[j] * multiplier;
				multiplier /= 10;
			}
		}

		n /= 10;
		i++;

	}

	ofstream out("summa.out");
	out << sum;
	out.close();

	return 0;

}

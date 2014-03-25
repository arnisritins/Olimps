#include <fstream>
#include <string>
using namespace std;

int main(){

	int n, i, sum = 0;
	int multipliers[7] = {2,7,6,5,4,3,2};

	string letters = "JABCDEFGHIZ";
	ifstream in("perskods.dat");
	in >> n;
	in.close();

	i = 6;

	while(n){
		sum += multipliers[i] * (n % 10);
		n /= 10;
		i--;
	}

	ofstream out("perskods.rez");
	out << letters[sum % 11];
	out.close();

	return 0;

}

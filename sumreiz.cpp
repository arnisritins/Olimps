#include <fstream>
using namespace std;

int main(){

	int i, n, limit, number, digit_sum, digit_product;
	ifstream in("sumreiz.in");
	in >> n;
	in.close();

	limit = n;

	for(i = 1; i <= limit; i++){
	
		number = n;
		digit_sum = 0;
		digit_product = 1;

		while(n != 0){
			digit_sum += n % 10;
			digit_product *= n % 10;
			n /= 10;
		}

		n = number + digit_sum + digit_product;
	
	}

	ofstream out("sumreiz.out");
	out << n;
	out.close();

	return 0;

}

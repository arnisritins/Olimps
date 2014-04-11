#include <fstream>
using namespace std;

int main(){

	int n, i, count = 0;

	ifstream in("fanulles.in");
	in >> n;
	in.close();

	for(i = 5; n/i >= 1; i *= 5)
		count += n/i;

	ofstream out("fanulles.out");
	out << count;
	out.close();

	return 0;

}

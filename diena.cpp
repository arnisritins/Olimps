#include <fstream>
using namespace std;

int main(){

	int n, sum, day, month;
	int month_days[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

	ifstream in("diena.in");
	in >> n;
	in.close();

	sum = 0;
	month = 0;
	
	while(sum < n)
		sum += month_days[month++];

	day = month_days[month-1] - (sum-n);

	ofstream out("diena.out");
	out << day << " " << month;
	out.close();

	return 0;

}

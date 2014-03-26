#include <fstream>
#include <vector>
using namespace std;

int main(){

	unsigned int i;
	int n, number, average, sum = 0, count = 0;
	vector<int> numbers;

	ifstream in("lielvid.dat");
	in >> n;

	while(in >> number){
		numbers.push_back(number);
		sum += number;
	}

	in.close();

	average = sum / n;
	
	for(i = 0; i < numbers.size(); i++)
		if(numbers[i] > average)
			count++;

	ofstream out("lielvid.rez");
	out << count;
	out.close();

	return 0;

}

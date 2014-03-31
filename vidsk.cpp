#include <fstream>
#include <vector>
using namespace std;

int main(){

	int n, number, h, i, j, temp;
	vector<int>numbers;

	ifstream in("vidsk.dat");
	in >> n;

	while(in >> number)
		numbers.push_back(number);

	in.close();

	h = n;
	while((h = h/2)){
		for(i = h; i < n; i++){
			temp = numbers[i];

			for(j = i; j >= h && numbers[j-h] > temp; j -= h)
				numbers[j] = numbers[j-h];

			numbers[j] = temp;
		}
	}

	ofstream out("vidsk.rez");
	out << numbers[n/2];
	out.close();

	return 0;

}

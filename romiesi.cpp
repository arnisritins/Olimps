#include <fstream>
#include <string>
using namespace std;

int to_arabic(char r){

	int a;

	switch(r){
		case 'I': a = 1; break;
		case 'V': a = 5; break;
		case 'X': a = 10; break;
		case 'L': a = 50; break;
		case 'C': a = 100; break;
		case 'D': a = 500; break;
		case 'M': a = 1000; break;
	}
	
	return a;
	
}

int main(){

	int arabic, n;
	unsigned int i, size;
	string roman;

	ifstream in("romiesi.dat");
	in >> roman;
	in.close();

	arabic = 0;
	size = roman.size();

	for(i = 0; i < size; i++){

		n = to_arabic(roman[i]);

		if(i < size && n < to_arabic(roman[i+1]))
			n *= -1;

		arabic += n;

	}

	ofstream out("romiesi.rez");
	out << arabic;
	out.close();

	return 0;

}

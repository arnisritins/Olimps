#include <fstream>
#include <string>
using namespace std;

int main(){

	unsigned int i, size;
	string link, date, dates = "";

	ifstream in("lacisi.in");
	in >> size;

	for(i = 1; i <= size; i++){

		in >> link;
		date = link.substr(37, 4);

		if(dates.find(date) == string::npos)
			dates += date+"*";

	}
 
	in.close();

	ofstream out("lacisi.out");
	out << dates.size() / 5;
	out.close();

	return 0;

}

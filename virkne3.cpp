#include <fstream>
#include <string>
using namespace std;

int main(){

	unsigned int i;
	char last_char;
	string str;

	ifstream in("virkne3.in");
	in >> str;
	in.close();

	ofstream out("virkne3.out");

	for(i = 0; i < str.length(); i++){
		if(last_char != str[i]){
			out << str[i];
			last_char = str[i];
		}
	}

	out.close();
	return 0;

}

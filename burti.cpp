#include <fstream>
#include <string>
using namespace std;

int main(){

	int position;
	unsigned int i;
	string word, letters, message = "VAR";

	ifstream in("burti.in");
	in >> letters >> word;
	in.close();

	for(i = 0; i < word.size(); i++){

		position = letters.find(word[i]);
		
		if(position > -1){
			letters.erase(position, 1);
		} else {
			message = "NEVAR";
			break;
		}

	}

	ofstream out("burti.out");
	out << message;
	out.close();

	return 0;

}

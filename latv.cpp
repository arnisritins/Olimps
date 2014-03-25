#include <fstream>
#include <string>
using namespace std;

int main(){

	ifstream in("latv.in");
	unsigned int i, count;
	string word;
	
	count = 0;

	while(in >> word){

		for(i = 0; i < word.size()-1; i++){
			switch(word[i]){
				case 'a':
				case 'e':
				case 'i':
				case 'u':
					if(word[i] == word[i+1])
						word.erase(i, 1);
					break;
				case 'g':
				case 'l':
				case 'k':
				case 'n':
					if(word[i+1] == 'j')
						word.erase(i+1, 1);
					break;
				case 'c':
				case 's':
				case 'z':
					if(word[i+1] == 'h')
						word.erase(i+1, 1);
			}
		}
		
		count += word.size();

	}

	in.close();

	ofstream out("latv.out");
	out << count;
	out.close();

	return 0;

}

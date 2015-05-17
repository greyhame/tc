#include <iostream>
#include <string>
#include <map>

using namespace std;

class ColorfulBricks {

public:
	int countLayouts (string);
};

int ColorfulBricks::countLayouts(string bricks) {
	if (0 == bricks.length())
		return 0;
	map<char, int> bricks_seen;
	for (int i=0; i< bricks.length(); i++) {
		if(bricks_seen.find(bricks[i]) == bricks_seen.end()) {
	    	bricks_seen[bricks[i]] = 1;
		} else 
			bricks_seen[bricks[i]] ++ ;
	}


	if (bricks_seen.size() == 1) 
		return 1;
	if (bricks_seen.size() > 2) 
		return 0;
	else
		return 2;
}

int main() {
	ColorfulBricks cbs;

	cout<<" has "<<cbs.countLayouts("")<<endl;
	cout<<"AAAA has "<<cbs.countLayouts("AAAA")<<endl;
	cout<<"ABAB has "<<cbs.countLayouts("ABAB")<<endl;
	cout<<"WXYZ has "<<cbs.countLayouts("WXYZ")<<endl;

}
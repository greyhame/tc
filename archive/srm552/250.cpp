/*
 * 250.cpp
 *
 *  Created on: Aug 16, 2012
 *      Author: Home
 */

#include <iostream>
#include <vector>

using namespace std;

class FoxAndFlowerShopDivTwo {

	int countFlowers (vector <string> flowers, int r1, int r2, int c1, int c2) {
		if (r1 >= r2 || c1 >= c2)
			return 0;
		int count=0;
		for (int i=r1; i<r2; i++)
			for (int j=c1; j<c2; j++)
				if (flowers[i][j] == 'F')
					count++;
		return count;
	}

public:
	int theMaxFlowers (vector <string>, int, int);

};

int FoxAndFlowerShopDivTwo::theMaxFlowers (vector <string> flowers, int r, int c) {
	int R = flowers.size();
	if (R == 0)
		return 0;
	int C = flowers[0].size();

	if (C == 0)
		return 0;
	return max(max(countFlowers(flowers, 0,r,0,C),
			countFlowers(flowers, 0,R,0,c)),
			max(countFlowers(flowers, r+1,R,0,C),
			countFlowers(flowers, 0,R,c+1,C)));

}


int main(){

}

#include <iostream>
#include <climits>

using namespace std;

int main(){
	double screed,beam,slab,column;
	cin >> screed >> beam >> slab >> column;

	int initialstr = 10*(screed+beam+slab+column);
	//cout << "ini: " << initialstr << endl;

	int stars[4][3];

	stars[0][0] = 3*screed-(int)((screed/10.0)*(150+30+6))/5.0;
	stars[0][1] = 2*screed-(int)((screed/13.0)*(150+40+8))/5.0;
	stars[0][2] = 1*screed-(int)((screed/16.0)*(150+50+10))/5.0;

	stars[1][0] = 3*beam-(int)((beam/5.5)*(150+15+3))/5.0;
	stars[1][1] = 2*beam-(int)((beam/7.0)*(150+20+4))/5.0;
	stars[1][2] = 1*beam-(int)((beam/10.0)*(150+30+6))/5.0;

	stars[2][0] = 3*slab-(int)((slab/4.0)*(150+10+2))/5.0;
	stars[2][1] = 2*slab-(int)((slab/5.5)*(150+15+3))/5.0;
	stars[2][2] = 1*slab-(int)((slab/7.0)*(150+20+4))/5.0;

	stars[3][0] = 3*column-(int)((column/3.5)*(150+10+1.5))/5.0;
	stars[3][1] = 2*column-(int)((column/4.0)*(150+10+2))/5.0;
	stars[3][2] = 1*column-(int)((column/5.5)*(150+15+3))/5.0;
	/*
	for (int i = 0; i<4;i++){
		for (int j = 0; j<3;j++){
			cout << stars[i][j] << " ";
		}
		cout << endl;
	}
	*/

	int maxrow,maxcol,maxelement;

	for (int k = 0; k<4; k++){
		maxelement = INT_MIN;
		for (int i = 0; i<4;i++){
			for (int j = 0; j<3;j++){
				if (stars[i][j]>maxelement && stars[i][j] != 0){
					maxelement = stars[i][j];
					maxrow = i;
					maxcol = j;
				}
			}
		}

		initialstr = initialstr + maxelement;
		//cout << "ini: " << maxrow << endl;
		for (int i = 0; i<3; i++){
			stars[maxrow][i] = 0;
			//cout << stars[maxrow][i] << " ";
		}

		if ((maxrow == 0 && maxcol == 0) || (maxrow == 1 && maxcol == 2)){
			stars[0][0] = 0;
			stars[1][2] = 0;
		}
		if ((maxrow == 1 && maxcol == 0) || (maxrow == 2 && maxcol == 1) || (maxrow == 3 && maxcol == 2)){
			stars[1][0] = 0;
			stars[2][1] = 0;
			stars[3][2] = 0;
		}
		if ((maxrow == 2 && maxcol == 0) || (maxrow == 3 && maxcol == 1)){
			stars[2][0] = 0;
			stars[3][1] = 0;
		}
	}
	cout << initialstr << endl;

}
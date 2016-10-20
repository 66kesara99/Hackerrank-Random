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

	int val[12] = {0};

	for (int i = 0; i<3; i++){
		for (int j = 0; j<3; j++){
			for (int k = 0; k<3;k++){
				for(int l = 0; l<3; l++){
					if ((i == 0 && i+j+k+l == 0)){
						stars[1][2] = 0;
					}
					else if ((j == 0 && i+j+k+l == 0)){
						stars[2][1] = 0;
						stars[3][2] = 0;
					}
					else if ((k == 0 && i+j+k+l == 0)){
						stars[3][1] = 0;
					}
					if (initialstr =0 || stars[0][i] = 0 || stars[1][j] = 0||stars[2][k] = 0||stars[3][l] = 0){
						val[i+j+k+l] = 0;
					}
						else {val[i+j+k+l] = initialstr+stars[0][i]+stars[1][j]+stars[2][k]+stars[3][l];}
				}
			}
		}
	}
	int maxelement = INT_MIN;
	for (int i = 0; i<12; i++){
		if (val[i]>maxelement && val[i]!= 0){
					maxelement = val[i];
		}
	}
	cout << maxelement << endl;
}
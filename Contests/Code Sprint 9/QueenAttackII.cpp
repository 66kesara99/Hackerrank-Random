#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

void printBoard(int* board, int n){
	for (int i = 0; i<n; i++){
		for (int j = 0; j<n; j++){
			cout << board[i*n + j] << " ";
		}
		cout << endl;
	}
}

int main() {
	int n, o;
	cin >> n >> o;

	int qr,qc;

	cin >> qr >> qc;
 
	bool *board = (bool*)malloc(sizeof(bool)*n*n);

	for (long int i = 0; i<n*n; i++){
		board[i] = 0;
	}

	for (int i = 0; i<o; i++){
		int r,c;
		cin >> r >> c;

		board[(r-1)*n + c-1] = 1;
	}

	//cout << "board Created" << endl;

	long int edgeFind, squares = 0;

	edgeFind = qc-1;
	while (edgeFind >= 0){
		if (board[(qr-1)*n + edgeFind] == 0){
			edgeFind--;
			squares++;

		} else {
			break;
		}
	}

	cout << "1st loop" << endl;


	edgeFind = qc-1;
	while (edgeFind < n){
		if (board[(qr-1)*n + edgeFind] == 0){
			edgeFind++;
			squares++;
		} else {
			break;
		}
	}

	cout << "1st loop" << endl;



	edgeFind = qr-1;
	while (edgeFind >= 0){
		if (board[(edgeFind)*n + qc-1] == 0){
			edgeFind--;
			squares++;
		} else {
			break;
		}
	}
	cout << "1st loop" << endl;



	edgeFind = qr-1;
	while (edgeFind < n) {
		if (board[(edgeFind)*n + qc-1] == 0){
			edgeFind++;
			squares++;
		} else {
			break;
		}
	}
	cout << "1st loop" << endl;


	long int efr, efc;

	efc = qc-1;
	efr = qr-1;
	while (efc < n && efr < n){
		if (board[efr*n+efc] == 0){
			efc++; 
			efr++;
			squares++;
		} else {
			break;
		}
	}
	cout << "1st loop" << endl;



	efc = qc-1;
	efr = qr-1;
	while (efc < n && efr >= 0){
		if (board[efr*n+efc] == 0){
			efc++; 
			efr--;
			squares++;
		} else {
			break;
		}
	}
	cout << "1st loop" << endl;



	efc = qc-1;
	efr = qr-1;
	while (efc >= 0 && efr < n){
		if (board[efr*n+efc] == 0){
			efc--; 
			efr++;
			squares++;
		} else {
			break;
		}
	}
	cout << "1st loop" << endl;



	efc = qc-1;
	efr = qr-1;
	while (efc >= 0 && efr >= 0) {
		if (board[efr*n+efc] == 0){
			efc--; 
			efr--;
			squares++;
		} else {
			break;
		}
	}
	cout << "1st loop" << endl;



	cout << squares - 8 << endl;

}
#include <iostream>
#include <utility>


using namespace std;

void vivod(int mas[4][4])
{
	for (int i = 0; i < 4; i++) {
		cout << " +----+----+----+----+" << endl;
		for (int j = 0; j < 4; j++) {
			if (mas[i][j] < 10) {
				if (mas[i][j] == 0)
					cout << " | " << " ";
				else cout << " | " << "0" << mas[i][j];
			}
			else cout << " | " << mas[i][j];
			if (mas[i][j] == 0)
				cout << " ";
		}
		cout << " | " << endl;
	}
	cout << " +----+----+----+----+" << endl;
}
void down(int mas [4][4]) 
{
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (mas[i][j] == 0) {
				if (i != 0) {
					swap(mas[i][j], mas[i-1][j]);
					vivod(mas);
					break;
				}
				else {
					cout << "Error" << endl;
					break;
				}
			}
		}
	}
}

void up(int mas[4][4]) 
{
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (mas[i][j] == 0) {
				if (i != 3) {
					swap(mas[i][j], mas[i + 1][j]);
					vivod(mas);					
					break;
				}
				else {
					cout << "Error" << endl;
					break;
				}
			}
		}
	}
}
void left (int mas[4][4]) 
{
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (mas[i][j] == 0) {
				if (j != 3) {
					swap(mas[i][j], mas[i][j+1]);
					vivod(mas);
					break;
				}
				else {
					cout << "Error" << endl;
					break;
				}
			}
		}
	}
}
void right(int mas[4][4])
{
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (mas[i][j] == 0) {
				if (j != 0) {
					swap(mas[i][j], mas[i][j-1]);
					vivod(mas);
					cout << "Error" << endl;
					break;
				}
				else {
					cout << "Error" << endl;
					break;
				}
			}
		}
	}
}

int main()
{
	int mas[4][4] = { { 13, 14, 15, 0 },
	{ 12, 11, 10, 9 },
	{ 5, 6, 7, 8 },
	{ 4, 3, 2, 1 }
	};
	vivod(mas);

	char op;
	while (cin >> op) {
		if(op=='j') {
			down(mas);
		}
		if(op=='k') {
			up(mas);
		}
		if(op=='h') {
			left(mas);
		}
		if( op=='l'){
			right(mas);
		}
		if(op=='q') {
			cout << "Game over" << endl;
			return -1;
		}
	}
		return 0;
}

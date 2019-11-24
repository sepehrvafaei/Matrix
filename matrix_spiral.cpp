#include<iostream>
using namespace std;
const int x = 3;
const int y = 4;
int a[x][y] = { {1,2,3,4},
				{10,11,12,5},
				{9,8,7,6} };

void PrintMatrixInSpiralOrder(int m,int n,int a[x][y]) {
	int b = 0;int c = 0;
	while (b < x && c < y) {
		for (int i = c; i < n; i++) {
			cout << a[b][i]<<"--";
		}
		b++;
		for (int i = b; i < m; i++) {
			cout << a[i][n-1]<<"--";
		}
		n--;
		if (b < m) {
			for (int i = n-1; i>=c; i--) {
				cout << a[m-1][i]<<"--";
			}
			m--;
		}
		if (c < n) {
			for (int i =m-1; i>=b; i--) {
				cout << a[i][c]<<"--";
			}
			c++;
		}
	}
}
int main(){
		PrintMatrixInSpiralOrder(x,y,a);
		system("PAUSE");
		return 0;
	}
#include <iostream>
#include <string>
using namespace std;
const int N = 50;

void print(int A[][N], int m, int n){
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			cout << A[i][j] << " ";
		}
		cout << '\n';
	}
	cout << '\n';
}

void umn_matrica(int A[][N], int B[][N], int C[][N], int m1, int n1, int m2, int n2)
{
	if(n1 != m2){
		throw("Wrong datas");
	}
	for(int i = 0 ; i < m2; i++){
		for(int b = 0; b < m2; b++){
			int curr = 0;
			int num = 0;
			for(int j = 0; j < n1; j++){
				curr = A[b][j] * B[j][i];
				num = num + curr;
			}
			C[b][i] = num;
		}
	}
}

int main(){
	int m1 = 3;
	int n1 = 3;
	int m2 = 3;
	int n2 = 2;
	
	int A[][N] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	int B[][N] = {{2, 3}, {5, 6}, {8, 9}};
	int C[N][N];
	print(A, m1, n1);
	print(B, m2, n2);
	
	try{
		umn_matrica(A, B, C, m1, n1, m2, n2);
		print(C, m1, n2);
	}catch(char const *a){
		cout << a << endl;
	}
	return 0;
}



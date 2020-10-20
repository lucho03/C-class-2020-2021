#include <iostream>
using namespace std;


//github.com/mopr-elsys/C-class-2020-2021

const int N = 4;
const int M = 50;

void print(int a[M][N], int index1, int index2){
	for(int i = 0; i < index1; i++){
		for(int j = 0; j < index2; j++){
			cout << a[i][j] << endl;
		}
		cout << '\n' << endl;
	}
}

bool if_el(int a[][N], int b[][N], int index1, int index2, int index3, int index4){
	if(index1 != index3 || index2 != index4){
		return false;
	}
	for(int i = 0; i < index1; i++){
		for(int j = 0; j < index2; j++){
			if(a[i][j] != b[i][j]){
				return false;
			}
		}
	}
	return true;
}

int main(){
	int a[4][N] = {{1, 2, 3, 4}, {5, 6, 7, 8}};
	print(a, 4, 4);
	return 0;
}

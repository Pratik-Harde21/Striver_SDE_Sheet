#include <bits/stdc++.h> 
	void markRow(int i, int k, vector<vector<int>> &matrix){
		for(int j=0;j<k;j++){
			if(matrix[i][j] != 0){
				matrix[i][j] = -1;
			}
		}
	}
	void markColumn(int j,int l, vector<vector<int>> &matrix){
		for(int i=0;i<l;i++){
			if(matrix[i][j] != 0){
				matrix[i][j] = -1;
			}
		}
	}

vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) {
	// Write your code here.
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(matrix[i][j] == 0){
				markRow(i,m,matrix);                             //Time Complexity - (n*m)*(n+m) i.e n^3
				// for(int k=0;k<m;k++){
				// 	if(matrix[i][k] != 0){
				// 		matrix[i][k] = -1;
				// 	}
				// }
				markColumn(j,n,matrix);
				// for(int l=0;l<n;l++){
				// 	if(matrix[l][j] != 0){
				// 		matrix[l][j] = -1;
				// 	}
				// }
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(matrix[i][j] == -1){
				matrix[i][j] = 0;
			}
		}
	}
	return matrix;
}
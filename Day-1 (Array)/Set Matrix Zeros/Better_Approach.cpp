#include <bits/stdc++.h> 
vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) {
	// Write your code here.
	int row[n] = {0};
	int column[m] = {0};

	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(matrix[i][j] == 0){             //Time Complexity: O(2*n*m)
				row[i] = 1;                    // Space Complexity: O(n)+O(m)
				column[j] = 1;
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(row[i] || column[j]){
				matrix[i][j] = 0;
			}
		}
	}
	return matrix;
}

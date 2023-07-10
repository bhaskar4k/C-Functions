// Rotate 2D matrix clockwise
void rotate_2D_matrix_90degree_clockwise(vector<vector<int>> &a, int n){
  for(int i=0; i<n/2; i++) {
    for(int j=i; j<n-i-1; j++){
      int temp=a[i][j];
      a[i][j]=a[n-1-j][i];
      a[n-1-j][i]=a[n-1-i][n-1-j];
      a[n-1-i][n-1-j]=a[j][n-1-i];
      a[j][n-1-i]=temp;
    }
  }
}


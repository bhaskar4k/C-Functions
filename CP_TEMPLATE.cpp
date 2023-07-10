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

// Digit count of a number
int digit_count(int n){
  return (floor(log10(n)+1));
}

// Left most set bit
int left_most_set_bit(int n){
  int x=log2(n);
  return x;
}

// Count of set bit
int count_of_set_bit(int n){
  return (bitset<32>(n).count());
}


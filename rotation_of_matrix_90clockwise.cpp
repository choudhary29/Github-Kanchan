#include <iostream>
using namespace std;
#define n 3
void transpose_mat(int A[][n], int B[][n])
{
	int i, j;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++){
            B[i][j] = A[j][i];}
	
}
void interchange_col(int a[][n],int b[][n]){
   for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++){
        b[i][j]=a[i][n-j-1];}}
}
int main()
{
	int A[n][n] = { { 7,8,8},{ 10, 17, 29},{ 30, 8,12}};
	int B[n][n],i{},j{};
	transpose_mat(A, B);
    interchange_col(B,A);
	cout << "Result matrix is "<<endl;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++)
			cout << " " << A[i][j];
		cout <<endl;
	}
	return 0;
}
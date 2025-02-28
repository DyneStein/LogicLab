#include <iostream>
using namespace std;



int SumFirstRow(int **array, int colStart , int colEnd, int row , int sum = 0)
{
 if(colStart>=colEnd-1)
 return sum;
 
 sum+=array[row][colStart];
 
 return SumFirstRow(array, colStart+1, colEnd, row,  sum);
 
}

int SumRightCol(int **array, int rowStart , int rowEnd, int col, int sum=0)
{
    if(rowStart>=rowEnd-1)
    return sum;
    
    sum+=array[rowStart][col];
 
 return SumRightCol(array, rowStart+1, rowEnd, col,  sum);
    
    
    
}

int SumLastRow(int **array, int colStart , int colEnd, int row,int sum = 0)
{
    
if(colStart<=colEnd)
return sum;
 
 sum+=array[row][colStart];
 
 return SumLastRow(array, colStart-1, colEnd, row,  sum);
    
}


int SumLeftCol(int **array, int rowStart , int rowEnd, int col, int sum = 0)
{
   if(rowStart<=rowEnd)
    return sum;
    
    sum+=array[rowStart][col];
 
    return SumLeftCol(array, rowStart-1, rowEnd, col,  sum);
    
}



int sumBoundaryLayers(int** matrix, int n, int m, int rowStart = 0, int colStart = 0, int sum = 0)
{
    
    if(n==1 && m==1 && n!=rowStart && m!=colStart)
    return matrix[rowStart][colStart];
    
    
    
    if(n==rowStart || m==colStart)
    return sum;
    
    
    sum += (m>=1?SumFirstRow(matrix, colStart , m, rowStart):0) + (n>=1?SumRightCol(matrix, rowStart , n , m-1):0) + (m>1?SumLastRow(matrix, m-1 , colStart , n-1):0) + (n>1?SumLeftCol(matrix , n-1 , rowStart, colStart):0);
    
    
    return sumBoundaryLayers(matrix, n-1 , m-1, rowStart+1, colStart+1,sum);
    
}

int main() {
        
    int n = 1, m = 1;
    int** matrix = new int*[n];
    int values[1][1] = {
        {5}
    };
    
    for (int i = 0; i < n; i++) {
        matrix[i] = new int[m];
        for (int j = 0; j < m; j++) {
            matrix[i][j] = values[i][j];
        }
    }
    
    cout << "Total boundary sum: " << sumBoundaryLayers(matrix,n,m) << endl;
    
    for (int i = 0; i < n; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
    
    return 0;
}
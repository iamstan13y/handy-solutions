/*

I'm a Programmer, I have no Life! ~{Stanley Brikkz}

*/
#include <stdio.h>
int main(){
 int x=1;
 while (x==1){
 int m,n,x,y;
 printf("\nEnter the order of the matrix A e.g. (m * n):\n");
 printf("m=");
 scanf("%d", &m);
 printf("by\n");
 printf("n=");
 scanf("%d", &n);
 printf("\nEnter the order of the matrix B e.g. (m * n):\n");
 printf("m=");
 scanf("%d", &x);
 printf("by\n");
 printf("n=");
 scanf("%d", &y);
 int A[m][n], B[x][y], C[m][y];
 int i,j,k;
 if (n==x){
  printf("Enter The Values Of Matrix A:\n");
 for (i=0;i<m;i++){
  for (j=0;j<n;j++){
   scanf("%d", &k);
   A[i][j]=k;
  }
 }
 printf("\nEnter The Values Of Matrix B:\n");
 for (i=0;i<x;i++){
  for (j=0;j<y;j++){
   scanf("%d", &k);
   B[i][j]=k;
  }
 }
 for (i=0;i<m;i++){
  for (j=0;j<y;j++){
   C[i][j]=0;
   for (k=0;k<x;k++){
    C[i][j]=C[i][j]+(A[i][k]*B[k][j]);
   }
        }
 }
 printf("\nThe Product Of The Matrices Is:\n\n");
 for (i=0;i<m;i++){
  printf("(\t");
  for (j=0;j<y;j++){
   printf("%d \t", C[i][j]);
  }
  printf(")\n");
 }
} else {
 printf("\nERROR! Matrix Order Mismatch.\nYou can't multiply a %d by %d matrix and a %d by %d matrix.\n", m,n,x,y);
 printf("If You're still reading this PLEASE REVISIT YOUR 'O' LEVEL MATHS NOTES!");
}
}
    return 0;
}

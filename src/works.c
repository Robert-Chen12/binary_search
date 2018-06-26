#include <stdio.h>

int n;
int k;
int A[100000];

int p(int m){
     int i;
     int y = 0;
     int peo = 1; // the number of people
     for (i =0; i<n; i++) {
        if ( y + A[i]<= m ){
            y += A[i];
        }
        else {
            peo ++;
            y = A[i];
        }
     }
     return peo <= k;
}

int main(){
  int i, lb, ub;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }
  while ( ub-lb > 1) {
    int m = (lb+ub) / 2;
    if (p(m)) {
        ub = m;
    }
    else {
        lb = m;
    }
  }
  printf("%d\n",ub);
  return 0;
}

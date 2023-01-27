
#include <stdio.h>
#include <stdlib.h>
#include "sorting.h"

int Isprime(int num){
  if(num==1)
    return 0;
  for(int i=2;i<num;i++){
    if(num%i==0)
      return 0;
  }
}

int main(int argc,char *argv[]) {
  int i,j,*a,n;
  n = argc-1;
  a=(int*)malloc(sizeof(int)*n);
  int *prime=(int*)malloc(sizeof(int)*n);
  for(i=0;i<n;i++){
    a[i] = atoi(argv[i+1]);
    if(Isprime(a[0])){
      prime[j]=a[i];
      j++;
    }
    n=j;
    if(j==0) printf("No prime\n");
    else{
      display(prime,n);
      bubbleSort(prime,n);
    }
    display(prime,n);
  }
   return 0;
}





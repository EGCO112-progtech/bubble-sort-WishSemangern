// selection sort function module in C

void display(int a[],int n){

    int i;

    for(i=0;i<n;i++)
        printf("%5d",a[i]);
    printf("\n");
  
}

void selectionSort(int data[], int length) 
{ 
	int i, j, m, mi;
  for (i = 0; i < length - 1; i++)

/* find the minimum */
  mi = i;
  for (j = i+1; j < length; j++){
    if (data[j] < data[mi]) { mi = j; }
  }
  m = data[i];
  data[i] = data[mi];
  data[mi] = m;
} 



void insertion(int a[],int n){
  int i, j, value;
  for(i = 1; i < n; i++)
  {
  value = a[i];
  for (j = i - 1; j >= 0 && a[j] > value; j--)
  {
  a[j + 1] = a[j];
  display(a,i);
  }
  a[j + 1] = value;
  display(a,i);
}


}

void swap(int *a,int *b){
 int temp;
  temp=*a;
  *a=*b;
  *b=temp;
  
}

void bubbleSort(int a[],int n){

int i,j;
int sorted;
// how may pair to compare?
for(i=0;i<n-1;i++){
  printf("Round %d\n",i);
  sorted=0;
  for(j=0;j<n-1-i;j++){
    if(a[j]>a[j+1]){
      swap(&a[j],&a[j+1]);
      sorted=1;
    }
    display(a,n);
  }
  if(sorted==0) break;
 

 }
  
  
}





void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int MAX(int ar[], int size1){
    int i, max1 = ar[0];
    for(i = 0; i<size1; i++){
        if(ar[i]>max1)
            max1 = ar[i];
    }
    return max1;
}

void initial_array(int ar[], int size1, int element){
    int i;
    for(i = 0; i<=size1; i++)
        ar[i] = element;
}

static int compare (const void * a, const void * b)
{
  if (*(int*)a > *(int*)b) return 1;
  else if (*(int*)a < *(int*)b) return -1;
  else return 0;
}

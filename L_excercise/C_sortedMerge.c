/*
 *Sorted Merge LCCI
 */

void merge(int* A, int ASize, int m, int* B, int BSize, int n){
    int *C = (int*)malloc(sizeof(int)*ASize);
    memset(C,0,sizeof(int)*ASize);
    int i = 0;
    int j = 0;
    int k = 0;
    while(i != m && j!= n){
        if(A[i] <= B[j]){
            C[k++] = A[i++];
        }
        else{
            C[k++] = B[j++];
        }

    }

    while(i < m){
        C[k++] = A[i++];
    }
    while(j < n) {
        C[k++] = B[j++];
    }
   

    for(i = 0; i < ASize; i++){
        A[i] = C[i];    
    }
    return A;
    
}

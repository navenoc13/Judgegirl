int max(int *iptr[], int n){
    int maximum = *iptr[0];
    for (int i=0;i<n;i++){
        if (*iptr[i]>maximum){
            maximum = *iptr[i];
        }
    }
    return maximum;
}

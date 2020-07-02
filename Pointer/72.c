void fill_array(int *ptr[], int n){
    //Point to fixed array
    for(int i=0;i<n;i++)*ptr[i]=i;
    //sort the ptr address
    int*tmp;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++){
            if(ptr[j]>ptr[j+1]){
                tmp = ptr[j];
                ptr[j]=ptr[j+1];
                ptr[j+1]=tmp;
            }
        }
    }
    //fill the rest(sum of two nearest element to its left and right)
    for(int i=1;i<n;i++){
        for(int j=1;j<(ptr[i]-ptr[i-1]);j++){
            *(ptr[i-1]+j) = *ptr[i-1] + *ptr[i];
        }
    }
}

void snake(const int *ptr_array[100][100], int m){
    int size = m*m;
    const int *tmp[size],*temp;
    int idx=0,dir=0;;
    //put into 1d array
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            tmp[idx] = ptr_array[i][j];
            idx++;
        }
    }
    //sort
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
            if(*(tmp[j]) > *(tmp[j+1])){
                temp = tmp[j];
                tmp[j] = tmp[j+1];
                tmp[j+1] = temp;
            }
        }
    }
    //put snake order
    dir=0,idx=0;
    for(int i=0;i<m;i++){
        if(dir==0){
            for(int j=0;j<m;j++){
                ptr_array[i][j] = tmp[idx];
                idx++;
            }
            dir=1;    
        }
        else if(dir==1){
            for(int j=m-1;j>=0;j--){
                ptr_array[i][j] = tmp[idx];
                idx++;
            }
            dir=0;
        }
    }
}

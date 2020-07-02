int value (int type, int width, int height, int length){
    int price;;
    if (width<=0 || height<=0 || length <=0){
        return -2;
    }
    switch (type){
        case 79: price =30;break;
        case 47: price =10;break;
        case 29: price =4;break;
        case 82: price =5;break;
        case 26: price =3;break;
        case 22: price =9;break;
        default: return -1;break;
    }
    int metalvol = width *height *length;
    int x = width, y =height, z=length;
    while (x%y!=0){
        int k = x%y;
        x = y;
        y = k;
    }
    while (z%y!=0){
        int k =z%y;
        z = y;
        y=k;
    }
    return price * metalvol * y*y*y;
}

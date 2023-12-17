int maxmin(int input[], int size){
    int a=-30;
    for (int i=1; i<size-1; i++){
        if (input[i-1]>input[i] && input[i+1]>input[i] && input[i]>a){
            a=input[i];
        }
    }
    if (input[0]>a && input[1]>input[0]) a=input[0];
    if (input[size-1]>a && input[size-2]>input[size-1]) a=input[size-1];
    return a;
}
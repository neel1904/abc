void ReverseStr(char str[], int n){
    int s=0, e=n-1;

    while(s<=e){
        swap(str(s),str(e));
        s++;
        e++;
    }
}
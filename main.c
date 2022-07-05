void main(){
    multiplication_table();
    int i=0;
    int j=2;
    i=j;

    return 0;
}

void multiplication_table(){
    for (int i=2;i<10;i++){
        for(int j=2;j<10;j++)
        {
            printf("%d x %d = %d",i,j,i*j);
        }
    }
}

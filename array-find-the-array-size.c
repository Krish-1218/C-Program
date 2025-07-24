#include<stdio.h>
int main(){

    int arr[5]={11,22,33,44,55};
    int lenght=sizeof(arr)/sizeof(arr[0]);
    printf("%d",lenght);
}
//size of single element is 4byte (means 11 is on 0 index and its byte is 4) 

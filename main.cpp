#include <iostream>
using namespace std;

double sum(int arr[], int size){
    double numS=0;
    for(int i=0;i<size;i++){
        numS+=arr[i];
    }
    return numS;
}
double avg(int arr[], int size){
    double numA=sum(arr,size)/size;
    return numA;
}
void Bsort(int * arr, int size, int opt){
    int temp;

    for(int i=0;i<size;i++){
        for(int j=1;j<size-i;j++){
            if(opt==1){
                if(arr[j-1]>arr[j]){
                    temp=arr[j];
                    arr[j]=arr[j-1];
                    arr[j-1]=temp;
                }
            }else{
                if(arr[j-1]<arr[j]){
                    temp=arr[j];
                    arr[j]=arr[j-1];
                    arr[j-1]=temp;
                }
            }
        }
    }
}
int main(void){
    int size=5;
    int opt=0;
    int num[size];

    cout<<"수 입력(5개) : ";
    for(int i=0;i<size;i++){
        cin>>num[i];
    }
    cout<<"합계 : "<<sum(num,size)<<endl<<"평균 : "<<avg(num,size)<<endl;

    cout<<"정렬 옵션 선택(1: 오름차순, 2: 내림차순): ";
    cin>>opt;
    Bsort(num,size,opt);
    cout<<"[ ";
    for(int i=0;i<size;i++){
        cout<<num[i]<<" ";
    }
    cout<<"]"<<endl;
    return 0;
}
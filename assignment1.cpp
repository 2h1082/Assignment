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

    cout<<"�� �Է�(5��) : ";
    for(int i=0;i<size;i++){
        cin>>num[i];
    }
    cout<<"�հ� : "<<sum(num,size)<<endl<<"��� : "<<avg(num,size)<<endl;

    cout<<"���� �ɼ� ����(1: ��������, 2: ��������): ";
    cin>>opt;
    Bsort(num,size,opt);
    cout<<"[ ";
    for(int i=0;i<size;i++){
        cout<<num[i]<<" ";
    }
    cout<<"]"<<endl;
    return 0;
}
#include <iostream>
using namespace std;

template <class T>
void selectionSort(T arr[], int n){
    for (i=0; i<n-1; i++){
        int min_index = i;
        for (int j=i+1; j<n; j++){
            if(arr[j] < arr[min_index]){
                min_index = j;
            }
        }
        T temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] =  temp;
    }
}

template <class T>
void displayArray (T aa[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int intArr[] = {89, 76, 34, 67, 23, 78};
    float floatArr[] = {98.4, 85.5, 56.8, 56.4, 23.5, 98.5};

    int nint = sizeof(intArr) / sizeof(intArr[0]);
    int nfloat = sizeof(floatArr) / sizeof(floatArr);

    cout << "Integer array before sorting : ";
    displayArray(intArr, nint);
    selectionSort(intArr, nint);
    cout<<"Integer array after sorting : ";
    displayArray(intArr, nint);

    cout << "Float array before sorting : ";
    displayArray(floatArr, nfloat);
    selectionSort(floatArr, nfloat);
    cout<<"Float array after sorting : ";
    displayArray(floatArr, nfloat);

    return 0;
}
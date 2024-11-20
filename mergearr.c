#include <stdio.h>
#include<stdlib.h>
struct Array{
    int A[15];
    int size;
    int length;
};
void swap(&arr->A[i] ,&arr->A[j])
 {
 int temp=*arr->A[i];
 *arr->A[i]=*arr->A[j];
 *arr->A[j]=temp;
 }
 Array Merge(Array& B){
        Array C(length + B.length, length + B.length);
        int i = 0;
        int j = 0;
        int k = 0;
        while (i < length && j < B.length){
            if (A[i] < B.Get(j)){
                C.Set(k++, A[i++]);
            } else {
                C.Set(k++, B.Get(j++));
            }
        }
        for (; i < length; i++){
            C.Set(k++, A[i]);
        }
        for (; j < B.length; j++){
            C.Set(k++, B.Get(j));
        }
        return C;
    }
 
    ~Array(){
        delete[] A;
    }

}
int main()
{
Array X(10, 5, true);
Array Y(10, 4, true);
 Array Z = X.Merge(Y);

swap(*arr);
    return 0;
}


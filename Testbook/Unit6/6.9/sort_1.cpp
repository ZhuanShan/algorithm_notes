#include <stdio.h>
#include <algorithm>
using namespace std;
int main(){
    int a[6] = {9,4,2,5,6,-1};
    sort(a,a+4);            //尾地址的下一个地址
    for(int i=0;i<6;i++){
        printf("%d",a[i]);
    }
    printf("\n");
    sort(a,a+6);
    for(int i=0;i<6;i++){
        printf("%d",a[i]);
    }
    return 0;
}
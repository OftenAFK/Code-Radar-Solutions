#include<stdio.h>
void isPrime(int a){
    int pr[a];

    for(int i=0; i<a; i++){
        scanf("%d", &pr[i]);
    }

    for(int i=0; i<a; i++){
        printf("%d", pr[i]);
    }
}
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int num;
        scanf("%d", &num);
        printf("%d\n", isPrime(num));
    }
    return 0;
}
#include<stdio.h>
int isPrime(int a){
    if(a < 2){
        return 0;
    }
    
    for(int i=2; i<= a/2; i++){
        if(a%i == 0){
            return 0;
        }
    }
    return 1;
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
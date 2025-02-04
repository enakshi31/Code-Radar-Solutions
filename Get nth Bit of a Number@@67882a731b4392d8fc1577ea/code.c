#include <stdio.h>
int get_nth_bit(int num, int n){
if(n<0) {
    return -1;
}
int mask = 1 << n;
if (num & mask) {
    return 1;
}
else {
    return 0;
}
}
int main() {
    int num,n;
    scanf("%d %d", &num,&n);
    int result = get_nth_bit(num,n);
    printf("%d\n",result);
    return 0;
    
}
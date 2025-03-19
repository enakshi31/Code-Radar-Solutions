#include<stdio.h>
int main(){
    int N,r,c,i;   
    printf("Enter N:");
    scanf("%d",&N);   
    int A[N];
    for(i=0;i<N;i++){
        printf("Enter the value:");
        scanf("%d",&A[i]);
    }   
      int *p;
       p=&A[0];//storing base address
    for(r=0;r<N;r++){
        for(c=0;c<N-1-r;c++){
            if((p+c)>(p+c+1)){
                    int temp=*(p+c);
                    (p+c)=(p+c+1);
                    *(p+c+1)=temp;
                }
        }
    } 
    printf("\nSorted Array:\n");
       for(i=0;i<N;i++){
        printf("\n%d",*(p+i));
    }
}
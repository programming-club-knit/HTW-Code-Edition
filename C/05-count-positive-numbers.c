#include <stdio.h>

int main(void) {
    int n,i;
    int count = 0;

    printf("How many integers will you enter? ");
    if (scanf("%d", &n) != 1 || n < 1 || n > 100) {
        printf("Enter a count from 1 to 100.\n");
        return 1;
    }

    printf("Enter %d integers:\n", n);
    
    int value[50];
    
    for (int i = 0; i < n; i++) {
        
        scanf("%d",&value[i]);
        
        if ( getchar =='\n'){
         break;
        }
    }
    
    for( int y=0 ; y<n ; y++){
        
        if (value[y]>0){
            count++;
        }
    }
    
     printf("%d",count);
     
     return 0;
}

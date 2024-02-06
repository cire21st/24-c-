#include <stdio.h>

int main() {

    int n ;
    
    printf("학년은?");
    scanf("%d",&n);

    switch (n) {
        case 1:printf("Freshman");break;
        case 2:printf("Sophomore");break;
        case 3:printf("Junior");break;
        case 4:printf("Senior");break;
        default:printf("No defined Word");
    }
    return 0;
}

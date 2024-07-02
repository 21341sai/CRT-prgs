#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    
    int results[t],x;
    
    for(x = 0; x < t; x++){
        int k;
        scanf("%d", &k);
        int count = 0, i = 0;
        
        while (1) {
            i++;
            if (i % 3 != 0 && i % 10 != 3) {
                count++;
                if (count == k) {
                    results[x] = i;
                    break;
                }
            }
        }
    }
    
    for (x = 0; x < t; x++) {
        printf("%d\n", results[x]);
    }
    
    return 0;
}


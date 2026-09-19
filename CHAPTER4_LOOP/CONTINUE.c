#include<stdio.h>

int main() {
    int skip = 5;
    int i = 0;
    {while (i < 9)
    
        if (i == skip)
        {
            i++;
            continue; // IT WILL JUST SKIP ONLY 5 AND THEN CONTINUE
        
        printf("%d", i);
        i++;
        }}
    
    return 0;
}
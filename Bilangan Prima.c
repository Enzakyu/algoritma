#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

const char* cek_prima(int n) {
    int i, flag = 1;

    if (n <= 1)
        return "BUKAN"; 

   
    for (i = 2; i <= n / 2; ++i) {
        if (n % i == 0) {
            flag = 0; 
            break;
        }
    }

  
    return (flag == 1) ? "PRIMA" : "BUKAN";
}

int main() {
    int n;

    printf("Masukkan sebuah bilangan: ");
    scanf("%d", &n);

    
    printf("%s\n", cek_prima(n));

    return 0;
}

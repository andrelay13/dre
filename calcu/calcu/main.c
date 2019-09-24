#include <stdio.h>

int main(){
    
    float a, b, c;
    char obj;
    
    printf("Masukkan angka pertama : ");
    scanf("%f", &a);getchar();
    
    printf("\nMasukkan angka kedua : ");
    scanf("%f", &b);getchar();
    
    printf("\nMasukkan simbol +,-,*, atau / : ");
    scanf("%c", &obj);
    
    if(obj == '+'){
        c = a + b;
        printf("%.1f + %.1f = %.2f\n", a, b, c);
    }
  
    if(obj == '-'){
        c = a - b;
        printf("%.1f - %.1f = %.2f\n", a, b, c);
    }
   
    if(obj == '*'){
        c = a * b;
        printf("%.1f * %.1f = %.2f\n", a, b, c);
    }
    
    if(obj == '/'){
        c = a / b;
        printf("%.1f / %.1f = %.2f\n", a, b, c);
    }
    
        
        
        
    
    
    return 0;
}

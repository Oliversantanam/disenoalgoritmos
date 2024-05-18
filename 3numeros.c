#include <stdio.h>
int main () {
    int n1, n2, n3;
    printf("Introduzca 3 numero entre el 3 y el 15:\n");
    scanf("%d %d %d", &n1, &n2, &n3);
    if (n1>=3 && n1<=15 || n2>=3 && n2<=15 || n3<=3 && n3<=15) {

       if (n1 < n2 && n1 < n3)
          if (n2 < n3) {
                printf("\n%d", n1);
                printf("\n%d", n2);
                printf("\n%d", n3);
            } else {
                printf("\n%d", n1);
                printf("\n%d", n3);
                printf("\n%d", n2);
            }
       if (n2 < n1 && n2 < n3)
          if (n1 < n3) {
                printf("\n%d", n2);
                printf("\n%d", n1);
                printf("\n%d", n3);
            } else {
                printf("\n%d", n2);
                printf("\n%d", n3);
                printf("\n%d", n1);
            }

       if (n3 < n1 && n3 < n2)
        if (n1 < n2) {
                printf("\n%d", n3);
                printf("\n%d", n1);
                printf("\n%d", n2);
            } else {
                printf("\n%d", n3);
                printf("\n%d", n2);
                printf("\n%d", n1);
            }
    }
    else {
        printf("\nIngresa Otros valor");
    }
  return (0);
}
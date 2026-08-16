#include <stdio.h>

int main()  {
    int nilai;

    printf("masukkan nilai (0-100): ");
    scanf("%d", &nilai);

    if (nilai >= 90) {
        printf("Grade: A\n");
    } else if (nilai >= 80) {
        printf("Grade: B\n");
    } else if (nilai >= 70) {
        printf("Grade: C\n");
    } else if (nilai >= 60) {
        printf("Grade: D\n");
    } else {
        printf("Grade: E\n");
    }

    return 0;
}


#include <stdio.h>
    int main() {
        
    for (int i = 0; i < 5; i++) {
        printf("Perulangan ke-%d\n", i + 1);
    }
    return 0;
}
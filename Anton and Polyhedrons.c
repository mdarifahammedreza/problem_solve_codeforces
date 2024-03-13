#include <stdio.h>
#include <string.h>

int main() {
    int m, carry = 0;
    char str[15];
    char Tetrahedron[] = "Tetrahedron", Cube[] = "Cube", Octahedron[] = "Octahedron", Dodecahedron[] = "Dodecahedron", Icosahedron[] = "Icosahedron";
    scanf("%d", &m);

    for (int i = 0; i < m; i++) {
        scanf("%s", str);

        if (strcmp(str, Tetrahedron) == 0) {
            carry += 4;
        } else if (strcmp(str, Cube) == 0) {
            carry += 6;
        } else if (strcmp(str, Octahedron) == 0) {
            carry += 8;
        } else if (strcmp(str, Dodecahedron) == 0) {
            carry += 12;
        } else if (strcmp(str, Icosahedron) == 0) {
            carry += 20;
        }
    }

    printf("%d\n", carry);
    return 0;
}

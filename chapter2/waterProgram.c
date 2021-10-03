#include <stdio.h>

int main(void) {
    float massMolecule = 3.0e-23, quartToMolecule = 9.5e2, quarts; // Mass of a molecule, conversion unit of molecule
    float ratio = massMolecule / quartToMolecule; // Number of Molecules in a quart.
    printf("Enter the amount of water in quarts: ");
    scanf("%f", &quarts);
    printf("The Number of molecules in a quart: %f", ratio * quarts);
    return 0;
}

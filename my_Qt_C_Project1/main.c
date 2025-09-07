/*
 * Ohjelma jakaa karkit lasten kesken.
 * Ohjelma kysyy käyttäjältä karkkien ja lasten lukumäärän,
 * ja laskee kuinka monta karkkia kukin lapsi saa
 * sekä kuinka monta karkkia jää yli.
 *
 * Tekijä: Kajetan Zelech-Alatarvas
 * Data: 01.09.2025
 * Last Update: 2.09.2025
 * v.1.01_2025_09_02- Added loops, to check if provided by user value is higher than 0.
 */

#include <stdio.h> // Tämä on käsky esiprosessorille

// Cleaner
void clearInputBuffer(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) { }
}

// Main program
int main()
{

// muuttujien määrittely
int NumberOfSweets, NumberOfKids, NumberOfSweetsPerCapita, NumberOfLeftOvers;

// Pyydetään käyttäjää antamaan karkkien määrä
do {
    printf("Enter number of sweets: ");
    scanf("%d", &NumberOfSweets);

    if (NumberOfSweets <= 0) {
        printf("Please enter a number greater than zero!\n\n");
        clearInputBuffer(); // Cleaning Buffer
    }
} while (NumberOfSweets <= 0);

// Pyydetään käyttäjää antamaan lasten määrä

do {
    printf("Enter number of kids: ");
    scanf("%d", &NumberOfKids);

    if (NumberOfKids <= 0) {
        printf("Please enter a number greater than zero!\n\n");
        clearInputBuffer(); // Cleaning Buffer
    }
} while (NumberOfKids <= 0);

// Lasketaan kuinka monta karkkia tulee per lapsi
NumberOfSweetsPerCapita = NumberOfSweets / NumberOfKids;

// Lasketaan kuinka monta karkkia jää yli (jakojäännös %)
NumberOfLeftOvers = NumberOfSweets % NumberOfKids;

// Tulostetaan käyttäjän syöttämät tiedot sekä laskennan tulokset
printf("\n\n\nNumber Of Sweets:%d \nNumber Of Kids:%d \nNumber Of Sweets Per Capita:%d \nNumber Of Left Overs:%d", NumberOfSweets, NumberOfKids, NumberOfSweetsPerCapita, NumberOfLeftOvers);


    return 0;
}

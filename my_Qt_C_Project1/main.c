/*
 * Ohjelma jakaa karkit lasten kesken.
 * Ohjelma kysyy käyttäjältä karkkien ja lasten lukumäärän,
 * ja laskee kuinka monta karkkia kukin lapsi saa
 * sekä kuinka monta karkkia jää yli.
 *
 * Tekijä: Kajetan Zelech-Alatarvas
 * Data: 01.09.2025
 */

#include <stdio.h> // Tämä on käsky esiprosessorille

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
    }
} while (NumberOfSweets <= 0);


// OLD CODE: printf("Enter NumberOfSweets: ");
// OLD CODE: scanf("%d", &NumberOfSweets);

// Pyydetään käyttäjää antamaan lasten määrä

do {
    printf("Enter number of kids: ");
    scanf("%d", &NumberOfKids);

    if (NumberOfKids <= 0) {
        printf("Please enter a number greater than zero!\n\n");
    }
} while (NumberOfKids <= 0);


// OLD CODE: printf("Enter NumberOfKids: ");
// OLD CODE: scanf("%d", &NumberOfKids);

// Lasketaan kuinka monta karkkia tulee per lapsi
NumberOfSweetsPerCapita = NumberOfSweets / NumberOfKids;

// Lasketaan kuinka monta karkkia jää yli (jakojäännös %)
NumberOfLeftOvers = NumberOfSweets % NumberOfKids;

// Tulostetaan käyttäjän syöttämät tiedot sekä laskennan tulokset
printf("\n\n\nNumber Of Sweets:%d \nNumber Of Kids:%d \nNumber Of Sweets Per Capita:%d \nNumber Of Left Overs:%d", NumberOfSweets, NumberOfKids, NumberOfSweetsPerCapita, NumberOfLeftOvers);


    return 0;
}

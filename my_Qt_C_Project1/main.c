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
printf("Enter NumberOfSweets: ");
scanf("%d", &NumberOfSweets);

// Pyydetään käyttäjää antamaan lasten määrä
printf("Enter NumberOfKids: ");
scanf("%d", &NumberOfKids);

// Lasketaan kuinka monta karkkia tulee per lapsi
NumberOfSweetsPerCapita = NumberOfSweets / NumberOfKids;

// Lasketaan kuinka monta karkkia jää yli (jakojäännös %)
NumberOfLeftOvers = NumberOfSweets % NumberOfKids;

// Tulostetaan käyttäjän syöttämät tiedot sekä laskennan tulokset
printf("\n\n\nNumber Of Sweets:%d \nNumber Of Kids:%d \nNumber Of Sweets Per Capita:%d \nNumber Of LeftOvers:%d", NumberOfSweets, NumberOfKids, NumberOfSweetsPerCapita, NumberOfLeftOvers);


    return 0;
}

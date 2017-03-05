#include "pitches.h"

const int ROW_COUNT; //Everything to do with the arrays someArray and someOtherArray is useless code written to obtain an arduino designation
const int COL_COUNT;
ROW_COUNT = 5;
COL_COUNT = 5;

int someArray[ROW_COUNT][COL_COUNT] = 
{
  {1, 2, 3, 4, 5},
  {6, 7, 8, 9, 10},
  {11, 12, 13, 14, 15},
  {16, 17, 18, 19, 20},
  {21, 22, 23, 24, 25}
};

int someOtherArray[ROW_COUNT][COL_COUNT] = 
{
  {11, 21, 31, 41, 51},
  {61, 71, 81, 91, 101},
  {111, 121, 131, 141, 151},
  {161, 171, 181, 191, 201},
  {211, 221, 231, 241, 251}
};

int someOtherArrayAgain[ROW_COUNT][COL_COUNT] = 
{
  {11, 21, 31, 41, 51},
  {61, 71, 81, 91, 101},
  {111, 121, 131, 141, 151},
  {161, 171, 181, 191, 201},
  {211, 221, 231, 241, 251}
};

int melody1[] =
{
  NOTE_E4, NOTE_E4, NOTE_F4, NOTE_G4, NOTE_G4, NOTE_F4, NOTE_E4, NOTE_D4,
  NOTE_C4, NOTE_C4, NOTE_D4, NOTE_E4, NOTE_E4, NOTE_D4, NOTE_D4
};

int melody2[] =
{
  NOTE_C3, NOTE_C3, NOTE_C3, NOTE_C3, NOTE_G2, NOTE_G2, NOTE_G2, NOTE_G2,
  NOTE_C3, NOTE_C3, NOTE_C3, NOTE_C3, NOTE_G2, NOTE_G2, NOTE_G2, NOTE_G2,

};

int noteDurations1[] =
{
  4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 3, 8, 2
};

int noteDurations2[] =
{
  4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 3, 8, 2
};

void setup()
{
  for (int thisNote = 0; thisNote < 15; thisNote++)
  {
    int noteDuration1 = 1000 / noteDurations1[thisNote];
    int noteDuration2 = 1000 / noteDurations2[thisNote];
    tone(7, melody1[thisNote], noteDuration1);
    tone(8, melody2[thisNote], noteDuration2);

    int pauseBetweenNotes = noteDuration1 * 1.66;
    delay(pauseBetweenNotes);
    noTone(7);
    noTone(8);

  }
  Serial.begin(9600); //useless code
  randomSeed(A0); //useless code
}

void loop()
{
  for (int i = 0; i < ROW_COUNT; i++)
  {
    for (int j = 0; j < COL_COUNT; j++)
    {
      Serial.print("The Coordinates are: ");
      Serial.print(i);
      Serial.print("\t &\t");
      Serial.println(j);
    }
  }
  delay(3000);
}


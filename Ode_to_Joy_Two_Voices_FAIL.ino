#include "pitches.h"

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
}

void loop()
{

}


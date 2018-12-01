
#include "pitches.h"

#define led 8


// notes in the melody:
int melody[] = {
 NOTE_A4, NOTE_G4, NOTE_D4,  NOTE_D4, NOTE_G4,  NOTE_A4
};


int melody2[] = {
  NOTE_A4, NOTE_G4, NOTE_D4, NOTE_A4, NOTE_G4, NOTE_D4, 
};

int melody3[] = {
  NOTE_A4, NOTE_G4, NOTE_D4, 
};
// note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurations[] = {
  4, 8, 8, 4, 4, 8, 4
};

int noteDurations2[] = {
  4, 8, 8, 4, 4, 
};

int noteDurations3[] = {
  4, 8, 8
};

void setup()

{ Serial.begin (9600);

pinMode(led, OUTPUT);

} 

void loop(){

{ 

 int Knob = map(analogRead(A0), 0, 1000, 0, 4);

  Serial.println(Knob);


if (Knob >= 2) {
  for (int thisNote = 0; thisNote < 8; thisNote++) {

    int noteDuration = 1000 / noteDurations[thisNote];
    tone(8, melody2[thisNote], noteDuration);

    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    noTone(8);
  }
}


if (Knob >= 3) {
  for (int thisNote = 0; thisNote < 8; thisNote++) {

    int noteDuration = 1000 / noteDurations[thisNote];
    tone(8, melody[thisNote], noteDuration);

    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    noTone(8);
  }
}

if (Knob >= 4) {
  for (int thisNote = 0; thisNote < 8; thisNote++) {

    int noteDuration = 1000 / noteDurations[thisNote];
    tone(8, melody[thisNote], noteDuration);

    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    noTone(8);
  }
}

else {

digitalWrite(led,LOW);
delay(1000);

}

}}

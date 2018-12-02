

#include <SdFat.h>
#include <MP3Player.h>



String inputString = ""; // a string to hold incoming data
const char* Folder ="mp3"; //folder to play
const char* default_song = "0001.mp3";//default song
int max_no = 4; //total number of tracks in Folder
int vol = 220;



void setup()

{ 

pinMode(A0,INPUT);
  randomSeed(analogRead(A0));
  
  Serial.begin(9600);
  
  if(!mp3.Init(3,2))
  {
    Serial.println("Init failed");
    while(1);
  }Serial.begin (9600);


 mp3.setVolume(vol);
  
  mp3.PlayTrack(Folder,default_song);
  Serial.println("Currently playing...");
  Serial.print("Track "+String(mp3.getTrackNo()));
  Serial.println(": "+mp3.getName());



}

void loop(){

{ 

 int Knob = map(analogRead(A0), 0, 1000, 0, 4);

  Serial.println(Knob);



if (Knob >= 3) {

   mp3.PlayTrack(Folder,random(1,max_no));
    Serial.println("Currently playing...");
    Serial.print("Track "+String(mp3.getTrackNo()));
    Serial.println(": "+mp3.getName());
  }
}

int Knob = map(analogRead(A0), 0, 1000, 0, 4);

  Serial.println(Knob);

if (Knob >= 4) {
   mp3.PlayTrack(Folder,random(1,max_no));
    Serial.println("Currently playing...");
    Serial.print("Track "+String(mp3.getTrackNo()));
    Serial.println(": "+mp3.getName());
  }


else {

delay(1000);

}

}

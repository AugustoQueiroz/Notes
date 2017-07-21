#include "Notes.h"

int buzzer = 10;

Notes notes(buzzer);

int tempo = 2500;

void setup() {
}

void loop() {
  verse();
  
  prechorus();
  
  chorus();
  
  verse();
  
  prechorus();
  
  chorus();
}

void verse() {
  // First Bar
  notes.rest(tempo/4 + tempo/8);
  notes.C3(tempo/8);
  notes.C3(tempo/8);
  notes.G3(tempo/8 + tempo/4); // Ligature
  
  // Second Bar
  notes.E3(tempo/4);
  notes.D3(tempo/8);
  notes.C3(tempo/8);
  notes.C3(tempo/8);
  notes.G3(tempo/8 + tempo/4); // Ligature
  
  // Third Bar
  notes.E3(tempo/4);
  notes.D3(tempo/8);
  notes.C3(tempo/8);
  notes.C3(tempo/8);
  notes.A3(tempo/8 + tempo/4); // Ligature
  
  // Fourth Bar
  notes.E3(tempo/4);
  notes.D3(tempo/8);
  notes.C3(tempo/8);
  notes.C3(tempo/8);
  notes.F3(tempo/8 + tempo/4); // Ligature
  
  // Fifth Bar
  notes.F3(tempo/4);
  notes.F3(tempo/8);
  notes.C3(tempo/8);
  notes.C3(tempo/8);
  notes.G3(tempo/8 + tempo/4); // Ligature
  
  // Sixth Bar
  notes.E3(tempo/4);
  notes.D3(tempo/8);
  notes.C3(tempo/8);
  notes.C3(tempo/8);
  notes.G3(tempo/8 + tempo/4); // Ligature
  
  // Seventh Bar
  notes.E3(tempo/4);
  notes.D3(tempo/8);
  notes.C3(tempo/8);
  notes.C3(tempo/8);
  notes.A3(tempo/8 + tempo/4); // Ligature
  
  // Eigth Bar
  notes.E3(tempo/4);
  notes.D3(tempo/8);
  notes.C3(tempo/8);
  notes.C3(tempo/8);
  notes.F3(tempo/8 + tempo/8); // Ligature
  
  // Nineth Bar
  notes.F3(tempo/4);
  notes.F3(tempo/8 + tempo/2);
}

void prechorus() {
  // Tenth Bar
  notes.rest(tempo/8);
  notes.G3(tempo/8);
  notes.G3(tempo/8);
  notes.G3(tempo/8);
  notes.G3(tempo/4);
  notes.E3(tempo/8);
  notes.G3(tempo/8 + tempo/8); // Ligature
  
  // Eleventh Bar
  notes.G3(tempo/8);
  notes.G3(tempo/8);
  notes.G3(tempo/8);
  notes.C4(tempo/4);
  notes.BN3(tempo/4);
  notes.A3(tempo/8 + tempo/ 8); // Ligature
  
  // Twelth Bar
  notes.E3(tempo/8);
  notes.E3(tempo/8);
  notes.E3(tempo/8);
  notes.E3(tempo/4);
  notes.E3(tempo/4);
  notes.F3(tempo/8);
  
  // Thirteenth Bar
  notes.F3(tempo/8);
  notes.F3(tempo/8);
  notes.F3(tempo/8);
  notes.F3(tempo/4);
  notes.E3(tempo/4);
  notes.E3(tempo/8);
  
  // Fourteenth Bar
  notes.C4(tempo/8);
  notes.C4(tempo/8);
  notes.C4(tempo/8);
  notes.C4(tempo/4);
  notes.C4(tempo/4);
  notes.BN3(tempo/8);
  
  // Fifteenth Bar
  notes.BN3(tempo/8);
  notes.BN3(tempo/8);
  notes.BN3(tempo/8);
  notes.BN3(tempo/4);
  notes.BN3(tempo/4);
  notes.A3(tempo/8 + tempo/8); // Ligature
  
  // Sixteenth Bar
  notes.E3(tempo/8);
  notes.E3(tempo/8);
  notes.E3(tempo/8);
  notes.E3(tempo/4);
  notes.E3(tempo/4);
  notes.F3(tempo/8);
  
  // Seventeenth Bar
  notes.F3(tempo/8);
  notes.F3(tempo/8);
  notes.F3(tempo/8);
  notes.F3(tempo/4);
  notes.E3(tempo/4);
  notes.E3(tempo/8);
}

void chorus() {
  // Eighteenth Bar
  notes.rest(tempo/4);
  notes.E3(tempo/8);
  notes.E3(tempo/8);
  notes.G3(tempo/4);
  notes.C3(tempo/4);
  notes.BN2(tempo/8 + tempo/8); // Ligature
  
  // Nineteenth Bar
  notes.E3(tempo/8);
  notes.E3(tempo/8);
  notes.G3(tempo/4);
  notes.BN2(tempo/4);
  notes.A2(tempo/8 + tempo/8); // Ligature
  
  // Twentieth Bar
  notes.E3(tempo/8);
  notes.E3(tempo/8);
  notes.E3(tempo/8);
  notes.E3(tempo/4);
  notes.E3(tempo/4);
  notes.F3(tempo/8);
  
  // Twenty-First Bar
  notes.F3(tempo/8);
  notes.F3(tempo/8);
  notes.F3(tempo/8);
  notes.F3(tempo/4);
  notes.E3(tempo/4);
  notes.E3(tempo/8 + tempo/8); // Ligature
  
  // Twenty-Second Bar
  notes.E3(tempo/4);
  notes.G3(tempo/8);
  notes.C3(tempo/4);
  notes.BN2(tempo/8 + tempo/8); // Ligature
  
  // Twenty-Third Bar
  notes.E3(tempo/4);
  notes.G3(tempo/4);
  notes.BN2(tempo/4);
  notes.A2(tempo/8 + tempo/8); // Ligature
  
  // Twenty-Fourth Bar
  notes.E3(tempo/8);
  notes.E3(tempo/8);
  notes.E3(tempo/8);
  notes.E3(tempo/4);
  notes.E3(tempo/4);
  notes.F3(tempo/8);
  
  // Twenty-Fifth Bar
  notes.F3(tempo/8);
  notes.F3(tempo/8);
  notes.F3(tempo/8);
  notes.F3(tempo/4);
  notes.E3(tempo/4);
  notes.E3(tempo/8);
}

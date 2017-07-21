#include "Arduino.h"
#include "Notes.h"

Notes::Notes(int buzzer) {
	pinMode(_buzzer, OUTPUT);
	_buzzer = buzzer;
}

void Notes::A0(int tempo) {
	tone(_buzzer, 55);
	delay(tempo - 10);
	noTone(_buzzer);
	delay(10);
}

void Notes::ASharp0(int tempo) {
	tone(_buzzer, 58);
	delay(tempo - 10);
	noTone(_buzzer);
	delay(10);
}

void Notes::BN0(int tempo) {
	tone(_buzzer, 62);
	delay(tempo - 10);
	noTone(_buzzer);
	delay(10);
}

void Notes::C0(int tempo) {
	tone(_buzzer, 33);
	delay(tempo - 10);
	noTone(_buzzer);
	delay(10);
}

void Notes::CSharp0(int tempo) {
	tone(_buzzer, 35);
	delay(tempo - 10);
	noTone(_buzzer);
	delay(10);
}

void Notes::D0(int tempo) {
	tone(_buzzer, 37);
	delay(tempo - 10);
	noTone(_buzzer);
	delay(10);
}

void Notes::DSharp0(int tempo) {
	tone(_buzzer, 39);
	delay(tempo - 10);
	noTone(_buzzer);
	delay(10);
}

void Notes::E0(int tempo) {
	tone(_buzzer, 41);
	delay(tempo - 10);
	noTone(_buzzer);
	delay(10);
}

void Notes::F0(int tempo) {
	tone(_buzzer, 44);
	delay(tempo - 10);
	noTone(_buzzer);
	delay(10);
}

void Notes::FSharp0(int tempo) {
	tone(_buzzer, 46);
	delay(tempo - 10);
	noTone(_buzzer);
	delay(10);
}

void Notes::G0(int tempo) {
	tone(_buzzer, 49);
	delay(tempo - 10);
	noTone(_buzzer);
	delay(10);
}

void Notes::GSharp0(int tempo) {
	tone(_buzzer, 52);
	delay(tempo - 10);
	noTone(_buzzer);
	delay(10);
}



void Notes::A1(int tempo) {
	tone(_buzzer, 110);
	delay(tempo - 10);
	noTone(_buzzer);
	delay(10);
}

void Notes::ASharp1(int tempo) {
	tone(_buzzer, 117);
	delay(tempo - 10);
	noTone(_buzzer);
	delay(10);
}

void Notes::BN1(int tempo) {
	tone(_buzzer, 124);
	delay(tempo - 10);
	noTone(_buzzer);
	delay(10);
}

void Notes::C1(int tempo) {
	tone(_buzzer, 65);
	delay(tempo - 10);
	noTone(_buzzer);
	delay(10);
}

void Notes::CSharp1(int tempo) {
	tone(_buzzer, 69);
	delay(tempo - 10);
	noTone(_buzzer);
	delay(10);
}

void Notes::D1(int tempo) {
	tone(_buzzer, 73);
	delay(tempo - 10);
	noTone(_buzzer);
	delay(10);
}

void Notes::DSharp1(int tempo) {
	tone(_buzzer, 78);
	delay(tempo - 10);
	noTone(_buzzer);
	delay(10);
}

void Notes::E1(int tempo) {
	tone(_buzzer, 82);
	delay(tempo - 10);
	noTone(_buzzer);
	delay(10);
}

void Notes::F1(int tempo) {
	tone(_buzzer, 87);
	delay(tempo - 10);
	noTone(_buzzer);
	delay(10);
}

void Notes::FSharp1(int tempo) {
	tone(_buzzer, 93);
	delay(tempo - 10);
	noTone(_buzzer);
	delay(10);
}

void Notes::G1(int tempo) {
	tone(_buzzer, 98);
	delay(tempo - 10);
	noTone(_buzzer);
	delay(10);
}

void Notes::GSharp1(int tempo) {
	tone(_buzzer, 104);
	delay(tempo - 10);
	noTone(_buzzer);
	delay(10);
}



void Notes::A2(int tempo) {
	tone(_buzzer, 220);
	delay(tempo - 10);
	noTone(_buzzer);
	delay(10);
}

void Notes::ASharp2(int tempo) {
	tone(_buzzer, 233);
	delay(tempo - 10);
	noTone(_buzzer);
	delay(10);
}

void Notes::BN2(int tempo) {
	tone(_buzzer, 247);
	delay(tempo - 10);
	noTone(_buzzer);
	delay(10);
}

void Notes::C2(int tempo) {
	tone(_buzzer, 131);
	delay(tempo - 10);
	noTone(_buzzer);
	delay(10);
}

void Notes::CSharp2(int tempo) {
	tone(_buzzer, 139);
	delay(tempo - 10);
	noTone(_buzzer);
	delay(10);
}

void Notes::D2(int tempo) {
	tone(_buzzer, 147);
	delay(tempo - 10);
	noTone(_buzzer);
	delay(10);
}

void Notes::DSharp2(int tempo) {
	tone(_buzzer, 156);
	delay(tempo - 10);
	noTone(_buzzer);
	delay(10);
}

void Notes::E2(int tempo) {
	tone(_buzzer, 165);
	delay(tempo - 10);
	noTone(_buzzer);
	delay(10);
}

void Notes::F2(int tempo) {
	tone(_buzzer, 175);
	delay(tempo - 10);
	noTone(_buzzer);
	delay(10);
}

void Notes::FSharp2(int tempo) {
	tone(_buzzer, 185);
	delay(tempo - 10);
	noTone(_buzzer);
	delay(10);
}

void Notes::G2(int tempo) {
	tone(_buzzer, 196);
	delay(tempo - 10);
	noTone(_buzzer);
	delay(10);
}

void Notes::GSharp2(int tempo) {
	tone(_buzzer, 208);
	delay(tempo - 10);
	noTone(_buzzer);
	delay(10);
}



void Notes::A3(int tempo) {
	tone(_buzzer, 440);
	delay(tempo - 10);
	noTone(_buzzer);
	delay(10);
}

void Notes::ASharp3(int tempo) {
	tone(_buzzer, 466);
	delay(tempo - 10);
	noTone(_buzzer);
	delay(10);
}

void Notes::BN3(int tempo) {
	tone(_buzzer, 494);
	delay(tempo - 10);
	noTone(_buzzer);
	delay(10);
}

void Notes::C3(int tempo) {
	tone(_buzzer, 262);
	delay(tempo - 10);
	noTone(_buzzer);
	delay(10);
}

void Notes::CSharp3(int tempo) {
	tone(_buzzer, 277);
	delay(tempo - 10);
	noTone(_buzzer);
	delay(10);
}

void Notes::D3(int tempo) {
	tone(_buzzer, 294);
	delay(tempo - 10);
	noTone(_buzzer);
	delay(10);
}

void Notes::DSharp3(int tempo) {
	tone(_buzzer, 311);
	delay(tempo - 10);
	noTone(_buzzer);
	delay(10);
}

void Notes::E3(int tempo) {
	tone(_buzzer, 330);
	delay(tempo - 10);
	noTone(_buzzer);
	delay(10);
}

void Notes::F3(int tempo) {
	tone(_buzzer, 349);
	delay(tempo - 10);
	noTone(_buzzer);
	delay(10);
}

void Notes::FSharp3(int tempo) {
	tone(_buzzer, 370);
	delay(tempo - 10);
	noTone(_buzzer);
	delay(10);
}

void Notes::G3(int tempo) {
	tone(_buzzer, 392);
	delay(tempo - 10);
	noTone(_buzzer);
	delay(10);
}

void Notes::GSharp3(int tempo) {
	tone(_buzzer, 415);
	delay(tempo - 10);
	noTone(_buzzer);
	delay(10);
}



void Notes::A4(int tempo) {
	tone(_buzzer, 880);
	delay(tempo - 10);
	noTone(_buzzer);
	delay(10);
}

void Notes::ASharp4(int tempo) {
	tone(_buzzer, 932);
	delay(tempo - 10);
	noTone(_buzzer);
	delay(10);
}

void Notes::BN4(int tempo) {
	tone(_buzzer, 988);
	delay(tempo - 10);
	noTone(_buzzer);
	delay(10);
}

void Notes::C4(int tempo) {
	tone(_buzzer, 523);
	delay(tempo - 10);
	noTone(_buzzer);
	delay(10);
}

void Notes::CSharp4(int tempo) {
	tone(_buzzer, 554);
	delay(tempo - 10);
	noTone(_buzzer);
	delay(10);
}

void Notes::D4(int tempo) {
	tone(_buzzer, 587);
	delay(tempo - 10);
	noTone(_buzzer);
	delay(10);
}

void Notes::DSharp4(int tempo) {
	tone(_buzzer, 622);
	delay(tempo - 10);
	noTone(_buzzer);
	delay(10);
}

void Notes::E4(int tempo) {
	tone(_buzzer, 659);
	delay(tempo - 10);
	noTone(_buzzer);
	delay(10);
}

void Notes::F4(int tempo) {
	tone(_buzzer, 699);
	delay(tempo - 10);
	noTone(_buzzer);
	delay(10);
}

void Notes::FSharp4(int tempo) {
	tone(_buzzer, 740);
	delay(tempo - 10);
	noTone(_buzzer);
	delay(10);
}

void Notes::G4(int tempo) {
	tone(_buzzer, 784);
	delay(tempo - 10);
	noTone(_buzzer);
	delay(10);
}

void Notes::GSharp4(int tempo) {
	tone(_buzzer, 831);
	delay(tempo - 10);
	noTone(_buzzer);
	delay(10);
}



void Notes::A5(int tempo) {
	tone(_buzzer, 1760);
	delay(tempo - 10);
	noTone(_buzzer);
	delay(10);
}

void Notes::ASharp5(int tempo) {
	tone(_buzzer, 1865);
	delay(tempo - 10);
	noTone(_buzzer);
	delay(10);
}

void Notes::BN5(int tempo) {
	tone(_buzzer, 1976);
	delay(tempo - 10);
	noTone(_buzzer);
	delay(10);
}

void Notes::C5(int tempo) {
	tone(_buzzer, 1047);
	delay(tempo - 10);
	noTone(_buzzer);
	delay(10);
}

void Notes::CSharp5(int tempo) {
	tone(_buzzer, 1109);
	delay(tempo - 10);
	noTone(_buzzer);
	delay(10);
}

void Notes::D5(int tempo) {
	tone(_buzzer, 1175);
	delay(tempo - 10);
	noTone(_buzzer);
	delay(10);
}

void Notes::DSharp5(int tempo) {
	tone(_buzzer, 1245);
	delay(tempo - 10);
	noTone(_buzzer);
	delay(10);
}

void Notes::E5(int tempo) {
	tone(_buzzer, 1319);
	delay(tempo - 10);
	noTone(_buzzer);
	delay(10);
}

void Notes::F5(int tempo) {
	tone(_buzzer, 1397);
	delay(tempo - 10);
	noTone(_buzzer);
	delay(10);
}

void Notes::FSharp5(int tempo) {
	tone(_buzzer, 1480);
	delay(tempo - 10);
	noTone(_buzzer);
	delay(10);
}

void Notes::G5(int tempo) {
	tone(_buzzer, 1568);
	delay(tempo - 10);
	noTone(_buzzer);
	delay(10);
}

void Notes::GSharp5(int tempo) {
	tone(_buzzer, 1661);
	delay(tempo - 10);
	noTone(_buzzer);
	delay(10);
}



void Notes::A6(int tempo) {
	tone(_buzzer, 3520);
	delay(tempo - 10);
	noTone(_buzzer);
	delay(10);
}

void Notes::ASharp6(int tempo) {
	tone(_buzzer, 3719);
	delay(tempo - 10);
	noTone(_buzzer);
	delay(10);
}

void Notes::BN6(int tempo) {
	tone(_buzzer, 3951);
	delay(tempo - 10);
	noTone(_buzzer);
	delay(10);
}

void Notes::C6(int tempo) {
	tone(_buzzer, 2093);
	delay(tempo - 10);
	noTone(_buzzer);
	delay(10);
}

void Notes::CSharp6(int tempo) {
	tone(_buzzer, 2218);
	delay(tempo - 10);
	noTone(_buzzer);
	delay(10);
}

void Notes::D6(int tempo) {
	tone(_buzzer, 2349);
	delay(tempo - 10);
	noTone(_buzzer);
	delay(10);
}

void Notes::DSharp6(int tempo) {
	tone(_buzzer, 2489);
	delay(tempo - 10);
	noTone(_buzzer);
	delay(10);
}

void Notes::E6(int tempo) {
	tone(_buzzer, 2637);
	delay(tempo - 10);
	noTone(_buzzer);
	delay(10);
}

void Notes::F6(int tempo) {
	tone(_buzzer, 2793);
	delay(tempo - 10);
	noTone(_buzzer);
	delay(10);
}

void Notes::FSharp6(int tempo) {
	tone(_buzzer, 2960);
	delay(tempo - 10);
	noTone(_buzzer);
	delay(10);
}

void Notes::G6(int tempo) {
	tone(_buzzer, 3136);
	delay(tempo - 10);
	noTone(_buzzer);
	delay(10);
}

void Notes::GSharp6(int tempo) {
	tone(_buzzer, 3322);
	delay(tempo - 10);
	noTone(_buzzer);
	delay(10);
}



void Notes::rest(int tempo) {
	noTone(_buzzer);
	delay(tempo);
}
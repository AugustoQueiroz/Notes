/*

	Notes.h - A Library with the music notes

	Created by Augusto S. Queiroz, April 27, 2015

*/

#ifndef Notes_h
#define Notes_h

#include "Arduino.h"

class Notes {
	public:
		Notes(int buzzer);
		void A0(int tempo);
		void ASharp0(int tempo);
		void BN0(int tempo);
		void C0(int tempo);
		void CSharp0(int tempo);
		void D0(int tempo);
		void DSharp0(int tempo);
		void E0(int tempo);
		void F0(int tempo);
		void FSharp0(int tempo);
		void G0(int tempo);
		void GSharp0(int tempo);

		void A1(int tempo);
		void ASharp1(int tempo);
		void BN1(int tempo);
		void C1(int tempo);
		void CSharp1(int tempo);
		void D1(int tempo);
		void DSharp1(int tempo);
		void E1(int tempo);
		void F1(int tempo);
		void FSharp1(int tempo);
		void G1(int tempo);
		void GSharp1(int tempo);

		void A2(int tempo);
		void ASharp2(int tempo);
		void BN2(int tempo);
		void C2(int tempo);
		void CSharp2(int tempo);
		void D2(int tempo);
		void DSharp2(int tempo);
		void E2(int tempo);
		void F2(int tempo);
		void FSharp2(int tempo);
		void G2(int tempo);
		void GSharp2(int tempo);

		void A3(int tempo);
		void ASharp3(int tempo);
		void BN3(int tempo);
		void C3(int tempo);
		void CSharp3(int tempo);
		void D3(int tempo);
		void DSharp3(int tempo);
		void E3(int tempo);
		void F3(int tempo);
		void FSharp3(int tempo);
		void G3(int tempo);
		void GSharp3(int tempo);

		void A4(int tempo);
		void ASharp4(int tempo);
		void BN4(int tempo);
		void C4(int tempo);
		void CSharp4(int tempo);
		void D4(int tempo);
		void DSharp4(int tempo);
		void E4(int tempo);
		void F4(int tempo);
		void FSharp4(int tempo);
		void G4(int tempo);
		void GSharp4(int tempo);

		void A5(int tempo);
		void ASharp5(int tempo);
		void BN5(int tempo);
		void C5(int tempo);
		void CSharp5(int tempo);
		void D5(int tempo);
		void DSharp5(int tempo);
		void E5(int tempo);
		void F5(int tempo);
		void FSharp5(int tempo);
		void G5(int tempo);
		void GSharp5(int tempo);

		void A6(int tempo);
		void ASharp6(int tempo);
		void BN6(int tempo);
		void C6(int tempo);
		void CSharp6(int tempo);
		void D6(int tempo);
		void DSharp6(int tempo);
		void E6(int tempo);
		void F6(int tempo);
		void FSharp6(int tempo);
		void G6(int tempo);
		void GSharp6(int tempo);

		void rest(int tempo);

	private:
		int _buzzer;
};

#endif
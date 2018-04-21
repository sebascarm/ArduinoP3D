// 
// 
// 

#include "C_GrupoChip.h"

C_GrupoChip::C_GrupoChip() {
}

void C_GrupoChip::CargarChips() {
	digitalWrite(PinLatch, 1);
	delayMicroseconds(10); /*Pasar a 20 si no se reciben bien los datos */
	digitalWrite(PinLatch, 0);
	if (Cant_Chips > 3) { Chip4 = shiftIn(PinData, PinClock, 0); }
	if (Cant_Chips > 2) { Chip3 = shiftIn(PinData, PinClock, 0); }
	if (Cant_Chips > 1) { Chip2 = shiftIn(PinData, PinClock, 0); }
	if (Cant_Chips > 0) { Chip1 = shiftIn(PinData, PinClock, 0); }
}

void C_GrupoChip::EscribirChips() {
	digitalWrite(PinLatch, LOW);
	if (Cant_Chips > 25) { shiftOut(PinData, PinClock, MSBFIRST, Chip26); }
	if (Cant_Chips > 24) { shiftOut(PinData, PinClock, MSBFIRST, Chip25); }
	if (Cant_Chips > 23) { shiftOut(PinData, PinClock, MSBFIRST, Chip25); }
	if (Cant_Chips > 22) { shiftOut(PinData, PinClock, MSBFIRST, Chip23); }
	if (Cant_Chips > 21) { shiftOut(PinData, PinClock, MSBFIRST, Chip22); }
	if (Cant_Chips > 20) { shiftOut(PinData, PinClock, MSBFIRST, Chip21); }
	if (Cant_Chips > 19) { shiftOut(PinData, PinClock, MSBFIRST, Chip20); }
	if (Cant_Chips > 18) { shiftOut(PinData, PinClock, MSBFIRST, Chip19); }
	if (Cant_Chips > 17) { shiftOut(PinData, PinClock, MSBFIRST, Chip18); }
	if (Cant_Chips > 16) { shiftOut(PinData, PinClock, MSBFIRST, Chip17); }
	if (Cant_Chips > 15) { shiftOut(PinData, PinClock, MSBFIRST, Chip16); }
	if (Cant_Chips > 14) { shiftOut(PinData, PinClock, MSBFIRST, Chip15); }
	if (Cant_Chips > 13) { shiftOut(PinData, PinClock, MSBFIRST, Chip14); }
	if (Cant_Chips > 12) { shiftOut(PinData, PinClock, MSBFIRST, Chip13); }
	if (Cant_Chips > 11) { shiftOut(PinData, PinClock, MSBFIRST, Chip12); }
	if (Cant_Chips > 10) { shiftOut(PinData, PinClock, MSBFIRST, Chip11); }
	if (Cant_Chips > 9) { shiftOut(PinData, PinClock, MSBFIRST, Chip10); }
	if (Cant_Chips > 8) { shiftOut(PinData, PinClock, MSBFIRST, Chip9); }
	if (Cant_Chips > 7) { shiftOut(PinData, PinClock, MSBFIRST, Chip8); }
	if (Cant_Chips > 6) { shiftOut(PinData, PinClock, MSBFIRST, Chip7); }
	if (Cant_Chips > 5) { shiftOut(PinData, PinClock, MSBFIRST, Chip6); }
	if (Cant_Chips > 4) { shiftOut(PinData, PinClock, MSBFIRST, Chip5); }
	if (Cant_Chips > 3) { shiftOut(PinData, PinClock, MSBFIRST, Chip4); }
	if (Cant_Chips > 2) { shiftOut(PinData, PinClock, MSBFIRST, Chip3); }
	if (Cant_Chips > 1) { shiftOut(PinData, PinClock, MSBFIRST, Chip2); }
	if (Cant_Chips > 0) { shiftOut(PinData, PinClock, MSBFIRST, Chip1); }
	digitalWrite(PinLatch, HIGH);
}
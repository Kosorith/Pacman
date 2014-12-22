#ifndef _SD_H
#define _SD_H

#include "pre_emptive_os/api/general.h"

#define	CMDREAD		17
#define	CMDWRITE	24
#define	CMDREADCSD	9

//inicjuj czytnik
tS8 sdInit(void);
//sprawd� system plik�w
tS8 sdState(void);
//pozwala na odczyt rejestru z karty i np pobranie wielko�ci karty
//z moj� to i tak nie dzia�a ;)
//CHAR sdgetDriveSize(void);
//wy�lij komende
void sdCommand(tU8 cmd, tU16 paramx, tU16 paramy);

//odpowied� 8bitowa
tU8 sdResp8b(void);
//b��d je�li nast�pi
void sdResp8bError(tU8 value);
//odpowied� 16 bitowa
tU16 sdResp16b(void);


#endif //_SD_H

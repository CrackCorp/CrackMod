/* (c) Magnus Auvinen. See licence.txt in the root of the distribution for more information. */
/* If you are missing that file, acquire a complete release at teeworlds.com.                */
#include "mod.h"

CGameControllerMOD::CGameControllerMOD(class CGameContext *pGameServer)
: IGameController(pGameServer)
{
	// not crc md5 but CrackMod lol
	m_pGameType = "CrcMD";
}

void CGameControllerMOD::Tick()
{
	IGameController::Tick();
}

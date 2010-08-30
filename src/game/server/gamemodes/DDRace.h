/* copyright (c) 2007 rajh and gregwar. Score stuff */

#ifndef DDRACE_H
#define DDRACE_H
#include <game/server/gamecontroller.h>
#include <game/server/teams.h>


class CGameControllerDDRace : public IGameController
{
public:
	
	CGameControllerDDRace(class CGameContext *pGameServer);
	~CGameControllerDDRace();
	
	CGameTeams m_Teams;

	vec2 *m_pTeleporter;
	
	void InitTeleporter();

	virtual void Tick();
};
#endif
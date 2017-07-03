#pragma once
#include "..\command.h"

class CLSBExplodeTrackZone :public CommandReg
{
public:
	CLSBExplodeTrackZone();
	~CLSBExplodeTrackZone();
	void Run();
};
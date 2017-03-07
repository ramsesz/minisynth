//
// guiparameter.h
//
// GUI representation of one patch parameter
//
// MiniSynth Pi - A virtual analogue synthesizer for Raspberry Pi
// Copyright (C) 2017  R. Stange <rsta2@o2online.de>
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
//
#ifndef _guiparameter_h
#define _guiparameter_h

#include <ugui/uguicpp.h>
#include "patch.h"
#include "synthconfig.h"

class CGUIParameter
{
public:
	CGUIParameter (UG_WINDOW *pWindow, TSynthParameter Parameter, CSynthConfig *pConfig);
	~CGUIParameter (void);

	void Create (unsigned nTextboxID, unsigned nButtonDownID, unsigned nButtonUpID,
		     unsigned nPosX, unsigned nPosY);

	void Update (void);

	boolean ButtonPressed (unsigned nButtonID);

private:
	UG_WINDOW *m_pWindow;
	TSynthParameter m_Parameter;
	CSynthConfig *m_pConfig;

	unsigned m_nTextboxID;
	unsigned m_nButtonDownID;
	unsigned m_nButtonUpID;

	UG_TEXTBOX m_Textbox;
	UG_BUTTON m_ButtonDown;
	UG_BUTTON m_ButtonUp;
};

#endif
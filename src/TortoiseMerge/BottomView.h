// TortoiseMerge - a Diff/Patch program

// Copyright (C) 2006 - Stefan Kueng

// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software Foundation,
// 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
//
#pragma once
#include "BaseView.h"

class CBottomView : public CBaseView
{
	DECLARE_DYNCREATE(CBottomView)
public:
	CBottomView(void);
	~CBottomView(void);
	
	BOOL CanSelectTextBlocks();
	void UseMyTextBlock();
	void UseMyThenTheirTextBlock();
	void UseTheirTextBlock();
	void UseTheirThenMyTextBlock();

protected:
	void	OnContextMenu(CPoint point, int nLine);
	BOOL	ShallShowContextMenu(CDiffData::DiffStates state, int nLine);
	
};

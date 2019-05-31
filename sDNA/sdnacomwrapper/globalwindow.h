//sDNA software for spatial network analysis 
//Copyright (C) 2011-2019 Cardiff University

//This program is free software: you can redistribute it and/or modify
//it under the terms of the GNU General Public License as published by
//the Free Software Foundation, either version 3 of the License, or
//(at your option) any later version.

//This program is distributed in the hope that it will be useful,
//but WITHOUT ANY WARRANTY; without even the implied warranty of
//MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//GNU General Public License for more details.

//You should have received a copy of the GNU General Public License
//along with this program.  If not, see <https://www.gnu.org/licenses/>.

#include "stdafx.h"

#include "SDNAWindow.h"

//these globals are not thread safe but are not easily avoidable:
//(see http://www.newty.de/fpt/callback.html#member)
extern CSDNAWindow *globalsdnawindow; 

int __cdecl progressor_callback(float progress) ;
int __cdecl warning_callback(const char* warning); 
/*
 *  Scanning of external subtitles
 *  Copyright (C) 2013 Andreas Öman
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "showtime.h"
#include "prop/prop.h"
#include "arch/threads.h"
#include "fileaccess/fileaccess.h"
#include "misc/isolang.h"
#include "media.h"
#include "vobsub.h"
#include "backend/backend.h"
#include "js/js.h"

#include "subtitles.h"
#include "video/video_settings.h"
#include "backend/backend.h"


//-----------------------------------------------------------------------------
// Copyright (C) 2009 Michael Gernoth <michael at gernoth.net>
// Copyright (C) 2010 iZsh <izsh at fail0verflow.com>
//
// This code is licensed to you under the terms of the GNU GPL, version 2 or,
// at your option, any later version. See the LICENSE.txt file for the text of
// the license.
//-----------------------------------------------------------------------------
// Main binary
//-----------------------------------------------------------------------------

#ifndef PROXMARK3_H__
#define PROXMARK3_H__

#include "usb_cmd.h"

#define PROXPROMPT "proxmark3> "

#ifdef __cplusplus
extern "C" {
#endif

// A label, mark current command exe status.
extern bool is_executing;

const char *get_my_executable_path(void);

const char *get_my_executable_directory(void);

#ifdef __cplusplus
}
#endif

#endif

#ifndef BACKGROUND_INPUT_H
#define BACKGROUND_INPUT_H

#include <wx/event.h>
#include <wx/log.h>
#include <wx/thread.h>
#include <wx/utils.h>
#include <wx/window.h>

void enableKeyboardBackgroundInput(wxEvtHandler* handler);

void disableKeyboardBackgroundInput();

#endif // BACKGROUND_INPUT_H

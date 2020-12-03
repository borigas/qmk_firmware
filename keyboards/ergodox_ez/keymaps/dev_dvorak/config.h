/*
  Set any config.h overrides for your specific keymap here.
  See config.h options at https://docs.qmk.fm/#/config_options?id=the-configh-file
*/
#define ORYX_CONFIGURATOR

// If you press the key and it registers multiple times on that single press, the key is considered
// to be "bouncing" or "chattering". Debouncing attempts to catch this and properly register it, by
// waiting the specified time and checking to make sure that the key was actually held down. If you
// are experiencing key chatter, try raising this value. If you're having some missed keystrokes,
// try lowering this value.
// Default DEBOUNCE=30
//#undef DEBOUNCE
//#define DEBOUNCE 50

// This sets the delay interval (in milliseconds) that the firmware uses to determine if a press
// is considered a tap or a hold. This is used for dual-action keys like Layer Tap (LT), and 
// Mod Tap (MT). If the "hold time" to trigger the "hold" action feels too long, decrease this
// value. If it is too short for you (you trigger the hold action when you meant to tap), increase
// this value. This also determines the length of time for certain other features. For Instance,
// the TT and One Shot keys use this as the timeout for a "toggle", (aka, you have to hit the key
// within this window to be considered for the "tap toggle" functionality).
// Default TAPPING_TERM=200
//#undef TAPPING_TERM
//#define TAPPING_TERM 600

// When you hold a dual-function key, and haven't pressed anything when you release the key,
// normally nothing happens. With retro tapping enabled, if you release the key without pressing
// another key, it will send the original key, even if it is outside of the tapping term. Imagine
// you're using a dual-function key that sends Space on tap and toggles layer 2 on hold. 
// Normally, if you hold the key for a long time, don't hit anything else and then release it,
// nothing happens. With retro tapping, it will send a Space keystroke.
//#define RETRO_TAPPING

// If you press and release a dual-function key (e.g, Shift when held, A when tapped) and 
// a regular key (e.g, "x") within the tapping term period, normally it would send just 
// the tapped keys ("ax"). Enable this to ensure it sends the hold version (a shifted "x" 
// keystroke in this case). Note: setting Tapping term above 500ms will automatically set it on.
//#define PERMISSIVE_HOLD

//#define AUTO_SHIFT_TIMEOUT 300
// Copyright (c) 2018-2019, The TurtleCoin Developers
// Copyright (c) 2020, The traaittPlatform Developers

// Please see the included LICENSE file for more information
#pragma once

const std::string AppleArtwork = "\n                                                                      \n"
"\n||====================================================================||\n"
"||////////////////////////////////////////////////////////////////////||\n"
"|| 100$ =================| FEDERAL RESERVE NOTE |=============== 100$ ||\n"
"|||||                                                              |||||\n"
"||<<|    TRRXITTE Int.                                             |>>||\n"
"||>>|                          88888888888         T44737133B      |<<||\n"
"||<<|                              888                             |>>||\n"
"||>>|                              888                             |<<||\n"
"||<<|      T44737133B              888             One Hundred     |>>||\n"
"||>>|                                                              |<<||\n"
"||<<|      Treasurer     ________________________     Secretary 17 |>>||\n"
"|||||                   |UNITED STATES OF AMERICA|                 |||||\n"
"|| 100$ ==================  ONE HUNDRED traaitt ================ 100$ ||\n"
"||////////////////////////////////////////////////////////////////////||\n"
"||====================================================================||\n";

const std::string nonWindowsAsciiArt =
"\n||====================================================================||\n"
"||////////////////////////////////////////////////////////////////////||\n"
"|| 100$ =================| FEDERAL RESERVE NOTE |=============== 100$ ||\n"
"|||||                    ‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾                  |||||\n"
"||<<|    TRRXITTE Int.                                             |>>||\n"
"||>>|                          88888888888         T44737133B      |<<||\n"
"||<<|                              888                             |>>||\n"
"||>>|                              888                             |<<||\n"
"||<<|      T44737133B              888             One Hundred     |>>||\n"
"||>>|                                                              |<<||\n"
"||<<|      Treasurer     ________________________     Secretary 17 |>>||\n"
"|||||                   |UNITED STATES OF AMERICA|                 |||||\n"
"|| 100$ ==================  ONE HUNDRED traaitt ================ 100$ ||\n"
"||////////////////////////////////////////////////////////////////////||\n"
"||====================================================================||\n";
#ifdef _WIN32

const std::string asciiArt = nonwindowsAsciiArt;

#else
const std::string asciiArt = AppleArtwork;
#endif

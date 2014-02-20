Webkey


 Webkey provides a http access to the main components (keyboard, touch, display, sd card) on ARM based rooted Android devices. It is written in C++ and runs entirely in the background. The project contains a JAVA program with GUI, which (auto)starts and stops the server. If you have any questions, comments, feel free to write: morapeter@gmail.com, pzatya@gmail.com.


COMPILING

I used Android NDK r8b.

Just run: make


THANKS

This is really an open source project. I want to thank

Zoltan Papp, for the JAVA client,
Mongoose webserver, which was a good choice,
 http://code.google.com/p/mongoose/
Brad Fitzpatrick for the typing idea,
 http://brad.livejournal.com/2400054.html
Tuomas Räsänen for the Simple C-API to the Linux uinput-system,
 http://codegrove.org/libsuinput/
Android-vnc, I've learnt howto read from framebuffers,
 code.google.com/p/android-vnc/
Android Open Source Project, for the kcm.* files,
 http://android.git.kernel.org/
AjaXplorer
 http://www.ajaxplorer.info
Robert Harder, Base64 Java package
 http://iharder.net/base64
René Nyffenegger's base64 C++ package
 http://www.adp-gmbh.ch/cpp/common/base64.html
OpenSSL
 This product includes cryptographic software written by Eric Young (eay@cryptsoft.com)
libpng, libjpeg, libz of course (although I couldn't compile libpng as fast as guys at debian did).



LICENSE

Copyright (C) 2010-2012  Peter Mora, Zoltan Papp

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.

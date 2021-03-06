/*
    Copyright (C) 2005-2009  Michel de Boer <michel@twinklephone.com>

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/

// Content_Language header

#ifndef _HDR_CONTENT_LANGUAGE_H
#define _HDR_CONTENT_LANGUAGE_H

#include <list>
#include <string>
#include "header.h"
#include "hdr_accept_language.h"

using namespace std;

class t_hdr_content_language : public t_header {
public:
	list<t_language> language_list;	// list of languages

	t_hdr_content_language();

	// Add a language to the list of languages
	void add_language(const t_language &language);

	string encode_value(void) const;
};

#endif

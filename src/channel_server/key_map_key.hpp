/*
Copyright (C) 2008-2016 Vana Development Team

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; version 2
of the License.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
*/
#pragma once

#include "common/types.hpp"

namespace vana {
	// This keymap is hardcoded inside the client, using a Virtual Key to Direct Input array
	enum class key_map_key {
		none = 0,
		escape = 1,
		one = 2,
		two = 3,
		three = 4,
		four = 5,
		five = 6,
		six = 7,
		seven = 8,
		eight = 9,
		nine = 10,
		zero = 11,
		minus = 12,
		equals = 13,
		backspace = 14,
		tab = 15,
		q = 16,
		w = 17,
		e = 18,
		r = 19,
		t = 20,
		y = 21,
		u = 22,
		i = 23,
		o = 24,
		p = 25,
		bracket_left = 26,
		bracket_right = 27,
		enter = 28,
		left_ctrl = 29,
		a = 30,
		s = 31,
		d = 32,
		f = 33,
		g = 34,
		h = 35,
		j = 36,
		k = 37,
		l = 38,
		semicolon = 39,
		quote = 40,
		backtick = 41,
		left_shift = 42,
		backslash = 43,
		z = 44,
		x = 45,
		c = 46,
		v = 47,
		b = 48,
		n = 49,
		m = 50,
		comma = 51,
		dot = 52,
		slash = 53,
		right_shift = 54, // Maps to 'left_shift' automatically
		multiply = 55,
		left_alt = 56,
		space = 57,
		caps_lock = 58,
		f1 = 59,
		f2 = 60,
		f3 = 61,
		f4 = 62,
		f5 = 63,
		f6 = 64,
		f7 = 65,
		f8 = 66,
		f9 = 67,
		f10 = 68,
		num_lock = 69,
		scroll_lock = 70,
		numpad_7_or_home = 71,
		numpad_8 = 72,
		numpad_9_or_pageup = 73,
		subtract = 74,
		numpad_4 = 75,
		numpad_5 = 76,
		numpad_6 = 77,
		add = 78,
		numpad_1_or_end = 79,
		numpad_2 = 80,
		numpad_3_or_pagedown = 81,
		numpad_0_or_insert = 82,
		numpad_decimal_or_delete_key = 83,
		f11 = 87,
		f12 = 88,
		f13 = 100,
		f14 = 101,
		f15 = 102,
		japanese_kana = 112,
		japanese_convert = 121,
		japanese_no_convert = 122,
		japanese_yen = 125,
		numpad_equals = 141,
		japanese_circumflex = 144,
		necpc_at = 145,
		necpc_colon = 146,
		necpc_underline = 147,
		japanese_kanji = 148,
		necpc_stop = 149,
		japan_ax = 150,
		j3100_unlabeled = 151,
		numpad_enter = 156,
		right_control = 157,
		divide = 181,
		sysrq = 183,
		right_alt = 184,
		pause = 197,
		home = 199,
		arrow_up = 200,
		page_up = 201,
		arrow_left = 203,
		arrow_right = 205,
		end = 207,
		arrow_down = 208,
		page_down = 209,
		insert = 210,
		delete_key = 211,
		left_windows = 219,
		right_windows = 220,
		menu = 221,
		power = 222,
		sleep = 223,
	};
}
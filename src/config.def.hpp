// somebar - dwl bar
// See LICENSE file for copyright and license details.

#pragma once
#include "common.hpp"

constexpr bool topbar = true;

constexpr int paddingX = 8;
constexpr int paddingY = 3;

// See https://docs.gtk.org/Pango/type_func.FontDescription.from_string.html
constexpr const char* font = "JetBrainsMono Nerd Font Bold 9";

constexpr ColorScheme colorInactive = {Color(0xc0, 0xc0, 0xc0), Color(0x28, 0x2c, 0x34)};
constexpr ColorScheme colorActive = {Color(0x28, 0x2c, 0x34), Color(0x61, 0xaf, 0xef),};

static std::vector<std::string> tagNames = {
	"1", "2", "3",
	"4", "5", "6",
	"7", "8", "9",
};

constexpr Button buttons[] = {
};

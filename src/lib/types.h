#ifndef WINPLAYER_TYPES_H
#define WINPLAYER_TYPES_H

#include <map>
#include <string>
#include <vector>

struct ArtData {
	char* data;
	int size;
	std::wstring type;
};

struct Metadata {
	std::wstring id;
	std::wstring title;
	std::wstring artist;
	std::vector<std::wstring> artists;
	std::wstring album;
	std::wstring albumArtist;
	std::vector<std::wstring> albumArtists;
	std::optional<ArtData> artData;
	float length;
};

struct Capabilities {
	bool canControl;
	bool canPlayPause;
	bool canGoNext;
	bool canGoPrevious;
	bool canSeek;
};

struct Update {
	Metadata metadata;
	Capabilities capabilities;
	std::wstring status;
	std::wstring loop;
	bool shuffle;
	float volume;
	float elapsed;
	std::wstring app;
	std::wstring appName;
};

#endif // WINPLAYER_TYPES_H
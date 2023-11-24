#ifndef SONG_H
#define SONG_H

#include <string>

using namespace std;

class Song {
private:
    int songId;
    string title;
    string artist;
    string album;
    string genre;
    string lyricsAuthor;
    string language;
    int releaseYear;
    float duration;

public:
    Song(int id, const string& songTitle, const string& artistName,
         const string& albumName, const string& songGenre,
         const string& author, const string& lang,
         int year, float songDuration);

    void displayDetails();
};

#endif // SONG_H

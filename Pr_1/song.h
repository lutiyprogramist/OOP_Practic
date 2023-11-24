#ifndef SONG_H
#define SONG_H

#include <string>

using namespace std;

class Song {
private:
    int id;
    string title;
    string artist;
    string album;
    string genre;
    string lyricsAuthor;
    string language;
    int releaseYear;
    float duration;

public:
    Song();
    Song(int id, const string& songTitle, const string& artistName,
         const string& albumName, const string& songGenre,
         const string& author, const string& lang,
         int year, float songDuration);

    Song(const Song& otherSong);

    ~Song();
    void displayDetails();
};

#endif // SONG_H
